#!/usr/bin/env python3
"""Compile the Ghidra listings in decomp/server and decomp/client.

The listings are Ghidra 12.1.4 output. This rewrites qualified names, array
return types, and destructor calls into C++, then compiles each function
against ghidra/ghidra_compat.hpp. Data symbols are mapped onto the bytes of
the original DLL.
"""
import argparse
import os
import re
import struct
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DECOMP = ROOT / "decomp"
HEADER = ROOT / "ghidra" / "ghidra_compat.hpp"
BUILD = ROOT / "build" / "ghidra"

KEYWORDS = {
    "if", "for", "while", "do", "switch", "case", "break", "continue", "return",
    "goto", "sizeof", "struct", "union", "enum", "typedef", "const", "volatile",
    "static", "extern", "register", "signed", "unsigned", "void", "int", "char",
    "short", "long", "float", "double", "bool", "true", "false", "this", "new",
    "delete", "class", "public", "private", "protected", "virtual", "template",
    "typename", "operator", "else", "throw", "try", "catch", "namespace", "using",
    "asm", "float10", "undefined", "undefined1", "undefined2", "undefined3",
    "undefined4", "undefined5", "undefined6", "undefined8", "byte", "uint",
    "ushort", "ulong", "ulonglong", "longlong", "dword", "word", "qword", "code",
    "ghidra_arr10", "GStruct", "GhidraCell", "SCell", "AnyPtr", "Call", "CodePtr",
    "int3", "uint3", "int6", "uint6", "CHAR", "WCHAR", "BYTE", "WORD",
    "unkbyte10", "unkint10", "unkuint10", "BADSPACEBASE", "auto",
    "size_t", "ptrdiff_t", "wchar_t", "max_align_t", "nullptr_t",
}
ENTRY = {"GiveFnptrsToDll", "GetEntityAPI", "GetEntityAPI2"}
SYM = re.compile(
    r"\b(?:_DAT_[0-9A-Fa-f]+|DAT_[0-9A-Fa-f]+|PTR_[A-Za-z0-9_]+|s_[A-Za-z0-9_]+|(?:pi|pu|pb|pc|pf|i|u|b|c|d|f|s)Ram[0-9A-Fa-f]+)\b"
)
# Ghidra string symbols can contain '<' and '>'. Those are not C identifiers.
RAW_SYM = re.compile(
    r"\b(?:_DAT_|DAT_|PTR_|(?:pi|pu|pb|pc|pf|i|u|b|c|d|f|s)Ram|s_)[A-Za-z0-9_<>]*"
)
STRING = re.compile(r'"(?:\\.|[^"\\])*"')
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)


def strip_comments(text):
    strings = []

    def hold(m):
        strings.append(m.group(0))
        return f"__STR{len(strings) - 1}__"

    masked = STRING.sub(hold, text)
    masked = COMMENT.sub(" ", masked)

    def restore(m):
        return strings[int(m.group(1))]

    return re.sub(r"__STR(\d+)__", restore, masked)


def sanitize_templates(text):
    pat = re.compile(r"([A-Za-z_][\w:]*)<([^<>]+)>")

    def repl(m):
        inner = re.sub(r"[^A-Za-z0-9_]+", "_", m.group(2)).strip("_")
        return f"{m.group(1)}_{inner}_"

    prev = None
    while prev != text:
        prev = text
        text = pat.sub(repl, text)
    return text


INTRINSICS = {
    "SQRT": "ghidra_sqrt",
    "ABS": "ghidra_abs",
    "NAN": "ghidra_isnan",
    "ROUND": "ghidra_round",
    "LOCK": "ghidra_lock",
    "UNLOCK": "ghidra_unlock",
    "POPCOUNT": "ghidra_popcount",
}


def sanitize_symbols(text):
    def repl(m):
        return re.sub(r"[^A-Za-z0-9_]", "_", m.group(0))

    return RAW_SYM.sub(repl, text)


