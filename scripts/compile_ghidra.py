#!/usr/bin/env python3
"""Compile the Ghidra listings in decomp/server and decomp/client.

The listings are Ghidra 12.1.4 output. This rewrites qualified names, array
return types, and destructor calls into C++, then compiles each function
against ghidra/ghidra_compat.hpp. Data symbols are mapped onto the bytes of
the original DLL.

`--target host` (the default) archives each function with g++.
`--target wasm` links Emscripten side modules and copies them onto the
WebAssembly files the page loads.
"""
import argparse
import os
import re
import shutil
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
STRING = re.compile(r"""(?:"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*')""")
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
    small = re.compile(
        r"\(\s*(char|byte|unsigned char|signed char|short|ushort|unsigned short|int3|uint3)\s*\)"
    )
    # Digits exclude image symbols such as DAT_10120924. Those are expressions, not casts.
    ident = re.compile(r"\(\s*(CodePtr|[A-Z][A-Z_]{2,})\s*\)")
    cur = text
    for _ in range(4):
        out = []
        i = 0
        changed = False
        while i < len(cur):
            found = []
            for kind, rx in (("num", num), ("ptr", ptr), ("small", small), ("ident", ident)):
                m = rx.search(cur, i)
                if m:
                    found.append((m.start(), kind, m))
            if not found:
                out.append(cur[i:])
                break
            _, kind, m = min(found, key=lambda item: item[0])
            op_end = parse_unary(cur, m.end())
            if op_end <= m.end():
                out.append(cur[i:m.end()])
                i = m.end()
                continue
            operand = cur[m.end():op_end]
            if not operand.strip():
                out.append(cur[i:m.end()])
                i = m.end()
                continue
            out.append(cur[i:m.start()])
            if kind == "num":
                to = {"float": "float", "float10": "long double", "double": "double"}[m.group(1)]
                out.append(f"ghidra_as<{to}>({operand})")
            elif kind == "small":
                out.append(f"ghidra_trunc<{m.group(1)}>({operand})")
            elif kind == "ident":
                out.append(f"ghidra_ctor<{m.group(1)}>({operand})")
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


def rename_definition(text, old, new, static=True):
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
    if static and not head2.lstrip().startswith("static"):
        head2 = "static " + head2.lstrip()
    return head2 + "{" + body


def extern_c(text, name, exports=None):
    if exports is None:
        exports = ENTRY
    if name not in exports:
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


def x87_qword_addrs(dll):
    """Addresses the x87 code loads or stores as 8-byte floats."""
    data = dll.read_bytes()
    e = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, e + 6)[0]
    opt = struct.unpack_from("<H", data, e + 20)[0]
    sec = e + 24 + opt
    sections = []
    text = b""
    for i in range(nsec):
        o = sec + i * 40
        name = data[o:o + 8].split(b"\x00", 1)[0]
        vsize, va, rawsize, raw = struct.unpack_from("<IIII", data, o + 8)
        sections.append((name, va, vsize))
        if name == b".text":
            text = data[raw:raw + rawsize]
    def in_data(addr):
        off = addr - 0x10000000
        for name, va, vsize in sections:
            if name in (b".rdata", b".data") and va <= off < va + vsize:
                return True
        return False
    found = set()
    i = 0
    while i + 6 <= len(text):
        op = text[i]
        modrm = text[i + 1]
        if op in (0xD8, 0xD9, 0xDC, 0xDD) and (modrm >> 6) == 0 and (modrm & 7) == 5:
            reg = (modrm >> 3) & 7
            if op in (0xDC, 0xDD) and (op == 0xDC or reg in (0, 2, 3)):
                addr = struct.unpack_from("<I", text, i + 2)[0]
                if in_data(addr):
                    found.add(addr)
            i += 6
            continue
        i += 1
    return found


def write_symbols(path, syms, image_len, qword_addrs=()):
    lines = ["#pragma once", '#include "ghidra_compat.hpp"', ""]
    qword_addrs = set(qword_addrs)
    for name, (kind, addr) in sorted(syms.items(), key=lambda kv: kv[1][1]):
        off = addr - 0x10000000
        if off < 0 or off >= image_len:
            off = 0
        if kind == "s_":
            cell = "SCell"
        elif addr in qword_addrs:
            cell = "GhidraF64"
        else:
            cell = "GhidraCell"
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
        for m in re.finditer(r"ghidra_(?:pcast|ctor|trunc|as)\s*<\s*([A-Za-z_][A-Za-z0-9_]*)", text):
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


def write_free(path, texts, skipped, functions, types, skip_stubs=()):
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
        if name in functions or name in stubs or name in skip_stubs:
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


def _pe_parts(data):
    e = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, e + 6)[0]
    opt = struct.unpack_from("<H", data, e + 20)[0]
    sec = e + 24 + opt
    sections = []
    for i in range(nsec):
        o = sec + i * 40
        name = data[o:o + 8].split(b"\x00", 1)[0].decode()
        vsize, va, rawsize, raw = struct.unpack_from("<IIII", data, o + 8)
        sections.append((name, va, vsize, raw, rawsize))
    return e, sections


