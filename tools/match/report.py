#!/usr/bin/env python3
"""Write decomp/classification/ from the match.py results.

Usage: report.py <m_server.json> <m_client.json> <out dir>
"""
import collections
import json
import os
import sys

CLASSES = ["sdk", "sdk-changed", "sdk-unmatched", "mod", "crt"]
DESCRIBE = {
    "sdk": "Matches a Spirit of Half-Life 1.0 function with the same strings, floats and call count. Build from source.",
    "sdk-changed": "Spirit function the mod edited: it differs from its match, references strings Spirit does not have, or calls into the mod's objects.",
    "sdk-unmatched": "Inside the Spirit objects but not tied to one function; mostly small inline helpers and think functions without distinctive features.",
    "mod": "The mod's own objects, linked after the last Spirit file and before the C runtime.",
    "crt": "MSVC static C runtime and import thunks. Not ported; Emscripten's libc replaces it.",
}


def write_json(path, doc):
    with open(path, "w") as f:
        f.write('{"mod_start": "%s", "crt_start": "%s", "functions": [\n' % (doc["mod_start"], doc["crt_start"]))
        recs = doc["functions"]
        for i, r in enumerate(recs):
            f.write(json.dumps(r, separators=(",", ":")) + (",\n" if i + 1 < len(recs) else "\n"))
        f.write("]}\n")


def section(lines, title, recs, cols):
    lines.append(f"### {title}\n")
    lines.append("| " + " | ".join(c for c, _ in cols) + " |")
    lines.append("| " + " | ".join("---" for _ in cols) + " |")
    for r in recs:
        lines.append("| " + " | ".join(str(fn(r)).replace("|", "\\|") for _, fn in cols) + " |")
    lines.append("")


def strings(r, n=3):
    s = r.get("new_strings", [])
    return "; ".join(x.replace("\n", "\\n")[:50] for x in s[:n]) + (" …" if len(s) > n else "")


def main():
    srv, cli, out = sys.argv[1:4]
    os.makedirs(out, exist_ok=True)
    docs = {"server": json.load(open(srv)), "client": json.load(open(cli))}
    lines = ["# Function classification", "",
             "Every function in `EscapeFromWoomera.dll` and `client.dll`, matched against Spirit of Half-Life 1.0 "
             "compiled from its own `hl.dsp` and `cl_dll.dsp`. `tools/match/` rebuilds these files "
             "(see `tools/match/README.md`). `server.json` and `client.json` hold one record per function: "
             "address, Ghidra name, listing file in `decomp/`, matched Spirit symbol with its source file and line, "
             "how it was matched, and the class.", ""]
    for side, doc in docs.items():
        write_json(os.path.join(out, side + ".json"), doc)
    lines.append("| Class | Meaning | Server | Client |")
    lines.append("| --- | --- | --- | --- |")
    counts = {s: collections.Counter(r["class"] for r in d["functions"]) for s, d in docs.items()}
    for c in CLASSES:
        lines.append(f"| `{c}` | {DESCRIBE[c]} | {counts['server'][c]} | {counts['client'][c]} |")
    lines.append("")
    for side, doc in docs.items():
        lines.append(f"Mod objects in the {side} DLL: `0x{doc['mod_start']}` up to the runtime at `0x{doc['crt_start']}`.")
    lines.append("")
    for side, doc in docs.items():
        fs = doc["functions"]
        lines.append(f"## {side.capitalize()}\n")
        flagged = [r for r in fs if r["class"] == "sdk-changed" and (r.get("new_strings") or r.get("calls_mod"))]
        section(lines, "Spirit functions that reach the mod", flagged, [
            ("Address", lambda r: "`%s`" % r["va"]),
            ("Spirit function", lambda r: "`%s`" % r["ref"] if "ref" in r else "near `%s`" % (r.get("near") or ["?"])[0]),
            ("Calls into mod", lambda r: len(r.get("calls_mod", []))),
            ("Strings not in Spirit", strings),
        ])
        mod = [r for r in fs if r["class"] == "mod"]
        section(lines, "Mod functions", mod, [
            ("Address", lambda r: "`%s`" % r["va"]),
            ("Name", lambda r: "`%s`" % r["name"]),
            ("Bytes", lambda r: r["size"]),
            ("Listing", lambda r: "`%s`" % r.get("listing", "")),
        ])
    open(os.path.join(out, "README.md"), "w").write("\n".join(lines))


if __name__ == "__main__":
    main()
