#!/usr/bin/env python3
"""Match functions in an Escape from Woomera DLL against Spirit of Half-Life.

Inputs are the ExportFeatures.java dumps of the original DLL and of the
reference library built by build_reference.py, plus `nm -l` of the reference
for source files and lines. Output is one JSON record per DLL function with
a class (sdk, sdk-changed, mod, crt, unknown), the matched reference symbol,
its source file and line, and how the match was made.

Usage: match.py <dll.json> <ref.json> <ref.so> <out.json> [--decomp DIR]
"""
import argparse
import bisect
import collections
import json
import os
import re
import subprocess

STAGES = ["name", "strings", "vtable", "callgraph", "order"]


def load(path):
    d = json.load(open(path))
    fns = {f["entry"]: f for f in d["functions"]}
    return d, fns


def ref_sources(so, base, entries):
    """address -> (file, line) of each function's first instruction. The line
    is where the definition's code starts, which follows source order; the
    declaration line nm -l reports does not."""
    addrs = sorted(entries)
    r = subprocess.run(["addr2line", "-e", so], input="\n".join("%x" % (a - base) for a in addrs),
                       capture_output=True, text=True)
    out = {}
    for a, line in zip(addrs, r.stdout.splitlines()):
        m = re.match(r"(.*):(\d+)", line)
        if not m or m.group(1) == "??" or m.group(2) == "0":
            continue
        path = re.sub(r"^.*?/src/", "", m.group(1))
        out[a] = (path, int(m.group(2)))
    return out


def short_name(name):
    name = name.replace("<EXTERNAL>::", "")
    return name


def strings_key(f):
    return tuple(sorted(s for s in f["strings"]))


def feature_set(f, consts=False):
    """Strings, imports and float constants survive a change of compiler;
    integer immediates mostly do not, so they only count when asked for."""
    s = collections.Counter(f["strings"])
    s.update("f:" + x for x in f["floats"])
    if consts:
        s.update("c:" + x for x in f["consts"])
    return s


def shape(f):
    """Compiler-independent features: strings, imports, floats, field offsets
    and virtual call slots. Callees are added by the matcher."""
    s = feature_set(f)
    s.update("d:%d" % d for d in f.get("disps", []))
    s.update("v:%d" % d for d in f.get("indirectCallOffsets", []))
    return s


def similarity(a, b):
    if not a and not b:
        return 1.0
    inter = sum((a & b).values())
    union = sum((a | b).values())
    return inter / union if union else 0.0