def _rva_off(sections, rva):
    for name, va, vsize, raw, rawsize in sections:
        span = max(vsize, rawsize)
        if va <= rva < va + span:
            return raw + (rva - va)
    return None


def pe_c_exports(path):
    data = Path(path).read_bytes()
    e, sections = _pe_parts(data)
    exp_rva = struct.unpack_from("<I", data, e + 24 + 96)[0]
    off = _rva_off(sections, exp_rva)
    nnames = struct.unpack_from("<I", data, off + 24)[0]
    anames = struct.unpack_from("<I", data, off + 32)[0]
    names = set()
    base = _rva_off(sections, anames)
    for i in range(nnames):
        nrva = struct.unpack_from("<I", data, base + i * 4)[0]
        noff = _rva_off(sections, nrva)
        end = data.index(b"\x00", noff)
        name = data[noff:end].decode("ascii", "replace")
        if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", name):
            names.add(name)
    return names


def pe_highlow(path, image_len):
    data = Path(path).read_bytes()
    _, sections = _pe_parts(data)
    reloc = next(s for s in sections if s[0] == ".reloc")
    _, va, vsize, raw, rawsize = reloc
    blob = data[raw:raw + rawsize]
    rvas = []
    p = 0
    while p + 8 <= len(blob):
        page, size = struct.unpack_from("<II", blob, p)
        if size < 8:
            break
        count = (size - 8) // 2
        for i in range(count):
            ent = struct.unpack_from("<H", blob, p + 8 + i * 2)[0]
            if (ent >> 12) == 3:
                rva = page + (ent & 0xFFF)
                if rva + 4 <= image_len:
                    rvas.append(rva)
        p += size
    return rvas


# Client exports whose recovered signature is not the type Xash calls.
CLIENT_WRAPS = {
    "HUD_Init",
    "HUD_Redraw",
    "HUD_UpdateClientData",
    "HUD_Reset",
    "HUD_PlayerMoveTexture",
    "KB_Find",
    "HUD_AddEntity",
    "HUD_PostRunCmd",
    "HUD_ConnectionlessPacket",
    "HUD_GetHullBounds",
    "HUD_Frame",
    "HUD_GetUserEntity",
}

# Server DLL_FUNCTIONS slots whose recovered signature is not the type Xash calls.
SERVER_WRAP_VAS = {0x1001A290, 0x1001C430, 0x1001CAE0, 0x1001D740, 0x1001D750}


def apply_renames(text, renames):
    if not renames:
        return text
    masked, strings = mask_strings(text)

    def repl(m):
        return renames.get(m.group(0), m.group(0))

    masked = re.sub(r"\b[A-Za-z_][A-Za-z0-9_]*\b", repl, masked)
    return unmask(masked, strings)


def rewrite_thunk_call(text, name):
    head, body = function_parts(text)
    if not body:
        return text
    match = re.search(rf"\b{re.escape(name)}\s*\(", body)
    if not match:
        return text
    j = match.end()
    while j < len(body) and body[j] in " \t\r\n":
        j += 1
    if j < len(body) and body[j] == ")":
        repl = f'efw_imp("{name}"'
    else:
        repl = f'efw_imp("{name}", '
    body = body[:match.start()] + repl + body[match.end():]
    return head + "{" + body


DECL_WORDS = {
    "const", "unsigned", "signed", "volatile", "static", "struct", "enum",
    "int", "char", "short", "long", "float", "double", "void", "bool",
    "byte", "uint", "ushort", "ulong", "dword", "word", "qword",
    "undefined", "undefined1", "undefined2", "undefined3", "undefined4",
    "undefined8", "float10", "int3", "uint3", "int6", "uint6", "code",
    "inline", "extern", "register", "auto", "CHAR", "WCHAR", "BYTE", "WORD",
}


def match_back(s, i, close_c, open_c):
    depth = 1
    k = i - 1
    while k >= 0 and depth:
        if s[k] == close_c:
            depth += 1
        elif s[k] == open_c:
            depth -= 1
        k -= 1
    return k


def is_assign_eq(s, i):
    if i < 0 or i >= len(s) or s[i] != "=":
        return False
    j = i + 1
    while j < len(s) and s[j] in " \t\r\n":
        j += 1
    if j < len(s) and s[j] == "=":
        return False
    k = i - 1
    while k >= 0 and s[k] in " \t\r\n":
        k -= 1
    if k < 0 or s[k] in "=<>!+-*/%&|^":
        return False
    return True


def find_rhs_end(s, i):
    depth_paren = depth_brack = depth_brace = 0
    while i < len(s):
        c = s[i]
        if c == "(":
            depth_paren += 1
        elif c == ")":
            if depth_paren == 0 and depth_brack == 0 and depth_brace == 0:
                return i
            depth_paren = max(0, depth_paren - 1)
        elif c == "[":
            depth_brack += 1
        elif c == "]":
            depth_brack = max(0, depth_brack - 1)
        elif c == "{":
            depth_brace += 1
        elif c == "}":
            if depth_paren == depth_brack == depth_brace == 0:
                return i
            depth_brace = max(0, depth_brace - 1)
        elif c in ",;" and depth_paren == depth_brack == depth_brace == 0:
            return i
        i += 1
    return i