def rewrite_case_labels(text):
    def float_case(m):
        bits = struct.unpack("<i", struct.pack("<f", float(m.group(1))))[0]
        return f"case {bits}:"

    text = re.sub(
        r"\bcase\s+([+-]?(?:\d+\.\d*|\.\d+)(?:[eE][+-]?\d+)?)\s*:",
        float_case,
        text,
    )
    text = re.sub(
        r"\bcase\s+\(\s*[A-Za-z_][A-Za-z0-9_ ]*\s*\*+\s*\)\s*(0x[0-9A-Fa-f]+|\d+)\s*:",
        r"case \1:",
        text,
    )
    return text


def rewrite(text):
    text = strip_comments(text)
    text = sanitize_symbols(text)
    text = rewrite_case_labels(text)
    text = re.sub(r"undefined1\s*\[\s*10\s*\]", "ghidra_arr10", text)
    text = re.sub(
        r"\bundefined1\s+([A-Za-z_][A-Za-z0-9_]*)\s*\[\s*10\s*\]",
        r"ghidra_arr10 \1",
        text,
    )
    text = text.replace("operator[]", "operator_index")
    text = text.replace("operator=", "operator_assign")
    text = re.sub(r"\bthis\b", "self", text)
    for src, dst in INTRINSICS.items():
        text = re.sub(rf"\b{src}\s*\(", dst + "(", text)
    text = re.sub(
        r"([A-Za-z_][\w]*)::~([A-Za-z_][\w]*)",
        lambda m: f"{m.group(1)}_dtor",
        text,
    )
    text = re.sub(r"~([A-Za-z_][\w]*)\s*\(", r"\1_dtor(", text)
    text = sanitize_templates(text)
    while "::" in text:
        text = text.replace("::", "_")
    masked, strings = mask_strings(text)
    masked = re.sub(r"\bcode\s*\*\s*\*", "CodePtr *", masked)
    masked = re.sub(r"\bcode\s*\*", "CodePtr ", masked)
    masked = re.sub(r"\bcode\b", "CodePtr", masked)
    masked = rewrite_casts(masked)
    masked = re.sub(
        r"\b([A-Za-z_][A-Za-z0-9_]*)\._(\d+)_(\d+)_",
        r"(ghidra_piece<\2, \3>(\1))",
        masked,
    )
    masked = rewrite_arr_assign(masked)
    masked = rewrite_switches(masked)
    return unmask(masked, strings)


def mask_strings(text):
    strings = []

    def hold(m):
        strings.append(m.group(0))
        return f"__STR{len(strings) - 1}__"

    return STRING.sub(hold, text), strings


def unmask(text, strings):
    def restore(m):
        return strings[int(m.group(1))]

    return re.sub(r"__STR(\d+)__", restore, text)


def function_parts(text):
    """Split a function into the signature and the body, skipping extern \"C\"."""
    start = 0
    if text.lstrip().startswith('extern "C"'):
        start = text.find("{") + 1
    paren = text.find("(", start)
    if paren < 0:
        return text, ""
    depth = 0
    for j in range(paren, len(text)):
        if text[j] == "(":
            depth += 1
        elif text[j] == ")":
            depth -= 1
            if depth == 0:
                brace = text.find("{", j)
                if brace < 0:
                    return text, ""
                return text[:brace], text[brace + 1:]
    return text, ""


