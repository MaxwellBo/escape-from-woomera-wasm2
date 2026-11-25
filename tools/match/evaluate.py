#!/usr/bin/env python3
"""Measure match precision against the names the DLL exports.

The exported think/touch/use names and entity link functions are ground
truth. The matcher runs without its name stage, and every exported function
it matches by another route is scored right or wrong, per stage.

Usage: evaluate.py <dll.json> <ref.json> <ref.so>
"""
import collections
import sys

import match as M


def main():
    dll_json, ref_json, ref_so = sys.argv[1:4]
    ref = M.load(ref_json)
    srcs = M.ref_sources(ref_so, 0x10000, ref[1].keys())
    truth = M.Matcher(M.load(dll_json), ref, srcs)
    truth.by_names()
    gt = dict(truth.t2r)
    m = M.Matcher(M.load(dll_json), M.load(ref_json), srcs)
    m.by_names = lambda: None
    m.run()
    by = collections.defaultdict(lambda: [0, 0])
    for ta, ra in gt.items():
        if ta in m.t2r:
            by[m.how[ta]][0 if m.t2r[ta] == ra else 1] += 1
    right = sum(v[0] for v in by.values())
    wrong = sum(v[1] for v in by.values())
    print(f"exported {len(gt)}  matched {right + wrong}  right {right}  wrong {wrong}")
    for how, (r, w) in sorted(by.items()):
        print(f"  {how:10s} right {r:4d} wrong {w:4d}")


if __name__ == "__main__":
    main()
