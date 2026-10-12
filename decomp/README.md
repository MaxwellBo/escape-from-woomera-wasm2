# Decompiled mod ranges

These listings are Ghidra 12.1.4 output from Escape from Woomera v0.84. They are analysis output, not the original source. The browser does not compile them. `engine/efw/` is the structured port that links against Spirit of Half-Life 1.2.

| Directory | DLL | Address range |
| --- | --- | --- |
| `server-mod/` | `EscapeFromWoomera.dll` | `0x100b8000`–`0x100c9000` |
| `client/` | `client.dll` | `0x10040000`–`0x10050000` |

The server command dispatcher at `0x1001a920` was not created as its own function by Ghidra, so it is not in `server-mod/`. Its branches (`efw_Talk`, `efw_Give`, `efw_UseWithMarker`, `efw_HideUnderBuilding`, `efw_PickupPliers`, and the diary and level commands) were read from the bytes and ported in `engine/efw/efw_game.cpp`.

Most of each DLL is Spirit of Half-Life. Those functions are linked from the Spirit 1.2 sources instead of being re-lifted.