def qualify_body(text, func_name, functions, classes):
    """Rewrite bare method calls to the Class_method that this function belongs to."""
    if "{" not in text:
        return text
    head, body = function_parts(text)
    if not body:
        return text
    prefixes = []
    cls = None
    for name in classes:
        if func_name.startswith(name + "_") and (cls is None or len(name) > len(cls)):
            cls = name
    if cls:
        prefixes.append(cls)
    name = func_name
    while "_" in name:
        name = name.rsplit("_", 1)[0]
        if name not in prefixes:
            prefixes.append(name)
    if not prefixes:
        return text
    masked, strings = mask_strings(body)

    def repl(m):
        ident = m.group(1)
        if ident in KEYWORDS or ident.startswith("ghidra_"):
            return m.group(0)
        # A real function that is not also a type name (constructors are types).
        if ident in functions and ident not in classes:
            return m.group(0)
        best = None
        for prefix in prefixes:
            qualified = f"{prefix}_{ident}"
            if qualified in functions and (best is None or len(qualified) > len(best)):
                best = qualified
        if best:
            return best + m.group(2)
        return m.group(0)

    masked = re.sub(r"\b([A-Za-z_][A-Za-z0-9_]*)(\s*\()", repl, masked)

    def repl_bare(m):
        ident = m.group(0)
        if ident in KEYWORDS or ident in classes or ident in functions or ident.startswith("ghidra_"):
            return ident
        best = None
        for prefix in prefixes:
            qualified = f"{prefix}_{ident}"
            if qualified in functions and (best is None or len(qualified) > len(best)):
                best = qualified
        return best or ident

    masked = re.sub(r"\b[A-Za-z_][A-Za-z0-9_]*\b", repl_bare, masked)
    return head + "{" + unmask(masked, strings)


