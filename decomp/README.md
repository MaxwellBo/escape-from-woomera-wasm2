# Decompiled binaries

These listings are Ghidra 12.1.4 output from Escape from Woomera v0.84 (`EscapeFromWoomera.dll` and `client.dll`). They are analysis output, not the original source, and the browser does not compile them. `engine/efw/` is the structured port that links against Spirit of Half-Life 1.2.

Each file is one function, named `VA_symbol.c`.

| Directory | DLL | Listings | `.text` bytes in a function |
| --- | --- | --- | --- |
| `server/` | `EscapeFromWoomera.dll` | 5105 | 862836 / 901120 (95.75%) |
| `client/` | `client.dll` | 3012 | 343930 / 360448 (95.42%) |

The bytes left outside a function are `NOP` / `INT3` alignment and embedded pointer tables. Import jumps that were sitting in those gaps are listed too (`TlsFree`, `SetEnvironmentVariableA`, the vgui thunks, and the small CRT helpers beside them). The Pentium divide helpers are one switch again: `decomp/server/100cbe77__adj_fdiv_dispatch.c` and `decomp/client/1004f197__adj_fdiv_dispatch.c`, plus `_adj_fdiv_m32`, `_adj_fdiv_m64`, `_adj_fdiv_m16i`, `_adj_fdiv_m32i`, and the `fdivr` copies. Ghidra created a function at the server command dispatcher, `decomp/server/1001a920_efw_ClientCommand.c` (`efw_Talk`, `efw_Give`, `efw_UseWithMarker`, `efw_HideUnderBuilding`, `efw_PickupPliers`, and the diary and level commands). The conversation parser is `decomp/server/100be970_FUN_100be970.c` (references to `parse error` and `parser stack overflow`).

Two CRT floating-point helpers hit a Ghidra decompiler error (`Overlapping input varnodes`). Their files are Capstone disassembly of the function body:

- `server/100c8ae2_FUN_100c8ae2.c`
- `client/1004b2c2_FUN_1004b2c2.c`
