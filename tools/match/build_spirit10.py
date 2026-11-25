#!/usr/bin/env python3
"""Compile the original Spirit of Half-Life 1.0 source as the matching reference.

The mod's DLLs were linked from Spirit 1.0 (hl.dsp and cl_dll.dsp), so the
reference is built from the same files in project order. Each file is compiled
for 32-bit x86 with symbols, -O2, no automatic inlining and no PIC; files that
need a fix to build with g++ get it from compat/ as a forced include. The
libraries are only read by Ghidra and never run.

Usage: build_spirit10.py <SpiritSource dir> <out dir>
"""
import os
import collections
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

HERE = os.path.dirname(os.path.abspath(__file__))

OPT = [
    "-m32", "-g", "-O2", "-fno-pic", "-fno-stack-protector", "-w",
    "-fno-inline-functions", "-fno-optimize-sibling-calls",
    "-fno-exceptions", "-fno-rtti", "-std=gnu++98",
    "-fms-compatibility", "-fms-extensions", "-fdelayed-template-parsing",
    "-Wno-everything", "-ferror-limit=0", "-U_MSC_VER", "-U_MSC_FULL_VER", "-U_MSC_EXTENSIONS", "-U__OPTIMIZE__",
]
DEFS = ["-D_LINUX", "-DLINUX", "-DNDEBUG", "-Dstricmp=strcasecmp", "-D_stricmp=strcasecmp",
        "-Dstrnicmp=strncasecmp", "-D_strnicmp=strncasecmp", "-D_snprintf=snprintf",
        "-D_vsnprintf=vsnprintf", "-D_rotr=sdk_rotr", "-D_rotl=sdk_rotl", "-Dmax(a,b)=(((a)>(b))?(a):(b))", "-Dmin(a,b)=(((a)<(b))?(a):(b))"]

SIDES = {
    "server": ("dlls/hl.dsp", ["dlls", "engine", "common", "pm_shared", "game_shared"],
               ["-DQUIVER", "-DVOXEL", "-DQUAKE2", "-DVALVE_DLL", "-DCLIENT_WEAPONS"]),
    "client": ("cl_dll/cl_dll.dsp", ["utils/vgui/include", "engine", "common", "pm_shared", "dlls", "game_shared", "cl_dll"],
               ["-DCLIENT_DLL", "-DCLIENT_WEAPONS", "-fexceptions", "-fcxx-exceptions"]),
}


def dsp_sources(path):
    base = os.path.dirname(path)
    out = []
    for line in open(path, encoding="latin-1"):
        m = re.match(r'SOURCE=(.*)', line.strip())
        if not m:
            continue
        p = m.group(1).strip('"').replace("\\", "/").lower()
        if p.endswith((".cpp", ".c")):
            out.append(os.path.normpath(os.path.join(base, p)))
    return out


INCLUDE_RE = re.compile(r'^(\s*#\s*include\s*)([<"])([^>"]+)([>"])', re.M)


SETTER_RE = re.compile(r'\b(SetThink|SetTouch|SetUse|SetBlocked|SetMoveDone)\s*\(\s*(?:([A-Za-z_]\w*)\s*(?:::|->|\.)\s*)?([A-Za-z_]\w*)\s*\)')
METHOD_DEF_RE = re.compile(r'\b([A-Z]\w*)\s*::\s*([A-Za-z_]\w*)\s*\(')
METHODS = collections.defaultdict(set)
CLASSES = set()
STATIC_INT_RE = re.compile(r'\bstatic\s+([a-z_]\w*)\s*=')
SIZEOF_RE = re.compile(r'\bsizeof\s+([A-Za-z_]\w*_t)\b')
PFN_CMP_RE = re.compile(r'\b(m_pfn\w+)\s*(==|!=)\s*([A-Za-z_]\w*)\b')
IMPLICIT_DECL_RE = re.compile(r'^(\s+)([A-Z][a-z]\w*\s*\([^;{}]*\)\s*;)')
IMPLICIT_DEF_RE = re.compile(r'^([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)\s*\(')
FOR_DECL_RE = r'for\s*\(\s*((?:unsigned\s+|const\s+)?(?:int|float|short|char|long|size_t|BOOL|byte)\s*\*?\s*)({name})\b'