def find_lhs(s, eq):
    """Return (start, decltype-expression) for the lvalue before an assignment."""
    k = eq - 1
    while k >= 0 and s[k] in " \t\r\n":
        k -= 1
    end = k + 1
    while k >= 0:
        while k >= 0 and s[k] in " \t\r\n":
            k -= 1
        if k < 0:
            break
        if s[k] == "]":
            k = match_back(s, k, "]", "[")
            continue
        if s[k] == ")":
            k = match_back(s, k, ")", "(")
            continue
        if s[k] == ">":
            if k > 0 and s[k - 1] == "-":
                k -= 2
                continue
            depth = 1
            k -= 1
            while k >= 0 and depth:
                if s[k] == ">":
                    depth += 1
                elif s[k] == "<":
                    depth -= 1
                k -= 1
            continue
        if s[k].isalnum() or s[k] == "_":
            while k >= 0 and (s[k].isalnum() or s[k] == "_"):
                k -= 1
            j = k
            while j >= 0 and s[j] in " \t\r\n":
                j -= 1
            if j >= 1 and s[j - 1:j + 1] == "->":
                k = j - 2
                continue
            if j >= 0 and s[j] == ".":
                k = j - 1
                continue
            if j >= 1 and s[j - 1:j + 1] == "::":
                k = j - 1
                continue
            if j >= 0 and s[j] in "*&":
                k = j
                continue
            break
        if s[k] in "*&":
            k -= 1
            continue
        break
    start = k + 1
    while start < end and s[start] in " \t\r\n":
        start += 1
    raw = s[start:end]
    expr = raw.strip()
    # `int *name` or `unsigned char *name` is a declaration. `*name` is a store.
    for pat in (
        r"^((?:[A-Za-z_][A-Za-z0-9_]*\s+)+\*+\s*)([A-Za-z_][A-Za-z0-9_]*)\s*$",
        r"^((?:[A-Za-z_][A-Za-z0-9_]*\s+)+)([A-Za-z_][A-Za-z0-9_]*)\s*$",
    ):
        m = re.match(pat, raw)
        if not m:
            continue
        words = re.findall(r"[A-Za-z_][A-Za-z0-9_]*", m.group(1))
        if words and all(w in DECL_WORDS or looks_like_type(w) for w in words):
            return start + m.start(2), m.group(2)
    if not expr or expr.startswith("operator"):
        return None
    return start, expr


def wrap_region(s):
    """Rewrite C-style stores so the right-hand side converts to the left-hand type."""
    out = []
    i = 0
    while i < len(s):
        if s[i] == "=" and is_assign_eq(s, i):
            found = find_lhs(s, i)
            if not found:
                out.append(s[i])
                i += 1
                continue
            start, expr = found
            if not expr or start > i:
                out.append(s[i])
                i += 1
                continue
            rhs_end = find_rhs_end(s, i + 1)
            rhs = wrap_region(s[i + 1:rhs_end]).strip()
            if not rhs:
                out.append(s[i])
                i += 1
                continue
            n = i - start
            while n > 0 and out:
                piece = out.pop()
                if len(piece) > n:
                    out.append(piece[:-n])
                    n = 0
                else:
                    n -= len(piece)
            out.append(f"{expr} = ghidra_asg<decltype({expr})>({rhs})")
            i = rhs_end
            continue
        out.append(s[i])
        i += 1
    return "".join(out)


def wrap_stores(text):
    if "{" not in text:
        return text
    masked, strings = mask_strings(text)
    wrapped = wrap_region(masked)
    return unmask(wrapped, strings)


def wasm_ret_code(text, cname):
    """Wasm return class for ghidra_note_fn: 0 i32, 1 f32, 2 void."""
    head, _ = function_parts(text)
    if head.rfind(cname) < 0:
        return 0
    ret = return_type_before(head, cname)
    if ret is None:
        return 2
    if "*" in ret or "&" in ret:
        return 0
    if ret.split()[-1:] == ["float"]:
        return 1
    return 0


def return_type_before(head, name):
    idx = head.rfind(name)
    if idx < 0:
        return None
    pre = head[:idx]
    pre = re.sub(r'\bextern\s*"C"\s*\{?', "", pre)
    pre = re.sub(r"\b__(?:cdecl|thiscall|fastcall|stdcall)\b", "", pre)
    pre = re.sub(r"\b(?:static|inline)\b", "", pre)
    pre = " ".join(pre.split())
    if not pre or pre == "void":
        return None
    return pre


TEMPLATE_NAMES = {
    "ghidra_pcast", "ghidra_as", "ghidra_asg", "ghidra_trunc", "ghidra_ctor",
    "ghidra_piece", "decltype", "ghidra_lt", "ghidra_gt", "ghidra_le", "ghidra_ge",
    "ghidra_eq", "ghidra_ne",
}
RELOPS = {
    "<": "ghidra_lt",
    ">": "ghidra_gt",
    "<=": "ghidra_le",
    ">=": "ghidra_ge",
    "==": "ghidra_eq",
    "!=": "ghidra_ne",
}
REL_STOP = {
    "return", "if", "for", "while", "do", "else", "switch", "goto", "case",
    "break", "continue",
}