def loosen_calls(text, functions):
    if "{" not in text:
        return text
    head, body = function_parts(text)
    if not body:
        return text
    masked, strings = mask_strings(body)

    def repl(m):
        name = m.group(1)
        if name not in functions:
            return m.group(0)
        j = m.end()
        while j < len(m.string) and m.string[j] in " \t\r\n":
            j += 1
        if j < len(m.string) and m.string[j] == ")":
            return f"ghidra_invoke({name}"
        return f"ghidra_invoke({name},"

    masked = re.sub(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", repl, masked)
    return head + "{" + unmask(masked, strings)


def skip_ws(s, i):
    while i < len(s) and s[i] in " \t\r\n":
        i += 1
    return i


def match_delim(s, i, open_c, close_c):
    depth = 0
    j = i
    while j < len(s):
        if s[j] == '"':
            j += 1
            while j < len(s) and s[j] != '"':
                if s[j] == "\\":
                    j += 2
                    continue
                j += 1
            j += 1
            continue
        if s[j] == open_c:
            depth += 1
        elif s[j] == close_c:
            depth -= 1
            if depth == 0:
                return j + 1
        j += 1
    return len(s)


def parse_postfix_tail(s, i):
    while True:
        j = skip_ws(s, i)
        if j < len(s) and s[j] == "[":
            i = match_delim(s, j, "[", "]")
        elif j < len(s) and s[j] == "(":
            i = match_delim(s, j, "(", ")")
        elif j < len(s) and s[j] == ".":
            k = skip_ws(s, j + 1)
            m = re.match(r"[A-Za-z_][A-Za-z0-9_]*", s[k:])
            if not m:
                break
            i = k + m.end()
        elif s.startswith("->", j):
            k = skip_ws(s, j + 2)
            m = re.match(r"[A-Za-z_][A-Za-z0-9_]*", s[k:])
            if not m:
                break
            i = k + m.end()
        elif s.startswith("++", j) or s.startswith("--", j):
            i = j + 2
        else:
            break
    return i


def parse_unary(s, i):
    i = skip_ws(s, i)
    if i >= len(s):
        return i
    if s[i] in "+-~!*&":
        return parse_unary(s, i + 1)
    if s[i] == "(":
        j = match_delim(s, i, "(", ")")
        inner = s[i + 1:j - 1].strip()
        if re.fullmatch(
            r"(?:(?:const|unsigned|signed|volatile|struct)\s+)*[A-Za-z_][A-Za-z0-9_]*\s*\**",
            inner,
        ):
            return parse_unary(s, j)
        return parse_postfix_tail(s, j)
    m = re.match(r"[A-Za-z_][A-Za-z0-9_]*|\d[\d.A-Fa-fxX]*", s[i:])
    if not m:
        return i
    return parse_postfix_tail(s, i + m.end())


def rewrite_casts(text):
    num = re.compile(r"\(\s*(float10|float|double)\s*\)")
    ptr = re.compile(
        r"\(\s*((?:const\s+|volatile\s+|unsigned\s+|signed\s+)*)"
        r"([A-Za-z_][A-Za-z0-9_]*)\s*(\*+)\s*\)"
    )
    cur = text
    for _ in range(4):
        out = []
        i = 0
        changed = False
        while i < len(cur):
            mn = num.search(cur, i)
            mp = ptr.search(cur, i)
            if not mn and not mp:
                out.append(cur[i:])
                break
            if mn and (not mp or mn.start() <= mp.start()):
                m = mn
                kind = "num"
            else:
                m = mp
                kind = "ptr"
            op_end = parse_unary(cur, m.end())
            if op_end <= m.end():
                out.append(cur[i:m.end()])
                i = m.end()
                continue
            operand = cur[m.end():op_end]
            out.append(cur[i:m.start()])
            if kind == "num":
                to = {"float": "float", "float10": "long double", "double": "double"}[m.group(1)]
                out.append(f"ghidra_as<{to}>({operand})")
            else:
                base = (m.group(1) + m.group(2)).strip()
                stars = len(m.group(3))
                inner = base if stars == 1 else base + " " + ("*" * (stars - 1))
                out.append(f"ghidra_pcast<{inner}>({operand})")
            changed = True
            i = op_end
        cur = "".join(out)
        if not changed:
            break
    return cur


def rewrite_arr_assign(text):
    pat = re.compile(
        r"\b([A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
        r"\(\s*(?:char|byte|undefined1)\s*\[\s*\d+\s*\]\s*\)"
    )
    out = []
    i = 0
    for m in pat.finditer(text):
        op_end = parse_unary(text, m.end())
        if op_end <= m.end():
            continue
        out.append(text[i:m.start()])
        out.append(f"ghidra_setarr({m.group(1)}, {text[m.end():op_end]})")
        i = op_end
    out.append(text[i:])
    return "".join(out)


def rewrite_switches(text):
    out = []
    i = 0
    for m in re.finditer(r"\bswitch\s*\(", text):
        end = match_delim(text, m.end() - 1, "(", ")")
        cond = text[m.end():end - 1]
        out.append(text[i:m.start()])
        out.append(f"switch(ghidra_switch({cond}))")
        i = end
    out.append(text[i:])
    return "".join(out)


def rewrite_func_refs(text, addr_to_name):
    def repl(m):
        addr = m.group(1).lower()
        name = addr_to_name.get(addr) or addr_to_name.get(addr.zfill(8)[-8:])
        if name and not name.endswith("_" + addr):
            return name
        return f"((CodePtr)0x{m.group(1)})"

    return re.sub(r"\bfunc_0x([0-9A-Fa-f]+)\b", repl, text)


def rewrite_fn_returns(text, functions):
    head, body = function_parts(text)
    if not body:
        return text

    def repl(m):
        name = m.group(1)
        if name in functions:
            return f"return ghidra_fp({name})"
        return m.group(0)

    body = re.sub(r"\breturn\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?=;)", repl, body)
    return head + "{" + body


def function_name(text):
    head = text.split("{", 1)[0]
    m = re.search(r"([A-Za-z_][A-Za-z0-9_]*)\s*\(", head)
    # The last identifier before the first paren is the function. The regex
    # above is the first. Walk all of them in the head and take the last
    # that is followed by '('.
    names = list(re.finditer(r"([A-Za-z_][A-Za-z0-9_]*)\s*\(", head))
    if not names:
        return None
    return names[-1].group(1)


def rename_definition(text, old, new):
    head, body = text.split("{", 1)
    head2, n = re.subn(
        rf"\b{re.escape(old)}\s*\(",
        new + "(",
        head,
        count=1,
    )
    if n != 1:
        # fall back: replace the last occurrence in the signature
        idx = head.rfind(old)
        if idx < 0:
            raise RuntimeError(f"cannot rename {old}")
        head2 = head[:idx] + new + head[idx + len(old):]
    if not head2.lstrip().startswith("static"):
        head2 = "static " + head2.lstrip()
    return head2 + "{" + body


def extern_c(text, name):
    if name not in ENTRY:
        return text
    return 'extern "C" {\n' + text + "\n}\n"


def load_dll(path):
    data = path.read_bytes()
    e = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, e + 6)[0]
    opt = struct.unpack_from("<H", data, e + 20)[0]
    sec = e + 24 + opt
    sections = []
    end = 0
    for i in range(nsec):
        o = sec + i * 40
        name = data[o:o + 8].split(b"\x00", 1)[0].decode()
        vsize, va, rawsize, raw = struct.unpack_from("<IIII", data, o + 8)
        sections.append((name, va, vsize, raw, rawsize))
        end = max(end, va + vsize)
    image = bytearray(end)
    for name, va, vsize, raw, rawsize in sections:
        if name == ".reloc":
            continue
        n = min(vsize, rawsize, len(data) - raw)
        if n > 0:
            image[va:va + n] = data[raw:raw + n]
    return bytes(image)


