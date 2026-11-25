# Function matching

Sorts every function in `EscapeFromWoomera.dll` and `client.dll` into Spirit of Half-Life code, Spirit code the mod edited, the mod's own code, and the C runtime. The result is `decomp/classification/`.

The mod is built on Spirit of Half-Life **1.0**. None of the strings that only Spirit 1.1 has appear in the server DLL, and neither DLL has the Aurora particle system that 1.2 added. The reference is therefore the 1.0 source ([sohl-modders/Spirit-of-Half-Life-1.0](https://github.com/sohl-modders/Spirit-of-Half-Life-1.0)), compiled file by file in the order of its `hl.dsp` and `cl_dll.dsp`.

```sh
tools/match/run.sh /path/to/EscapeFromWoomera_v084
```

`run.sh` needs Ghidra 12.2 (`GHIDRA_HOME`, default `/opt/ghidra/ghidra_12.2_PUBLIC`), JDK 25, clang 18 with 32-bit multilib (`g++-multilib`) and binutils.

## Steps

1. `build_spirit10.py` stages the Spirit 1.0 tree with lowercase paths and builds a 32-bit x86 reference with symbols. Clang's MSVC compatibility mode accepts most of the 2002 code. The script also rewrites the few constructs MSVC 6 allowed that clang does not: bare member names in `SetThink`, implicit `int`, and `for` variables used after the loop. Flags keep code close to MSVC 6 `/O2`: no automatic inlining, no PIC, so string and global references stay direct operands.
2. `analyze.sh` imports a binary into a throwaway Ghidra project. `SeedFunctions.java` creates a function at every start listed in `decomp/`, and `ExportFeatures.java` writes each function's strings, imports, float constants, field offsets, virtual-call slots and direct callees.
3. `match.py` pairs DLL functions with reference functions, from the most reliable evidence to the least:
   - exported names (think, touch and use functions, entity link functions);
   - identical, then near-identical, sets of strings;
   - vtables aligned with Needleman-Wunsch, since the mod adds and removes a few virtuals;
   - callees of matched functions, position by position;
   - source order between two matched neighbours in the same file. MSVC 6 emits a file's functions in definition order.
4. `match.py` then splits the DLL by link order. The mod's objects start after the last function of the last `.dsp` file. The runtime starts where function entries stop being 16-byte aligned.
5. `report.py` writes one JSON record per function and `README.md`.

`evaluate.py` measures precision by running the matcher without exported names and scoring the exported functions it matches by other routes. On the server DLL, 49 of 52 such matches are right.

## Reading the result

A `sdk` function is safe to take from Spirit source. A `sdk-changed` function needs its listing read: either Ghidra saw strings Spirit does not have, or it calls into the mod's objects. In practice those are the mod's hooks into `ClientCommand`, `StartFrame`, `ServerActivate`, player spawn and the guards' model selection. `sdk-unmatched` is the remaining Spirit-region code with too little evidence to pair one-to-one. Most of it is small inline helpers and think functions, so it is not a list of changes. `mod` is the mod's own code, and the part to port.