def ident_ending_at(s, j):
    if j < 0 or not (s[j].isalnum() or s[j] == "_"):
        return ""
    end = j + 1
    while j >= 0 and (s[j].isalnum() or s[j] == "_"):
        j -= 1
    return s[j + 1:end]


def skip_template_args(s, i):
    """i points at '<'. Return the index just after the matching '>'."""
    depth = 1
    paren = 0
    k = i + 1
    while k < len(s) and depth:
        c = s[k]
        if c == "(":
            paren += 1
        elif c == ")":
            paren = max(0, paren - 1)
        elif paren == 0 and c == "<":
            depth += 1
        elif paren == 0 and c == ">":
            depth -= 1
        k += 1
    return k


def skip_template_back(s, k):
    """k points at '>'. Return the index of the char before the matching '<'."""
    depth = 1
    paren = 0
    k -= 1
    while k >= 0 and depth:
        c = s[k]
        if c == ")":
            paren += 1
        elif c == "(":
            paren = max(0, paren - 1)
        elif paren == 0 and c == ">":
            depth += 1
        elif paren == 0 and c == "<":
            depth -= 1
        k -= 1
    return k


def expr_bound_left(s, i):
    k = i - 1
    while k >= 0 and s[k] in " \t\r\n":
        k -= 1
    end = k + 1
    depth = 0
    while k >= 0:
        c = s[k]
        if c in ")]}":
            depth += 1
            k -= 1
            continue
        if c in "([{":
            if depth == 0:
                break
            depth -= 1
            k -= 1
            continue
        if depth == 0:
            if c in ",;?:":
                break
            if c.isalnum() or c == "_":
                nxt = s[k + 1] if k + 1 < len(s) else ""
                if not (nxt.isalnum() or nxt == "_") and ident_ending_at(s, k) in REL_STOP:
                    break
            if c == "&" and k > 0 and s[k - 1] == "&":
                break
            if c == "|" and k > 0 and s[k - 1] == "|":
                break
            if c == "!" and k + 1 < len(s) and s[k + 1] == "=":
                break
            if c == "=":
                break
            if c in "<>":
                prev = s[k - 1] if k > 0 else ""
                nxt = s[k + 1] if k + 1 < len(s) else ""
                # Shifts and member access stay inside the expression.
                if c == ">" and prev == "-":
                    k -= 1
                    continue
                if c == "<" and (nxt == "<" or prev == "<"):
                    k -= 1
                    continue
                if c == ">" and (nxt == ">" or prev == ">"):
                    k -= 1
                    continue
                if c == ">":
                    lt = skip_template_back(s, k)
                    name = ident_ending_at(s, lt)
                    if name in TEMPLATE_NAMES:
                        k = lt - len(name)
                        continue
                break
        k -= 1
    start = k + 1
    while start < end and s[start] in " \t\r\n":
        start += 1
    return start, s[start:end].strip()


def expr_bound_right(s, i):
    k = skip_ws(s, i)
    start = k
    depth = 0
    while k < len(s):
        c = s[k]
        if c == "(":
            depth += 1
            k += 1
            continue
        if c == ")":
            if depth == 0:
                break
            depth -= 1
            k += 1
            continue
        if c == "[":
            depth += 1
            k += 1
            continue
        if c == "]":
            if depth == 0:
                break
            depth -= 1
            k += 1
            continue
        if c == "{":
            if depth == 0:
                break
            depth += 1
            k += 1
            continue
        if c == "}":
            if depth == 0:
                break
            depth -= 1
            k += 1
            continue
        if depth == 0:
            if c in ",;?:":
                break
            if s.startswith("&&", k) or s.startswith("||", k) or s.startswith("==", k) or s.startswith("!=", k):
                break
            if c == "=":
                break
            if c in "<>":
                nxt = s[k + 1] if k + 1 < len(s) else ""
                prev = s[k - 1] if k > 0 else ""
                if c == "<" and nxt == "<":
                    k += 2
                    continue
                if c == ">" and nxt == ">":
                    k += 2
                    continue
                if c == "-" or prev == "-":
                    k += 1
                    continue
                if c == "<" and ident_ending_at(s, k - 1) in TEMPLATE_NAMES:
                    k = skip_template_args(s, k)
                    continue
                break
        k += 1
    return s[start:k].strip(), k