def symbol_kind_addr(name):
    if name.startswith("s_"):
        kind = "s_"
    else:
        kind = "cell"
    m = re.search(r"([0-9A-Fa-f]{4,})$", name)
    if not m:
        return None
    return kind, int(m.group(1), 16)


def collect_symbols(texts):
    syms = {}
    for text in texts:
        for m in SYM.finditer(text):
            parsed = symbol_kind_addr(m.group(0))
            if parsed:
                syms.setdefault(m.group(0), parsed)
    return syms


def write_symbols(path, syms, image_len):
    lines = ["#pragma once", '#include "ghidra_compat.hpp"', ""]
    for name, (kind, addr) in sorted(syms.items(), key=lambda kv: kv[1][1]):
        off = addr - 0x10000000
        if off < 0 or off >= image_len:
            off = 0
        cell = "SCell" if kind == "s_" else "GhidraCell"
        lines.append(f"#define {name} GH_CELL(0x{addr:X}, {cell})")
    path.write_text("\n".join(lines) + "\n")


# Ghidra local and register names. These are not types even when they contain capitals.
VAR_NAME = re.compile(
    r"^(?:param_\d+|local_[0-9A-Fa-f]+|[a-z]{1,3}Var\d+|"
    r"(?:in|unaff|extraout)_[A-Za-z0-9]+|[a-z]+Stack_[0-9A-Fa-f]+|"
    r"auStack_[0-9A-Fa-f]+|stack0x[0-9A-Fa-f]+|this_\d+)$"
)
LOWER_TYPES = {
    "exception", "errno_t", "uchar", "unkbyte10", "unkuint10", "unkint10",
}
# Type, then optional stars, then an optional calling convention, then the declarator.
DECL = re.compile(
    r"(?:^|[(\n,;])\s*"
    r"(?:(?:const|unsigned|signed|volatile|static|extern|struct|enum)\s+)*"
    r"([A-Za-z_][A-Za-z0-9_]*)"
    r"(?:\s*\*+\s*|\s+)"
    r"(?:__(?:cdecl|fastcall|thiscall|stdcall)\s+)*"
    r"([A-Za-z_][A-Za-z0-9_]*)"
    r"\s*(?=[,;)=\[(])",
    re.M,
)
CAST = re.compile(
    r"\(\s*(?:(?:const|unsigned|signed|volatile|struct|enum)\s+)*"
    r"([A-Za-z_][A-Za-z0-9_]*)"
    r"\s*\*+\s*\)"
)