DEF_RE = re.compile(r'^[A-Za-z_][\w\s\*&<>,]*?\b([A-Za-z_]\w*)\s*::\s*~?[A-Za-z_]\w*\s*\(')
CLASS_RE = re.compile(r'^\s*class\s+(?:EXPORT\s+)?([A-Za-z_]\w*)\s*(?::|\{|$)')
FILE_PATCHES = {
    "dlls/nodes.cpp": [("for (int iZone = 1, iPrime = 0;", "int iPrime; for (int iZone = 1, iPrime_ = (iPrime = 0);")],
}
VGUI_ENUMS = {"MouseCode": "vgui_mousecode.h", "KeyCode": "vgui_keycode.h"}


def owner(qual, method, cls):
    """The class that defines method, preferring the explicit qualifier and then
    the class whose member function contains the call."""
    found = METHODS.get(method, set())
    if qual and qual in found | {cls}:
        return qual
    if cls in found or not found:
        return qual if qual and qual[0].isupper() and qual not in ("this",) and not qual.startswith(("p", "m_")) else cls
    if len(found) == 1:
        return next(iter(found))
    return cls


def index_methods(src):
    for root, _, files in os.walk(src):
        for name in files:
            if name.lower().endswith((".cpp", ".h")):
                text = open(os.path.join(root, name), encoding="latin-1").read()
                for m in METHOD_DEF_RE.finditer(text):
                    METHODS[m.group(2)].add(m.group(1))
                cls = None
                for line in text.split("\n"):
                    c = CLASS_RE.match(line)
                    if c:
                        cls = c.group(1)
                        CLASSES.add(cls)
                    d = re.match(r"^\s+(?:virtual\s+)?(?:void|int|BOOL)\s+(?:EXPORT\s+)?([A-Za-z_]\w*)\s*\(", line)
                    if cls and d:
                        METHODS[d.group(1)].add(cls)


def qualify_setters(text, header=False):
    """MSVC 6 accepted SetThink( Member ); clang needs &Class::Member."""
    cls = None
    out = []
    for line in text.split("\n"):
        m = DEF_RE.match(line) or CLASS_RE.match(line)
        if m:
            cls = m.group(1)
        if cls and not line.lstrip().startswith("#"):
            line = SETTER_RE.sub(lambda s: s.group(0) if s.group(3) == "NULL"
                                 else f"{s.group(1)}( &{owner(s.group(2), s.group(3), cls)}::{s.group(3)} )", line)
            d = IMPLICIT_DECL_RE.match(line)
            if header and d and d.group(1) == "\t" and re.match(r"\w+", d.group(2)).group(0) not in CLASSES:
                line = d.group(1) + "int " + d.group(2)
        line = STATIC_INT_RE.sub(lambda m: m.group(0) if m.group(1) in ("int", "float", "char", "const", "void", "unsigned", "double", "long", "short", "bool", "inline") else "static int " + m.group(1) + " =", line)
        line = SIZEOF_RE.sub(r"sizeof(\1)", line)
        if cls:
            line = PFN_CMP_RE.sub(lambda m: m.group(0) if m.group(3) == "NULL" else
                                  f"{m.group(1)} {m.group(2)} &{owner(None, m.group(3), cls)}::{m.group(3)}", line)
        d = IMPLICIT_DEF_RE.match(line)
        if d and d.group(1) != d.group(2):
            line = "int " + line
        out.append(line)
    return "\n".join(out)


def stage(src, dst):
    """Copy the tree with lowercase paths so Windows-style includes resolve."""
    index_methods(src)
    for root, _, files in os.walk(src):
        rel = os.path.relpath(root, src).lower()
        os.makedirs(os.path.join(dst, rel), exist_ok=True)
        for name in files:
            data = open(os.path.join(root, name), "rb").read()
            if name.lower().endswith((".c", ".cpp", ".h", ".hpp", ".dsp")):
                text = data.decode("latin-1")
                text = INCLUDE_RE.sub(lambda m: m.group(1) + m.group(2) + m.group(3).replace("\\", "/").lower() + m.group(4), text)
                text = qualify_setters(text, name.lower().endswith(".h"))
                for enum, header in VGUI_ENUMS.items():
                    fwd = re.compile(r'^\s*enum\s+' + enum + r'\s*;', re.M)
                    if name.lower() != header and fwd.search(text):
                        text = f'#include "{header}"\n' + fwd.sub("", text)
                data = text.encode("latin-1")
            for old, new in FILE_PATCHES.get(os.path.join(rel, name.lower()).lstrip("./"), []):
                data = data.replace(old.encode(), new.encode())
            open(os.path.join(dst, rel, name.lower()), "wb").write(data)