def replace_one_relop(s, equality=False):
    """Replace the leftmost comparison. Equality runs only after `<` and `>` are gone."""
    i = 0
    while i < len(s):
        c = s[i]
        if not equality and c in "<>":
            nxt = s[i + 1] if i + 1 < len(s) else ""
            prev = s[i - 1] if i > 0 else ""
            if (c == "<" and nxt == "<") or (c == ">" and nxt == ">"):
                i += 2
                continue
            if c == ">" and prev == "-":
                i += 1
                continue
            if c == "<" and ident_ending_at(s, i - 1) in TEMPLATE_NAMES:
                i = skip_template_args(s, i)
                continue
            op = c + "=" if nxt == "=" else c
            start, left = expr_bound_left(s, i)
            right, end = expr_bound_right(s, i + len(op))
            if left and right and op in ("<", ">", "<=", ">="):
                fn = RELOPS[op]
                return s[:start] + f"{fn}({left}, {right})" + s[end:]
            i += 1
            continue
        if equality and c == "!" and i + 1 < len(s) and s[i + 1] == "=":
            start, left = expr_bound_left(s, i)
            right, end = expr_bound_right(s, i + 2)
            if left and right:
                return s[:start] + f"ghidra_ne({left}, {right})" + s[end:]
        if equality and c == "=" and i + 1 < len(s) and s[i + 1] == "=":
            prev = s[i - 1] if i else ""
            if prev not in "=!<>":
                start, left = expr_bound_left(s, i)
                right, end = expr_bound_right(s, i + 2)
                if left and right:
                    return s[:start] + f"ghidra_eq({left}, {right})" + s[end:]
        i += 1
    return None


def wrap_rel_region(s):
    # Relational operators bind tighter than equality, so they are rewritten first.
    # One replacement at a time so a chain `a < b < c` nests the earlier call.
    for _ in range(100000):
        nxt = replace_one_relop(s, False)
        if nxt is None:
            nxt = replace_one_relop(s, True)
        if nxt is None or nxt == s:
            return s
        s = nxt
    return s


def wrap_relops(text):
    masked, strings = mask_strings(text)
    return unmask(wrap_rel_region(masked), strings)


def wrap_returns(text, name):
    head, body = function_parts(text)
    if not body:
        return text
    ret = return_type_before(head, name)
    if not ret:
        return text
    masked, strings = mask_strings(body)
    out = []
    i = 0
    while True:
        m = re.search(r"\breturn\b", masked[i:])
        if not m:
            out.append(masked[i:])
            break
        endkw = i + m.end()
        out.append(masked[i:endkw])
        j = skip_ws(masked, endkw)
        if j >= len(masked) or masked[j] == ";":
            out.append(masked[endkw:j + 1 if j < len(masked) else j])
            i = j + 1 if j < len(masked) else j
            continue
        k = j
        depth = 0
        while k < len(masked):
            if masked[k] in "([{":
                depth += 1
            elif masked[k] in ")]}":
                if depth == 0:
                    break
                depth -= 1
            elif masked[k] == ";" and depth == 0:
                break
            k += 1
        expr = masked[j:k].strip()
        if expr.startswith("ghidra_asg"):
            out.append(masked[endkw:k])
        else:
            out.append(f" ghidra_asg<{ret}>({expr})")
        i = k
    return head + "{" + unmask("".join(out), strings)


def inject_relocate(text):
    if "ghidra_relocate()" in text:
        return text
    head, body = function_parts(text)
    if not body:
        return text
    return head + "{ ghidra_relocate();\n" + body


def tu_header():
    return (
        '#include "ghidra_compat.hpp"\n'
        '#include "ghidra_types.hpp"\n'
        '#include "ghidra_free.hpp"\n'
        '#include "ghidra_syms.hpp"\n'
        '#include "ghidra_funcs.hpp"\n'
    )


def write_relocs(path, rvas):
    lines = [
        '#include "ghidra_compat.hpp"',
        "extern \"C\" const uint32_t ghidra_relocs[] = {",
    ]
    for i in range(0, len(rvas), 12):
        lines.append(",".join(str(r) for r in rvas[i:i + 12]) + ",")
    lines.append("};")
    lines.append(f"extern \"C\" const uint32_t ghidra_reloc_count = {len(rvas)};")
    path.write_text("\n".join(lines) + "\n")