class Matcher:
    def __init__(self, dll, ref, srcs):
        self.d, self.t = dll
        self.r_doc, self.r = ref
        self.srcs = srcs
        self.t2r = {}
        self.r2t = {}
        self.how = {}
        self.t_sorted = sorted(self.t)
        self.vt_strict = False
        self.r_by_name = collections.defaultdict(list)
        for a, f in self.r.items():
            if f.get("thunk") or f["name"].startswith("<EXTERNAL>"):
                continue
            self.r_by_name[short_name(f["name"])].append(a)

    def bind(self, ta, ra, how):
        if ta in self.t2r or ra in self.r2t:
            return False
        self.t2r[ta] = ra
        self.r2t[ra] = ta
        self.how[ta] = how
        return True

    def real_fn(self, f):
        return not f.get("thunk") and f["size"] > 0

    def by_names(self):
        for ta, f in self.t.items():
            n = short_name(f["name"])
            if n.startswith(("FUN_", "LAB_", "thunk_", "Ordinal_")):
                continue
            cands = [ra for ra in self.r_by_name.get(n, []) if ra not in self.r2t]
            if len(cands) == 1:
                self.bind(ta, cands[0], "name")
            elif len(cands) > 1:
                fs = feature_set(f)
                best = max(cands, key=lambda ra: similarity(fs, feature_set(self.r[ra])))
                self.bind(ta, best, "name")

    def by_strings(self):
        idx = collections.defaultdict(list)
        for ra, f in self.r.items():
            if ra in self.r2t or not self.real_fn(f):
                continue
            k = strings_key(f)
            if len([s for s in k if not s.startswith("@import:")]) >= 1:
                idx[k].append(ra)
        tidx = collections.defaultdict(list)
        for ta, f in self.t.items():
            if ta in self.t2r or not self.real_fn(f):
                continue
            k = strings_key(f)
            if k in idx:
                tidx[k].append(ta)
        for k, tas in tidx.items():
            ras = [ra for ra in idx[k] if ra not in self.r2t]
            if len(tas) == 1 and len(ras) == 1:
                self.bind(tas[0], ras[0], "strings")
        # Near matches: functions with at least two distinctive strings whose
        # best counterpart is clearly ahead of the runner-up.
        rcands = [(ra, feature_set(self.r[ra])) for ra in self.r
                  if ra not in self.r2t and self.real_fn(self.r[ra])
                  and len([s for s in self.r[ra]["strings"] if not s.startswith("@")]) >= 2]
        by_string = collections.defaultdict(set)
        for ra, fs in rcands:
            for s in fs:
                if not s.startswith(("c:", "f:", "@")):
                    by_string[s].add(ra)
        rfs = dict(rcands)
        for ta in self.t_sorted:
            f = self.t[ta]
            if ta in self.t2r or not self.real_fn(f):
                continue
            strs = [s for s in f["strings"] if not s.startswith("@")]
            if len(strs) < 2:
                continue
            pool = set()
            for s in strs:
                pool |= by_string.get(s, set())
            pool = [ra for ra in pool if ra not in self.r2t]
            if not pool:
                continue
            tfs = feature_set(f)
            scored = sorted(((similarity(tfs, rfs[ra]), ra) for ra in pool), reverse=True)
            best, ra = scored[0]
            second = scored[1][0] if len(scored) > 1 else 0
            if best >= 0.5 and best - second >= 0.15:
                self.bind(ta, ra, "strings~")

    def shape_t(self, ta):
        f = self.t[ta]
        s = shape(f)
        for c in f["calls"]:
            if c > 0:
                s["k:%x" % self.t2r[c] if c in self.t2r else "k?"] += 1
        return s

    def shape_r(self, ra):
        f = self.r[ra]
        s = shape(f)
        for c in f["calls"]:
            if c > 0:
                s["k:%x" % c if c in self.r2t else "k?"] += 1
        return s

    def evidence(self, ta, ra):
        """(similarity, amount of evidence) for a candidate pair."""
        st, sr = self.shape_t(ta), self.shape_r(ra)
        n = max(sum(st.values()), sum(sr.values()))
        return similarity(st, sr), n

    def compatible(self, ta, ra, strict=False):
        ft, fr = self.t[ta], self.r[ra]
        if not self.real_fn(ft) or not self.real_fn(fr):
            return False
        sim, n = self.evidence(ta, ra)
        if n >= 3:
            return sim >= (0.6 if strict else 0.5)
        if strict:
            return False
        a, b = max(ft["insns"], 1), max(fr["insns"], 1)
        return n == 0 or sim >= 0.5 and max(a, b) / min(a, b) <= 2

    def align(self, tv, rv):
        """Needleman-Wunsch over two vtables; returns aligned (t, r) slot pairs."""
        n, m = len(tv), len(rv)
        GAP = -2

        def score(ta, ra):
            if self.t2r.get(ta) == ra:
                return 4
            if ta in self.t2r or ra in self.r2t:
                return -3
            return 1

        dp = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(1, n + 1):
            dp[i][0] = i * GAP
        for j in range(1, m + 1):
            dp[0][j] = j * GAP
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                dp[i][j] = max(dp[i - 1][j - 1] + score(tv[i - 1], rv[j - 1]),
                               dp[i - 1][j] + GAP, dp[i][j - 1] + GAP)
        pairs = []
        i, j = n, m
        while i > 0 and j > 0:
            if dp[i][j] == dp[i - 1][j - 1] + score(tv[i - 1], rv[j - 1]):
                pairs.append((tv[i - 1], rv[j - 1]))
                i, j = i - 1, j - 1
            elif dp[i][j] == dp[i - 1][j] + GAP:
                i -= 1
            else:
                j -= 1
        return pairs[::-1]

    def by_vtables(self):
        rv = self.r_doc["vtables"]
        tv = self.d["vtables"]
        member = collections.defaultdict(set)
        for i, vt in enumerate(rv):
            for ra in vt:
                member[ra].add(i)
        changed = True
        while changed:
            changed = False
            for vt in tv:
                votes = collections.Counter()
                for ta in set(vt):
                    ra = self.t2r.get(ta)
                    if ra is not None:
                        for i in member.get(ra, ()):
                            votes[i] += 1
                if not votes:
                    continue
                best = max(votes.values())
                if best < 2:
                    continue
                # The class's own vtable is the candidate with the most matched
                # slots; among ties prefer the one closest in length.
                cands = [i for i, v in votes.items() if v == best]
                i = min(cands, key=lambda k: abs(len(rv[k]) - len(vt)))
                for ta, ra in self.align(vt, rv[i]):
                    if ta not in self.t2r and ra not in self.r2t and self.compatible(ta, ra, strict=self.vt_strict):
                        if self.bind(ta, ra, "vtable"):
                            changed = True

    def call_seq(self, f, table):
        return [c for c in f["calls"] if c > 0 and c in table]

    def by_callgraph(self):
        changed = True
        while changed:
            changed = False
            for ta, ra in list(self.t2r.items()):
                tc = self.call_seq(self.t[ta], self.t)
                rc = self.call_seq(self.r[ra], self.r)
                if not tc or not rc:
                    continue
                if len(tc) == len(rc):
                    pairs = list(zip(tc, rc))
                else:
                    pairs = self.align_calls(tc, rc)
                agree = sum(1 for a, b in pairs if self.t2r.get(a) == b)
                clash = sum(1 for a, b in pairs if a in self.t2r and self.t2r[a] != b)
                if clash > agree:
                    continue
                for a, b in pairs:
                    if a not in self.t2r and b not in self.r2t and self.compatible(a, b):
                        if self.bind(a, b, "callgraph"):
                            changed = True

    def align_calls(self, tc, rc):
        """Pair callees between matched anchors when the gap lengths agree."""
        anchors = [(i, j) for i, a in enumerate(tc) for j, b in enumerate(rc) if self.t2r.get(a) == b]
        lis = []
        last_j = -1
        for i, j in anchors:
            if j > last_j and (not lis or i > lis[-1][0]):
                lis.append((i, j))
                last_j = j
        pairs = []
        prev = (-1, -1)
        for i, j in lis + [(len(tc), len(rc))]:
            gi, gj = tc[prev[0] + 1:i], rc[prev[1] + 1:j]
            if len(gi) == len(gj):
                pairs.extend(zip(gi, gj))
            if i < len(tc):
                pairs.append((tc[i], rc[j]))
            prev = (i, j)
        return pairs

    def by_order(self):
        """Within one source file, pair the unmatched functions that sit between
        two matched neighbours when both sides have the same number of them."""
        rfile = {ra: self.srcs.get(ra - 0) for ra in self.r}
        matched = [ta for ta in self.t_sorted if ta in self.t2r]
        for a, b in zip(matched, matched[1:]):
            fa, fb = self.srcs.get(self.t2r[a]), self.srcs.get(self.t2r[b])
            if not fa or not fb or fa[0] != fb[0] or fa[1] >= fb[1]:
                continue
            i0 = bisect.bisect_right(self.t_sorted, a)
            i1 = bisect.bisect_left(self.t_sorted, b)
            gap_t = [ta for ta in self.t_sorted[i0:i1] if self.real_fn(self.t[ta]) and ta not in self.t2r]
            gap_r = sorted((self.srcs[ra][1], ra) for ra in self.r
                           if ra not in self.r2t and self.srcs.get(ra, ("", 0))[0] == fa[0]
                           and fa[1] < self.srcs[ra][1] < fb[1] and self.real_fn(self.r[ra]))
            if not gap_t or not gap_r or len(gap_t) * len(gap_r) > 40000:
                continue
            if len(gap_t) == len(gap_r) and all(self.compatible(a, b) for a, (_, b) in zip(gap_t, gap_r)) \
                    and sum(1 for a, (_, b) in zip(gap_t, gap_r) if self.compatible(a, b, strict=True)) * 2 >= len(gap_t):
                for ta, (_, ra) in zip(gap_t, gap_r):
                    self.bind(ta, ra, "order")
                continue
            for ta, ra in self.align_gap(gap_t, [ra for _, ra in gap_r]):
                self.bind(ta, ra, "order~")

    def align_gap(self, ts, rs):
        """Align two runs of unmatched functions; header inlines that MSVC
        placed elsewhere become gaps. Only confident pairs are returned."""
        n, m = len(ts), len(rs)
        GAP = -1

        def score(a, b):
            sim, ev = self.evidence(a, b)
            if ev < 3:
                return 0
            return 4 if sim >= 0.75 else (1 if sim >= 0.6 else -4)

        S = [[score(a, b) for b in rs] for a in ts]
        dp = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(1, n + 1):
            dp[i][0] = i * GAP
        for j in range(1, m + 1):
            dp[0][j] = j * GAP
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                dp[i][j] = max(dp[i - 1][j - 1] + S[i - 1][j - 1], dp[i - 1][j] + GAP, dp[i][j - 1] + GAP)
        out = []
        i, j = n, m
        while i > 0 and j > 0:
            if dp[i][j] == dp[i - 1][j - 1] + S[i - 1][j - 1]:
                if S[i - 1][j - 1] >= 1:
                    out.append((ts[i - 1], rs[j - 1]))
                i, j = i - 1, j - 1
            elif dp[i][j] == dp[i - 1][j] + GAP:
                i -= 1
            else:
                j -= 1
        return out

    def run(self):
        self.by_names()
        self.by_strings()
        for _ in range(3):
            self.by_vtables()
            self.by_callgraph()
            self.by_order()