def looks_like_type(name):
    if name in KEYWORDS or name.startswith("__"):
        return False
    if name.startswith("LAB_") or name.startswith("switchD_") or name.startswith("caseD_"):
        return False
    if VAR_NAME.match(name):
        return False
    if name in LOWER_TYPES:
        return True
    if name[:1].isupper() or name.startswith("_"):
        return True
    return any(c.isupper() for c in name)


def collect_types(texts, functions):
    types = set()
    for text in texts:
        for m in DECL.finditer(text):
            if looks_like_type(m.group(1)):
                types.add(m.group(1))
        for m in CAST.finditer(text):
            if looks_like_type(m.group(1)):
                types.add(m.group(1))
        for m in re.finditer(r"ghidra_pcast\s*<\s*([A-Za-z_][A-Za-z0-9_]*)", text):
            if looks_like_type(m.group(1)):
                types.add(m.group(1))
        # `(LPPOINT)x` is a by-value cast. The pointer-cast scanner misses it.
        for m in re.finditer(r"\(\s*([A-Z][A-Z0-9_]{2,})\s*\)", text):
            if looks_like_type(m.group(1)):
                types.add(m.group(1))
    types -= KEYWORDS
    types -= functions
    return sorted(types)


def write_types(path, types):
    lines = ["#pragma once", '#include "ghidra_compat.hpp"', ""]
    for name in types:
        lines.append(f"using {name} = GStruct;")
    path.write_text("\n".join(lines) + "\n")