def write_abi(path, side):
    if side == "server":
        body = r'''
static int efw_abi_client_connect(void *ent, const char *name, const char *addr, char *reject) {
	ghidra_invoke(FUN_1001a290, ent, name, addr, reject);
	return 1;
}
static void efw_abi_sys_error(const char *msg) {
	(void)msg;
	ghidra_invoke(FUN_1001c430);
}
static void efw_abi_create_baseline(int player, int eindex, void *state, void *ent, int model, float *mins, float *maxs) {
	uint32_t mn[3] = {};
	uint32_t mx[3] = {};
	if (mins) std::memcpy(mn, mins, 12);
	if (maxs) std::memcpy(mx, maxs, 12);
	ghidra_invoke(FUN_1001cae0, player, eindex, state, ent, model, mn[0], mn[1], mn[2], mx[0], mx[1], mx[2]);
}
static int efw_abi_connectionless(const void *, const char *, char *, int *) {
	return (int)ghidra_invoke(FUN_1001d740);
}
static int efw_abi_hull_bounds(int hull, float *, float *) {
	return (int)ghidra_invoke(FUN_1001d750, hull);
}
__attribute__((constructor(101))) static void efw_abi_reg() {
	ghidra_note_fn((void *)efw_abi_client_connect, 0);
	ghidra_note_fn((void *)efw_abi_sys_error, 2);
	ghidra_note_fn((void *)efw_abi_create_baseline, 2);
	ghidra_note_fn((void *)efw_abi_connectionless, 0);
	ghidra_note_fn((void *)efw_abi_hull_bounds, 0);
	ghidra_register(0x1001a290u, (void *)efw_abi_client_connect);
	ghidra_register(0x1001c430u, (void *)efw_abi_sys_error);
	ghidra_register(0x1001cae0u, (void *)efw_abi_create_baseline);
	ghidra_register(0x1001d740u, (void *)efw_abi_connectionless);
	ghidra_register(0x1001d750u, (void *)efw_abi_hull_bounds);
}
'''
    else:
        body = r'''
extern "C" void HUD_Init(void) {
	ghidra_relocate();
	ghidra_invoke(HUD_Init_impl);
}
extern "C" int HUD_Redraw(float flTime, int intermission) {
	ghidra_relocate();
	(void)flTime;
	(void)intermission;
	return (int)ghidra_invoke(HUD_Redraw_impl);
}
extern "C" int HUD_UpdateClientData(void *cdata, float flTime) {
	ghidra_relocate();
	(void)flTime;
	ghidra_invoke(HUD_UpdateClientData_impl, cdata);
	return 1;
}
extern "C" void HUD_Reset(void) {
	ghidra_relocate();
	ghidra_invoke(HUD_Reset_impl);
}
extern "C" char HUD_PlayerMoveTexture(char *name) {
	ghidra_relocate();
	ghidra_invoke(HUD_PlayerMoveTexture_impl, name);
	return 0;
}
extern "C" void *KB_Find(const char *name) {
	ghidra_relocate();
	return (void *)ghidra_invoke(KB_Find_impl, (void *)0, name);
}
extern "C" int HUD_AddEntity(int type, void *ent, const char *modelname) {
	ghidra_relocate();
	(void)modelname;
	return (int)ghidra_invoke(HUD_AddEntity_impl, type, ent);
}
extern "C" void HUD_PostRunCmd(void *from, void *to, void *cmd, int runfuncs, double time, unsigned random_seed) {
	ghidra_relocate();
	uint32_t lo = 0, hi = 0;
	std::memcpy(&lo, &time, 4);
	std::memcpy(&hi, (char *)&time + 4, 4);
	ghidra_invoke(HUD_PostRunCmd_impl, from, to, cmd, runfuncs, lo, hi, random_seed);
}
extern "C" int HUD_ConnectionlessPacket(const void *net_from, const char *args, char *buffer, int *size) {
	ghidra_relocate();
	(void)net_from;
	(void)args;
	(void)buffer;
	(void)size;
	return (int)ghidra_invoke(HUD_ConnectionlessPacket_impl);
}
extern "C" int HUD_GetHullBounds(int hullnumber, float *mins, float *maxs) {
	ghidra_relocate();
	(void)mins;
	(void)maxs;
	return (int)ghidra_invoke(HUD_GetHullBounds_impl, hullnumber);
}
extern "C" void HUD_Frame(double time) {
	ghidra_relocate();
	uint32_t lo = 0, hi = 0;
	std::memcpy(&lo, &time, 4);
	std::memcpy(&hi, (char *)&time + 4, 4);
	ghidra_invoke(HUD_Frame_impl, lo, hi);
}
extern "C" void *HUD_GetUserEntity(int index) {
	ghidra_relocate();
	(void)index;
	return (void *)ghidra_invoke(HUD_GetUserEntity_impl);
}
'''
    path.write_text('#include "ghidra_compat.hpp"\n#include "ghidra_types.hpp"\n#include "ghidra_funcs.hpp"\n' + body)


def emit_wasm_batches(out, units, skip_vas):
    gen = out / "src"
    batches = []
    cur = []
    size = 0
    for unit in units:
        text = unit[2]
        if cur and (size + len(text) > 180000 or len(cur) >= 20):
            batches.append(cur)
            cur = []
            size = 0
        cur.append(unit)
        size += len(text)
    if cur:
        batches.append(cur)
    header = tu_header()
    written = []
    for i, batch in enumerate(batches):
        parts = [header]
        regs = []
        for addr, cname, text, src, thunk, orig in batch:
            parts.append(text)
            if not text.endswith("\n"):
                parts.append("\n")
            regs.append(
                f"  ghidra_note_fn((void *){cname}, {wasm_ret_code(text, cname)});"
            )
            if int(addr, 16) not in skip_vas:
                regs.append(f"  ghidra_register(0x{addr}u, (void *){cname});")
        if regs:
            parts.append(
                f"__attribute__((constructor(101))) static void ghidra_reg_batch_{i}() {{\n"
                + "\n".join(regs)
                + "\n}\n"
            )
        path = gen / f"batch_{i:04d}.cpp"
        path.write_text("".join(parts))
        written.append((path, batch))
    return written