def regions(m, objects):
    """Link-order regions: Spirit objects, then the mod's objects, then the C
    runtime. The mod starts after the last function of the last .dsp file and
    the runtime starts where library names take over."""
    last_file = [o for o in objects if not o.startswith("#")][-1]
    tail = [ta for ta, ra in m.t2r.items() if m.srcs.get(ra, ("",))[0] == last_file]
    if not tail:
        raise SystemExit("no matches in " + last_file)
    end_sdk = max(tail)
    after = [ta for ta in m.t_sorted if ta > end_sdk]
    # MSVC aligns the game objects' functions to 16 bytes; the static C
    # runtime objects are packed, so the first run of unaligned entries marks
    # the runtime. Import thunks just before it belong to it as well.
    crt = after[-1] + 1
    for i, ta in enumerate(after):
        window = after[i:i + 40]
        if ta % 16 and sum(1 for a in window if a % 16) >= 0.7 * len(window):
            crt = ta
            j = i - 1
            while j >= 0 and m.t[after[j]].get("thunk"):
                crt = after[j]
                j -= 1
            break
    return after[0], crt


def classify(m, decomp_names, objects):
    t = m.t
    mod_start, crt_start = regions(m, objects)
    ref_strings = set()
    for f in m.r.values():
        for x in f["strings"]:
            if not x.startswith("@"):
                # Ghidra also records references into the middle of a string.
                ref_strings.update(x[i:] for i in range(len(x)))
    files = {ta: m.srcs[ra][0] for ta, ra in m.t2r.items() if ra in m.srcs}
    keys = [ta for ta in m.t_sorted if ta in files]
    out = []
    for ta in m.t_sorted:
        f = t[ta]
        rec = {"va": "%08x" % ta, "name": f["name"], "size": f["size"]}
        if ta in decomp_names:
            rec["listing"] = decomp_names[ta]
        if f.get("thunk"):
            rec["thunk"] = True
        ra = m.t2r.get(ta)
        if ra is not None:
            rf = m.r[ra]
            rec["ref"] = short_name(rf["name"])
            if ra in m.srcs:
                rec["file"], rec["line"] = m.srcs[ra]
            rec["how"] = m.how[ta]
        if ta >= crt_start or is_crt_name(f["name"]) and ra is None:
            rec["class"] = "crt"
        elif ta >= mod_start:
            rec["class"] = "mod"
        else:
            novel = sorted({x for x in f["strings"] if not x.startswith("@") and x not in ref_strings
                            and len(x.strip()) > 1})
            calls_mod = sorted({"%08x" % c for c in f["calls"] if mod_start <= c < crt_start})
            if novel:
                rec["new_strings"] = novel
            if calls_mod:
                rec["calls_mod"] = calls_mod
            if ra is not None:
                sim = similarity(feature_set(f), feature_set(m.r[ra]))
                nt = len([c for c in f["calls"] if c > 0])
                nr = len([c for c in m.r[ra]["calls"] if c > 0])
                rec["similarity"] = round(sim, 3)
                rec["calls"] = [nt, nr]
                same = sim >= 0.75 and abs(nt - nr) <= max(2, (nt + nr) // 6)
                rec["class"] = "sdk" if same and not novel and not calls_mod else "sdk-changed"
            else:
                i = bisect.bisect_left(keys, ta)
                before = files[keys[i - 1]] if i > 0 else None
                after = files[keys[i]] if i < len(keys) else None
                rec["near"] = [before, after]
                rec["class"] = "sdk-changed" if novel or calls_mod else "sdk-unmatched"
        out.append(rec)
    return out, mod_start, crt_start


CRT_RE = re.compile(r"^(_{1,3}[A-Za-z]|`|operator_|Ordinal_|entry$|DllMain|_?[A-Z][A-Za-z]+@\d+$)")


def is_crt_name(name):
    return bool(CRT_RE.match(name)) and "::" not in name


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("dll")
    ap.add_argument("ref")
    ap.add_argument("ref_so")
    ap.add_argument("out")
    ap.add_argument("--decomp")
    ap.add_argument("--objects", required=True, help="ref_<side>.objects.txt from build_spirit10.py")
    a = ap.parse_args()
    dll = load(a.dll)
    ref = load(a.ref)
    srcs = ref_sources(a.ref_so, 0x10000, ref[1].keys())
    m = Matcher(dll, ref, srcs)
    m.run()
    names = {}
    if a.decomp:
        for fn in os.listdir(a.decomp):
            names[int(fn[:8], 16)] = fn
    objects = [l.strip() for l in open(a.objects) if l.strip()]
    recs, mod_start, crt_start = classify(m, names, objects)
    json.dump({"mod_start": "%08x" % mod_start, "crt_start": "%08x" % crt_start, "functions": recs},
              open(a.out, "w"), indent=0)
    c = collections.Counter(r["class"] for r in recs)
    h = collections.Counter(r.get("how") for r in recs if "how" in r)
    print(os.path.basename(a.dll), "mod %08x-%08x" % (mod_start, crt_start), dict(c), dict(h))


if __name__ == "__main__":
    main()