def write_free(path, texts, skipped, functions, types):
    names = set()
    vftables = set()
    stubs = []
    seen_stubs = set()
    for name in skipped:
        m = re.match(r"[0-9A-Fa-f]+_(.+)\.c$", name)
        if m and m.group(1).isidentifier() and m.group(1) not in seen_stubs:
            seen_stubs.add(m.group(1))
            stubs.append(m.group(1))
    for text in texts:
        names.update(re.findall(r"\b((?:stack|register)0x[0-9A-Fa-f]+)\b", text))
        names.update(re.findall(r"\b(_uStack[0-9A-Fa-f]+)\b", text))
        names.update(re.findall(r"\b(switchD_[A-Za-z0-9_]+)\b", text))
        names.update(re.findall(r"\b(FuncInfo_[0-9A-Fa-f]+)\b", text))
        names.update(re.findall(r"\b(type_info_vftable)\b", text))
        vftables.update(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*vftable[A-Za-z0-9_]*)\b", text))
        names.update(re.findall(r"\b(_vbtable_)\b", text))
        names.update(re.findall(r"\b(LAB_[0-9A-Fa-f]+)\b", text))
        names.update(re.findall(r"\b(_(?:local|param|stack)_[0-9A-Za-z]+)\b", text))
    externs = set()
    call = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(")
    for text in texts:
        for m in call.finditer(text):
            name = m.group(1)
            if (
                name in functions
                or name in types
                or name in KEYWORDS
                or name.startswith("ghidra_")
                or name.startswith("__")
                or name.startswith("CONCAT")
                or name.startswith("CARRY")
                or name.startswith("SCARRY")
                or name.startswith("SUB")
                or name.startswith("ZEXT")
                or VAR_NAME.match(name)
            ):
                continue
            externs.add(name)
    exrefs = set()
    for text in texts:
        exrefs.update(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*_exref)\b", text))
    flags = [
        "in_AF", "in_CF", "in_ZF", "in_SF", "in_OF", "in_PF", "in_DF", "in_IF", "in_TF",
    ]
    lines = ["#pragma once", '#include "ghidra_compat.hpp"', ""]
    lines.append("inline void *ExceptionList;")
    lines.append("inline SCell s_;")
    for name in flags:
        lines.append(f"inline unsigned char {name};")
    names -= set(functions)
    names -= externs
    names -= vftables
    for name in sorted(vftables):
        if name not in functions and name not in externs:
            lines.append(f"inline unsigned char *{name};")
    for name in sorted(names):
        if name in ("segment", "builtin_memcpy") or name in stubs:
            continue
        lines.append(f"inline unsigned char {name};")
    lines.append("template <class A, class B>")
    lines.append("inline unsigned segment(A, B) { return 0; }")
    lines.append("template <class A, class B, class C>")
    lines.append("inline A builtin_memcpy(A d, B, C) { return d; }")
    for name in sorted(exrefs):
        if name not in functions and name not in externs:
            lines.append(f"inline CodePtr {name};")
    for name in sorted(externs):
        if name in functions or name in stubs:
            continue
        lines.append("template <class... A>")
        lines.append(f"inline uintptr_t {name}(A...) {{ return 0; }}")
    for name in stubs:
        lines.append("template <class... A>")
        lines.append(f"inline uintptr_t {name}(A...) {{ return 0; }}")
    path.write_text("\n".join(lines) + "\n")


def signature_of(text):
    head = text.split("{", 1)[0].strip()
    head = re.sub(r"\s+", " ", head)
    return head


def prepare(side, dll, limit):
    src_dir = DECOMP / side
    out = BUILD / side
    gen = out / "src"
    if gen.exists():
        for child in gen.glob("*.cpp"):
            child.unlink()
    gen.mkdir(parents=True, exist_ok=True)
    files = sorted(src_dir.glob("*.c"))
    rewritten = []
    skipped = []
    for path in files:
        raw = path.read_text(errors="replace")
        if raw.startswith("/* Ghidra decompiler failed"):
            skipped.append(path.name)
            continue
        text = rewrite(raw)
        if "{" not in text:
            skipped.append(path.name)
            continue
        name = function_name(text)
        if not name:
            skipped.append(path.name)
            continue
        addr = path.name[:8]
        rewritten.append((addr, name, text, path.name))
    seen = {}
    functions = set()
    units = []
    decls = []
    for addr, name, text, src in rewritten:
        if name in seen:
            text = rename_definition(text, name, f"{name}_{addr}")
            cname = f"{name}_{addr}"
        else:
            seen[name] = addr
            sig = signature_of(text)
            if name in ENTRY:
                decls.append('extern "C" ' + sig + ";")
            else:
                decls.append(sig + ";")
            text = extern_c(text, name)
            cname = name
        functions.add(cname)
        functions.add(name)
        units.append((addr, cname, text, src))
    (out / "ghidra_funcs.hpp").write_text(
        "#pragma once\n"
        '#include "ghidra_compat.hpp"\n'
        '#include "ghidra_types.hpp"\n'
        + "\n".join(decls)
        + "\n"
    )
    order = [text for _, _, text, _ in units]
    image = load_dll(dll)
    syms = collect_symbols(order)
    write_symbols(out / "ghidra_syms.hpp", syms, len(image))
    types = collect_types(order, functions)
    # A type typedef must not hide a function or a data symbol.
    types = [t for t in types if t not in functions and t not in syms]
    write_types(out / "ghidra_types.hpp", types)
    write_free(out / "ghidra_free.hpp", order, skipped, functions, set(types))
    classes = set(types)
    addr_to_name = {addr.lower(): cname for addr, cname, _, _ in units}
    rewritten_units = []
    for addr, cname, text, src in units:
        text = qualify_body(text, cname, functions, classes)
        text = rewrite_func_refs(text, addr_to_name)
        text = rewrite_fn_returns(text, functions)
        text = loosen_calls(text, functions)
        rewritten_units.append((addr, cname, text, src))
    units = rewritten_units
    emit = units if not limit else units[:limit]
    (out / "ghidra_image.cpp").write_text(
        '#include "ghidra_compat.hpp"\n'
        f"unsigned ghidra_image_size = {len(image)};\n"
        f"unsigned char ghidra_image[{len(image)}] = {{\n"
        + ",".join(str(b) for b in image)
        + "\n};\n"
    )
    for addr, cname, text, src in emit:
        (gen / f"{addr}.cpp").write_text(
            '#include "ghidra_compat.hpp"\n'
            '#include "ghidra_types.hpp"\n'
            '#include "ghidra_free.hpp"\n'
            '#include "ghidra_syms.hpp"\n'
            '#include "ghidra_funcs.hpp"\n'
            + text
            + ("\n" if not text.endswith("\n") else "")
        )
    return emit, skipped, out


def compile_one(cpp, out_dir, include):
    obj = out_dir / "obj" / (cpp.stem + ".o")
    cmd = [
        "g++", "-c", "-std=c++17", "-fpermissive", "-w", "-O0", "-fmax-errors=3",
        "-I", str(include),
        "-I", str(ROOT / "ghidra"),
        str(cpp), "-o", str(obj),
    ]
    proc = subprocess.run(cmd, capture_output=True, text=True)
    err = proc.stderr.strip()
    return cpp.name, proc.returncode, err


def compile_all(out, jobs):
    gen = out / "src"
    obj = out / "obj"
    obj.mkdir(parents=True, exist_ok=True)
    cpps = sorted(gen.glob("*.cpp"))
    failures = []
    ok = 0
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        futs = [pool.submit(compile_one, cpp, out, out) for cpp in cpps]
        for fut in as_completed(futs):
            name, code, err = fut.result()
            if code == 0:
                ok += 1
            else:
                failures.append((name, err))
    # The image is one translation unit too.
    image = out / "ghidra_image.cpp"
    name, code, err = compile_one(image, out, out)
    if code != 0:
        failures.append((name, err))
    else:
        ok += 1
    return ok, failures


def archive(out, side):
    objs = sorted((out / "obj").glob("*.o"))
    lib = out / f"libefw_ghidra_{side}.a"
    if not objs:
        return lib, 0
    subprocess.check_call(["ar", "rcs", str(lib), *map(str, objs)])
    return lib, len(objs)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--side", choices=("server", "client", "both"), default="both")
    parser.add_argument("--dll", type=Path, action="append", default=[])
    parser.add_argument("--limit", type=int, default=0)
    parser.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    args = parser.parse_args()
    defaults = {
        "server": Path("/tmp/efw/EscapeFromWoomera_v084/dlls/EscapeFromWoomera.dll"),
        "client": Path("/tmp/efw/EscapeFromWoomera_v084/cl_dlls/client.dll"),
    }
    dlls = {}
    if args.dll:
        for path in args.dll:
            dlls[path.name] = path
    sides = ["server", "client"] if args.side == "both" else [args.side]
    failed_total = 0
    for side in sides:
        dll = defaults[side]
        if not dll.exists():
            print(f"missing {dll}", file=sys.stderr)
            return 1
        print(f"preparing {side} from {dll}")
        units, skipped, out = prepare(side, dll, args.limit)
        print(f"  {len(units)} functions, skipped {len(skipped)}")
        ok, failures = compile_all(out, args.jobs)
        print(f"  compiled {ok}, failed {len(failures)}")
        log = out / "failures.log"
        with log.open("w") as fh:
            for name, err in sorted(failures):
                fh.write(f"===== {name} =====\n{err}\n")
        if not failures:
            lib, nobj = archive(out, side)
            print(f"  archive {lib} ({nobj} objects)")
        else:
            failed_total += len(failures)
            print(f"  errors in {log}")
            counts = {}
            for name, err in failures:
                for line in err.splitlines():
                    if "error:" in line:
                        msg = line.split("error:", 1)[1].strip()
                        msg = re.sub(r"[‘'].*?[’']", "X", msg)
                        counts[msg] = counts.get(msg, 0) + 1
                        break
            for msg, n in sorted(counts.items(), key=lambda kv: -kv[1])[:12]:
                print(f"    {n:5} {msg[:200]}")
    return 1 if failed_total else 0


if __name__ == "__main__":
    sys.exit(main())