def prepare(side, dll, limit, target="host"):
    src_dir = DECOMP / side
    out = BUILD / side if target == "host" else BUILD / f"{side}-wasm"
    gen = out / "src"
    if gen.exists():
        for child in gen.glob("*.cpp"):
            child.unlink()
    gen.mkdir(parents=True, exist_ok=True)
    files = sorted(src_dir.glob("*.c"))
    exports = ENTRY if target == "host" else pe_c_exports(dll)
    wraps = CLIENT_WRAPS if target == "wasm" and side == "client" else set()
    impl_renames = {}
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
        thunk = target == "wasm" and "Treating indirect jump as call" in raw
        rewritten.append((addr, name, text, path.name, thunk))
    seen = {}
    functions = set()
    units = []
    decls = []
    for addr, name, text, src, thunk in rewritten:
        if name in seen:
            text = rename_definition(text, name, f"{name}_{addr}")
            cname = f"{name}_{addr}"
        else:
            seen[name] = addr
            if name in wraps:
                text = rename_definition(text, name, f"{name}_impl", static=False)
                cname = f"{name}_impl"
                impl_renames[name] = cname
                decls.append(signature_of(text) + ";")
            else:
                sig = signature_of(text)
                if name in exports:
                    decls.append('extern "C" ' + sig + ";")
                else:
                    decls.append(sig + ";")
                text = extern_c(text, name, exports)
                cname = name
        functions.add(cname)
        if name not in impl_renames:
            functions.add(name)
        units.append((addr, cname, text, src, thunk, name))
    (out / "ghidra_funcs.hpp").write_text(
        "#pragma once\n"
        '#include "ghidra_compat.hpp"\n'
        '#include "ghidra_types.hpp"\n'
        + "\n".join(decls)
        + "\n"
    )
    order = [text for _, _, text, _, _, _ in units]
    image = load_dll(dll)
    syms = collect_symbols(order)
    write_symbols(out / "ghidra_syms.hpp", syms, len(image), x87_qword_addrs(dll))
    types = collect_types(order, functions)
    types = [t for t in types if t not in functions and t not in syms]
    write_types(out / "ghidra_types.hpp", types)
    write_free(out / "ghidra_free.hpp", order, skipped, functions, set(types), wraps)
    classes = set(types)
    addr_to_name = {addr.lower(): cname for addr, cname, _, _, _, _ in units}
    skip_vas = SERVER_WRAP_VAS if target == "wasm" and side == "server" else set()
    rewritten_units = []
    for addr, cname, text, src, thunk, orig in units:
        if target == "wasm":
            text = apply_renames(text, impl_renames)
            if thunk:
                text = rewrite_thunk_call(text, orig)
        text = qualify_body(text, cname, functions, classes)
        text = rewrite_func_refs(text, addr_to_name)
        text = rewrite_fn_returns(text, functions)
        text = loosen_calls(text, functions)
        if target == "wasm" and text.lstrip().startswith('extern "C"'):
            text = inject_relocate(text)
        if target == "wasm":
            text = wrap_stores(text)
            text = wrap_relops(text)
            text = wrap_returns(text, cname)
        rewritten_units.append((addr, cname, text, src, thunk, orig))
    units = rewritten_units
    emit = units if not limit else units[:limit]
    (out / "ghidra_image.cpp").write_text(
        '#include "ghidra_compat.hpp"\n'
        f"unsigned ghidra_image_size = {len(image)};\n"
        f"unsigned char ghidra_image[{len(image)}] = {{\n"
        + ",".join(str(b) for b in image)
        + "\n};\n"
    )
    if target == "wasm":
        write_relocs(out / "ghidra_relocs.cpp", pe_highlow(dll, len(image)))
        write_abi(out / "ghidra_abi.cpp", side)
        emit_wasm_batches(out, emit, skip_vas)
    else:
        for addr, cname, text, src, thunk, orig in emit:
            (gen / f"{addr}.cpp").write_text(tu_header() + text + ("\n" if not text.endswith("\n") else ""))
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


def load_emsdk():
    if shutil.which("em++"):
        return
    script = Path("/home/ubuntu/emsdk/emsdk_env.sh")
    if not script.exists():
        return
    proc = subprocess.run(
        ["bash", "-lc", f"source {script} >/dev/null && env"],
        capture_output=True,
        text=True,
    )
    for line in proc.stdout.splitlines():
        if "=" not in line:
            continue
        key, value = line.split("=", 1)
        if key in ("PATH", "EMSDK", "EMSDK_NODE", "EM_CONFIG", "EM_CACHE"):
            os.environ[key] = value


def wasm_compile(cpp, obj, include, opt, defines=()):
    # Hidden visibility keeps each side module's copy of ghidra_invoke. A default-
    # visibility inline is exported and imported, so the client would call the
    # server's copy and look up return classes in the wrong table.
    cmd = [
        "em++", "-c", "-std=c++17", "-fPIC", "-fvisibility=hidden", "-fpermissive", "-w", "-Wno-c++11-narrowing",
        "-DGHIDRA_WASM",
        opt, "-fmax-errors=8",
        "-I", str(include),
        "-I", str(ROOT / "ghidra"),
        *defines,
        str(cpp), "-o", str(obj),
    ]
    proc = subprocess.run(cmd, capture_output=True, text=True)
    return cpp.name, proc.returncode, proc.stderr.strip()


def warm_emscripten():
    src = Path("/tmp/efw-em-warm.cpp")
    obj = Path("/tmp/efw-em-warm.o")
    if obj.exists():
        return
    src.write_text("int efw_warm(){return 1;}\n")
    subprocess.check_call(["em++", "-c", "-O1", str(src), "-o", str(obj)])