def hoist_for(path, line_no, name):
    """MSVC 6 kept a for-init variable alive after the loop."""
    lines = open(path, encoding="latin-1").read().split("\n")
    pat = re.compile(FOR_DECL_RE.format(name=re.escape(name)))
    for i in range(line_no - 1, -1, -1):
        m = pat.search(lines[i])
        if m:
            indent = re.match(r"\s*", lines[i]).group(0)
            decl = f"{indent}{m.group(1).strip()} {name};"
            lines[i] = lines[i][:m.start()] + "for ( " + name + lines[i][m.end():]
            lines.insert(i, decl)
            open(path, "w", encoding="latin-1").write("\n".join(lines))
            return True
    return False


def repair(stderr, args, cwd):
    changed = False
    for m in re.finditer(r"^(\S+?):(\d+):\d+: error: use of undeclared identifier '(\w+)'", stderr, re.M):
        path = m.group(1) if os.path.isabs(m.group(1)) else os.path.join(cwd, m.group(1))
        changed |= hoist_for(path, int(m.group(2)), m.group(3))
    if not changed and re.search(r"error: no member named '\w+' in '\w+'; did you mean", stderr):
        r = subprocess.run(args[:1] + ["-Xclang", "-fixit"] + args[1:], capture_output=True, text=True, cwd=cwd)
        changed |= "FIX-IT applied" in r.stderr
    return changed


def main():
    src, out = os.path.abspath(sys.argv[1]), os.path.abspath(sys.argv[2])
    staged = os.path.join(out, "src")
    if not os.path.isdir(staged):
        stage(src, staged)
    src = staged
    compat = os.path.join(HERE, "compat")
    for side, (dsp, incs, defs) in SIDES.items():
        files = dsp_sources(os.path.join(src, dsp))
        jobs = []
        for f in files:
            rel = os.path.relpath(os.path.join(src, f), src)
            obj = os.path.join(out, "obj", side, rel + ".o")
            lang = ["-x", "c", "-std=gnu89"] if rel.endswith(".c") else []
            opts = [o for o in OPT if not (lang and o in ("-std=gnu++98", "-fno-rtti", "-fno-exceptions", "-fdelayed-template-parsing"))]
            args = ["clang" if lang else "clang++"] + opts + lang + DEFS + defs + \
                   ["-I" + compat] + ["-I" + os.path.join(src, i) for i in incs] + \
                   ["-include", os.path.join(compat, "spirit10_compat.h"), "-c", os.path.join(src, f), "-o", obj]
            jobs.append((rel, obj, args))

        def run(job):
            rel, obj, args = job
            os.makedirs(os.path.dirname(obj), exist_ok=True)
            cwd = os.path.join(src, os.path.dirname(dsp))
            for _ in range(8):
                r = subprocess.run(args, capture_output=True, text=True, cwd=cwd)
                if r.returncode == 0 or not repair(r.stderr, args, cwd):
                    break
            return rel, obj, r.returncode, r.stderr

        with ThreadPoolExecutor(os.cpu_count()) as ex:
            results = list(ex.map(run, jobs))
        ok = [(rel, obj) for rel, obj, rc, _ in results if rc == 0]
        bad = [(rel, err) for rel, _, rc, err in results if rc]
        with open(os.path.join(out, f"ref_{side}.objects.txt"), "w") as fo:
            for rel, _, rc, _ in results:
                fo.write(("" if rc == 0 else "# failed ") + rel + "\n")
        for rel, err in bad:
            first = [l for l in err.splitlines() if "error" in l][:3]
            print(f"{side}: FAILED {rel}\n  " + "\n  ".join(first))
        lib = os.path.join(out, f"ref_{side}.so")
        subprocess.check_call(["g++", "-m32", "-shared", "-Wl,-z,notext", "-Wl,--unresolved-symbols=ignore-all",
                               "-Wl,--allow-multiple-definition", "-o", lib] + [o for _, o in ok])
        print(f"{side}: {len(ok)}/{len(results)} compiled -> {lib}")


if __name__ == "__main__":
    main()