def compile_wasm(out, jobs, side):
    warm_emscripten()
    obj_dir = out / "obj"
    if obj_dir.exists():
        for old in obj_dir.glob("*.o"):
            old.unlink()
    obj_dir.mkdir(parents=True, exist_ok=True)
    cpps = sorted((out / "src").glob("batch_*.cpp"))
    side_def = ("-DGHIDRA_SERVER=1",) if side == "server" else ("-DGHIDRA_CLIENT=1",)
    extras = [
        (out / "ghidra_image.cpp", "-O0", side_def),
        (out / "ghidra_relocs.cpp", "-O0", side_def),
        (out / "ghidra_abi.cpp", "-O1", side_def),
        (ROOT / "ghidra" / "ghidra_host.cpp", "-O1", side_def + (
            f'-DGHIDRA_SIDE="{side}"',
        )),
    ]
    failures = []
    ok = 0
    print(f"  compiling {len(cpps)} batches", flush=True)
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        futs = []
        for cpp in cpps:
            futs.append(pool.submit(
                wasm_compile, cpp, obj_dir / (cpp.stem + ".o"), out, "-O1", side_def,
            ))
        for extra, opt, defines in extras:
            futs.append(pool.submit(
                wasm_compile, extra, obj_dir / (extra.stem + ".o"), out, opt, defines,
            ))
        total = len(futs)
        done = 0
        for fut in as_completed(futs):
            name, code, err = fut.result()
            done += 1
            if code == 0:
                ok += 1
            else:
                failures.append((name, err))
            if done % 25 == 0 or done == total:
                print(f"    {done}/{total}", flush=True)
    return ok, failures


def link_wasm(out, dest, exports):
    """Link a side module with the engine's native function-pointer types."""
    objs = sorted((out / "obj").glob("*.o"))
    rsp = out / "link.rsp"
    rsp.write_text("\n".join(str(obj) for obj in objs) + "\n")
    dest.parent.mkdir(parents=True, exist_ok=True)
    staged = dest.with_suffix(dest.suffix + ".new")
    cmd = [
        "em++",
        "-sSIDE_MODULE=1",
        "-O1",
        f"@{rsp}",
        "-o", str(staged),
    ]
    for name in sorted(exports):
        cmd.append(f"-Wl,--export-if-defined={name}")
    proc = subprocess.run(cmd, capture_output=True, text=True)
    if proc.returncode != 0:
        staged.unlink(missing_ok=True)
        err = (proc.stderr or proc.stdout or "").strip()
        raise RuntimeError(err[-4000:])
    staged.replace(dest)
    return dest


def report_failures(failures):
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


WASM_OUT = {
    "server": ROOT / "public" / "dlls" / "hl_emscripten_wasm32.wasm",
    "client": ROOT / "public" / "cl_dlls" / "client_emscripten_wasm32.wasm",
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--side", choices=("server", "client", "both"), default="both")
    parser.add_argument("--dll", type=Path, action="append", default=[])
    parser.add_argument("--limit", type=int, default=0)
    parser.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    parser.add_argument("--target", choices=("host", "wasm"), default="host")
    args = parser.parse_args()
    defaults = {
        "server": Path("/tmp/efw/EscapeFromWoomera_v084/dlls/EscapeFromWoomera.dll"),
        "client": Path("/tmp/efw/EscapeFromWoomera_v084/cl_dlls/client.dll"),
    }
    sides = ["server", "client"] if args.side == "both" else [args.side]
    if args.target == "wasm":
        load_emsdk()
        if not shutil.which("em++"):
            print("em++ is not on PATH", file=sys.stderr)
            return 1
    failed_total = 0
    for side in sides:
        dll = defaults[side]
        if not dll.exists():
            print(f"missing {dll}", file=sys.stderr)
            return 1
        print(f"preparing {side} from {dll} ({args.target})")
        units, skipped, out = prepare(side, dll, args.limit, args.target)
        print(f"  {len(units)} functions, skipped {len(skipped)}")
        if args.target == "wasm":
            ok, failures = compile_wasm(out, args.jobs, side)
        else:
            ok, failures = compile_all(out, args.jobs)
        print(f"  compiled {ok}, failed {len(failures)}")
        log = out / "failures.log"
        with log.open("w") as fh:
            for name, err in sorted(failures):
                fh.write(f"===== {name} =====\n{err}\n")
        if failures:
            failed_total += len(failures)
            print(f"  errors in {log}")
            report_failures(failures)
            continue
        if args.target == "host":
            lib, nobj = archive(out, side)
            print(f"  archive {lib} ({nobj} objects)")
            continue
        if args.limit:
            print("  limit set, not linking")
            continue
        dest = WASM_OUT[side]
        print(f"  linking {dest}")
        try:
            link_wasm(out, dest, pe_c_exports(dll))
        except RuntimeError as exc:
            print(exc, file=sys.stderr)
            return 1
        print(f"  wrote {dest} ({dest.stat().st_size} bytes)")
    return 1 if failed_total else 0


if __name__ == "__main__":
    sys.exit(main())
