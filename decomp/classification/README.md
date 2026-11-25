# Function classification

Every function in `EscapeFromWoomera.dll` and `client.dll`, matched against Spirit of Half-Life 1.0 compiled from its own `hl.dsp` and `cl_dll.dsp`. `tools/match/` rebuilds these files (see `tools/match/README.md`). `server.json` and `client.json` hold one record per function: address, Ghidra name, listing file in `decomp/`, matched Spirit symbol with its source file and line, how it was matched, and the class.

| Class | Meaning | Server | Client |
| --- | --- | --- | --- |
| `sdk` | Matches a Spirit of Half-Life 1.0 function with the same strings, floats and call count. Build from source. | 1465 | 313 |
| `sdk-changed` | Spirit function the mod edited: it differs from its match, references strings Spirit does not have, or calls into the mod's objects. | 519 | 183 |
| `sdk-unmatched` | Inside the Spirit objects but not tied to one function; mostly small inline helpers and think functions without distinctive features. | 1808 | 1008 |
| `mod` | The mod's own objects, linked after the last Spirit file and before the C runtime. | 417 | 175 |
| `crt` | MSVC static C runtime and import thunks. Not ported; Emscripten's libc replaces it. | 894 | 1333 |

Mod objects in the server DLL: `0x100b8450` up to the runtime at `0x100c82a0`.
Mod objects in the client DLL: `0x100418f0` up to the runtime at `0x10048c20`.

## Server

### Spirit functions that reach the mod

| Address | Spirit function | Calls into mod | Strings not in Spirit |
| --- | --- | --- | --- |
| `1000a9e0` | near `dlls/apache.cpp` | 0 | 333333C@ |
| `1000d1d0` | near `dlls/barney.cpp` | 2 | Kitchen_Guard; Mail_Officer; Model not known for name: %s\n … |
| `1000d4a0` | `CBarney::Precache` | 0 | models/security.mdl |
| `10016d30` | near `dlls/buttons.cpp` | 0 | buttons/button1.wav; buttons/button10.wav; buttons/button2.wav … |
| `1001a290` | near `dlls/cbase.cpp` | 1 | ----------------ClientConnect\n |
| `1001a2c0` | `ClientDisconnect` | 1 |  |
| `1001a390` | `respawn` | 1 |  |
| `1001a4c0` | near `dlls/client.cpp` | 2 |  |
| `1001a920` | near `dlls/client.cpp` | 17 | >>> didn't find character\n; >>> efw_Talk %s\n; >>> found character\n … |
| `1001be70` | near `dlls/client.cpp` | 1 | ----------------ServerDeactivate\n |
| `1001bea0` | `ServerActivate` | 2 | ----------------ServerActivate\n |
| `1001bf50` | near `dlls/client.cpp` | 2 |  |
| `1001c030` | `ClientPrecache` | 1 | Footsteps/Guard_Footstep_Generic_1.wav; Footsteps/Guard_Footstep_Generic_2.wav; Footsteps/Guard_Footstep_Generic_3.wav … |
| `100311a0` | near `dlls/effects.cpp` | 0 | Rain use %08x |
| `10031350` | near `dlls/effects.cpp` | 0 | Rain think %08x; RainThink %d %d %d %s\n |
| `10036460` | near `dlls/flyingmonster.cpp` | 0 | random |
| `10066440` | `CHalfLifeMultiplay::ChangeLevel` | 0 | hldm1; ldm1 |
| `10066c00` | near `dlls/nihilanth.cpp` | 0 | _dead; _draw; _ending … |
| `1006da40` | `CTestHull::BuildNodeGraph` | 0 | .nrp; /graphs; /maps … |
| `1006eb10` | `CQueuePriority::Insert` | 0 | Queue is full!\n |
| `1006ec50` | near `dlls/nodes.cpp` | 0 | .nod; /graphs; /maps … |
| `1006f070` | near `dlls/nodes.cpp` | 0 | .nod; /graphs; /maps … |
| `1006f380` | near `dlls/nodes.cpp` | 0 | .bsp; .nod; aps/ … |
| `1007af20` | `LinkUserMessages` | 0 | EFWData; EFWShow; EFW_Cntxt … |
| `1007c580` | near `dlls/player.cpp` | 0 | crouch_aim_; crouch_shoot_; ef_aim_ … |
| `1007db60` | near `dlls/player.cpp` | 3 |  |
| `1007ed20` | `CBasePlayer::Spawn` | 4 |  |
| `1007fbc0` | near `dlls/player.cpp` | 0 | Creating mad_scientist_entity\n; monster_refugee |
| `10084940` | `PM_PlayStepSound` | 0 | Footsteps/Guard_Footstep_Generic_1.wav; Footsteps/Guard_Footstep_Generic_2.wav; Footsteps/Guard_Footstep_Generic_3.wav … |
| `10098c10` | `FireTargets` | 1 |  |
| `1009a900` | near `dlls/talkmonster.cpp` | 0 | LHURT1; LHURT2; LHURT3 … |
| `1009b850` | near `dlls/basemonster.h` | 1 | CTalkMonster: %s\n |
| `100a0220` | `CMultiManager::ManagerThink` | 1 | multi_manager: [%s] -> [%s]\n |
| `100a42c0` | near `dlls/triggers.cpp` | 1 |  |
| `100b10d0` | near `dlls/util.cpp` | 0 | USE_KILL; USE_NOT; USE_OFF … |
| `100b1120` | near `dlls/util.cpp` | 0 | IN USE; OFF; TURN OFF … |
| `100b2f80` | `W_Precache` | 0 | weapon_efw_BluePhoneCard; weapon_efw_Branch; weapon_efw_GreenPhoneCard … |
| `100b6140` | near `dlls/world.cpp` | 1 | day256; evening256 |

### Mod functions

| Address | Name | Bytes | Listing |
| --- | --- | --- | --- |
| `100b8450` | `FUN_100b8450` | 90 | `100b8450_FUN_100b8450.c` |
| `100b84b0` | `FUN_100b84b0` | 10 | `100b84b0_FUN_100b84b0.c` |
| `100b84c0` | `FUN_100b84c0` | 178 | `100b84c0_FUN_100b84c0.c` |
| `100b8580` | `FUN_100b8580` | 12 | `100b8580_FUN_100b8580.c` |
| `100b8590` | `FUN_100b8590` | 273 | `100b8590_FUN_100b8590.c` |
| `100b86b0` | `FUN_100b86b0` | 750 | `100b86b0_FUN_100b86b0.c` |
| `100b89a0` | `FUN_100b89a0` | 345 | `100b89a0_FUN_100b89a0.c` |
| `100b8b00` | `FUN_100b8b00` | 10 | `100b8b00_FUN_100b8b00.c` |
| `100b8b10` | `FUN_100b8b10` | 29 | `100b8b10_FUN_100b8b10.c` |
| `100b8b30` | `FUN_100b8b30` | 12 | `100b8b30_FUN_100b8b30.c` |
| `100b8b40` | `FUN_100b8b40` | 177 | `100b8b40_FUN_100b8b40.c` |
| `100b8c00` | `FUN_100b8c00` | 10 | `100b8c00_FUN_100b8c00.c` |
| `100b8c10` | `FUN_100b8c10` | 178 | `100b8c10_FUN_100b8c10.c` |
| `100b8cd0` | `FUN_100b8cd0` | 12 | `100b8cd0_FUN_100b8cd0.c` |
| `100b8ce0` | `FUN_100b8ce0` | 273 | `100b8ce0_FUN_100b8ce0.c` |
| `100b8e00` | `FUN_100b8e00` | 10 | `100b8e00_FUN_100b8e00.c` |
| `100b8e10` | `FUN_100b8e10` | 178 | `100b8e10_FUN_100b8e10.c` |
| `100b8ed0` | `FUN_100b8ed0` | 12 | `100b8ed0_FUN_100b8ed0.c` |
| `100b8ee0` | `FUN_100b8ee0` | 264 | `100b8ee0_FUN_100b8ee0.c` |
| `100b8ff0` | `FUN_100b8ff0` | 1023 | `100b8ff0_FUN_100b8ff0.c` |
| `100b93f0` | `FUN_100b93f0` | 225 | `100b93f0_FUN_100b93f0.c` |
| `100b94e0` | `FUN_100b94e0` | 178 | `100b94e0_FUN_100b94e0.c` |
| `100b95a0` | `FUN_100b95a0` | 376 | `100b95a0_FUN_100b95a0.c` |
| `100b9720` | `FUN_100b9720` | 67 | `100b9720_FUN_100b9720.c` |
| `100b9770` | `FUN_100b9770` | 536 | `100b9770_FUN_100b9770.c` |
| `100b9990` | `FUN_100b9990` | 831 | `100b9990_FUN_100b9990.c` |
| `100b9cd0` | `FUN_100b9cd0` | 838 | `100b9cd0_FUN_100b9cd0.c` |
| `100ba020` | `FUN_100ba020` | 32 | `100ba020_FUN_100ba020.c` |
| `100ba040` | `FUN_100ba040` | 59 | `100ba040_FUN_100ba040.c` |
| `100ba080` | `FUN_100ba080` | 326 | `100ba080_FUN_100ba080.c` |
| `100ba1d0` | `FUN_100ba1d0` | 24 | `100ba1d0_FUN_100ba1d0.c` |
| `100ba1f0` | `FUN_100ba1f0` | 282 | `100ba1f0_FUN_100ba1f0.c` |
| `100ba310` | `FUN_100ba310` | 189 | `100ba310_FUN_100ba310.c` |
| `100ba3d0` | `FUN_100ba3d0` | 234 | `100ba3d0_FUN_100ba3d0.c` |
| `100ba4c0` | `FUN_100ba4c0` | 134 | `100ba4c0_FUN_100ba4c0.c` |
| `100ba550` | `FUN_100ba550` | 218 | `100ba550_FUN_100ba550.c` |
| `100ba630` | `FUN_100ba630` | 120 | `100ba630_FUN_100ba630.c` |
| `100ba6b0` | `FUN_100ba6b0` | 232 | `100ba6b0_FUN_100ba6b0.c` |
| `100ba7a0` | `FUN_100ba7a0` | 34 | `100ba7a0_FUN_100ba7a0.c` |
| `100ba7d0` | `FUN_100ba7d0` | 4 | `100ba7d0_FUN_100ba7d0.c` |
| `100ba7e0` | `FUN_100ba7e0` | 4 | `100ba7e0_FUN_100ba7e0.c` |
| `100ba7f0` | `FUN_100ba7f0` | 83 | `100ba7f0_FUN_100ba7f0.c` |
| `100ba850` | `FUN_100ba850` | 151 | `100ba850_FUN_100ba850.c` |
| `100ba8f0` | `FUN_100ba8f0` | 109 | `100ba8f0_FUN_100ba8f0.c` |
| `100ba960` | `FUN_100ba960` | 62 | `100ba960_FUN_100ba960.c` |
| `100ba9a0` | `FUN_100ba9a0` | 512 | `100ba9a0_FUN_100ba9a0.c` |
| `100baba0` | `FUN_100baba0` | 95 | `100baba0_FUN_100baba0.c` |
| `100bac00` | `FUN_100bac00` | 112 | `100bac00_FUN_100bac00.c` |
| `100bac70` | `FUN_100bac70` | 118 | `100bac70_FUN_100bac70.c` |
| `100bacf0` | `FUN_100bacf0` | 72 | `100bacf0_FUN_100bacf0.c` |
| `100bad40` | `FUN_100bad40` | 32 | `100bad40_FUN_100bad40.c` |
| `100bad60` | `FUN_100bad60` | 34 | `100bad60_FUN_100bad60.c` |
| `100bad90` | `FUN_100bad90` | 19 | `100bad90_FUN_100bad90.c` |
| `100badb0` | `FUN_100badb0` | 245 | `100badb0_FUN_100badb0.c` |
| `100baeb0` | `FUN_100baeb0` | 14 | `100baeb0_FUN_100baeb0.c` |
| `100baec0` | `FUN_100baec0` | 176 | `100baec0_FUN_100baec0.c` |
| `100baf70` | `FUN_100baf70` | 234 | `100baf70_FUN_100baf70.c` |
| `100bb060` | `FUN_100bb060` | 279 | `100bb060_FUN_100bb060.c` |
| `100bb180` | `FUN_100bb180` | 471 | `100bb180_FUN_100bb180.c` |
| `100bb360` | `FUN_100bb360` | 354 | `100bb360_FUN_100bb360.c` |
| `100bb4d0` | `FUN_100bb4d0` | 204 | `100bb4d0_FUN_100bb4d0.c` |
| `100bb5a0` | `FUN_100bb5a0` | 14 | `100bb5a0_FUN_100bb5a0.c` |
| `100bb5b0` | `FUN_100bb5b0` | 177 | `100bb5b0_FUN_100bb5b0.c` |
| `100bb670` | `FUN_100bb670` | 234 | `100bb670_FUN_100bb670.c` |
| `100bb760` | `FUN_100bb760` | 14 | `100bb760_FUN_100bb760.c` |
| `100bb770` | `FUN_100bb770` | 167 | `100bb770_FUN_100bb770.c` |
| `100bb820` | `FUN_100bb820` | 248 | `100bb820_FUN_100bb820.c` |
| `100bb920` | `FUN_100bb920` | 244 | `100bb920_FUN_100bb920.c` |
| `100bba20` | `FUN_100bba20` | 78 | `100bba20_FUN_100bba20.c` |
| `100bba70` | `FUN_100bba70` | 156 | `100bba70_FUN_100bba70.c` |
| `100bbb10` | `FUN_100bbb10` | 17 | `100bbb10_FUN_100bbb10.c` |
| `100bbb30` | `FUN_100bbb30` | 282 | `100bbb30_FUN_100bbb30.c` |
| `100bbc50` | `FUN_100bbc50` | 8 | `100bbc50_FUN_100bbc50.c` |
| `100bbc60` | `FUN_100bbc60` | 201 | `100bbc60_FUN_100bbc60.c` |
| `100bbd30` | `FUN_100bbd30` | 14 | `100bbd30_FUN_100bbd30.c` |
| `100bbd40` | `FUN_100bbd40` | 1075 | `100bbd40_FUN_100bbd40.c` |
| `100bc180` | `FUN_100bc180` | 153 | `100bc180_FUN_100bc180.c` |
| `100bc220` | `FUN_100bc220` | 574 | `100bc220_FUN_100bc220.c` |
| `100bc460` | `FUN_100bc460` | 1020 | `100bc460_FUN_100bc460.c` |
| `100bc860` | `FUN_100bc860` | 108 | `100bc860_FUN_100bc860.c` |
| `100bc8d0` | `FUN_100bc8d0` | 14 | `100bc8d0_FUN_100bc8d0.c` |
| `100bc8e0` | `FUN_100bc8e0` | 975 | `100bc8e0_FUN_100bc8e0.c` |
| `100bccb0` | `FUN_100bccb0` | 59 | `100bccb0_FUN_100bccb0.c` |
| `100bccf0` | `FUN_100bccf0` | 34 | `100bccf0_FUN_100bccf0.c` |
| `100bcd20` | `FUN_100bcd20` | 6 | `100bcd20_FUN_100bcd20.c` |
| `100bcd30` | `FUN_100bcd30` | 95 | `100bcd30_FUN_100bcd30.c` |
| `100bcd8f` | `Catch@100bcd8f` | 33 | `100bcd8f_Catch_100bcd8f.c` |
| `100bcdb0` | `FUN_100bcdb0` | 6 | `100bcdb0_FUN_100bcdb0.c` |
| `100bcdb6` | `FUN_100bcdb6` | 142 | `100bcdb6_FUN_100bcdb6.c` |
| `100bce50` | `FUN_100bce50` | 619 | `100bce50_FUN_100bce50.c` |
| `100bd0c0` | `FUN_100bd0c0` | 142 | `100bd0c0_FUN_100bd0c0.c` |
| `100bd150` | `FUN_100bd150` | 33 | `100bd150_FUN_100bd150.c` |
| `100bd180` | `FUN_100bd180` | 247 | `100bd180_FUN_100bd180.c` |
| `100bd280` | `FUN_100bd280` | 98 | `100bd280_FUN_100bd280.c` |
| `100bd2f0` | `FUN_100bd2f0` | 85 | `100bd2f0_FUN_100bd2f0.c` |
| `100bd350` | `FUN_100bd350` | 222 | `100bd350_FUN_100bd350.c` |
| `100bd430` | `FUN_100bd430` | 34 | `100bd430_FUN_100bd430.c` |
| `100bd460` | `FUN_100bd460` | 613 | `100bd460_FUN_100bd460.c` |
| `100bd6d0` | `FUN_100bd6d0` | 82 | `100bd6d0_FUN_100bd6d0.c` |
| `100bd730` | `FUN_100bd730` | 86 | `100bd730_FUN_100bd730.c` |
| `100bd790` | `FUN_100bd790` | 27 | `100bd790_FUN_100bd790.c` |
| `100bd7b0` | `FUN_100bd7b0` | 613 | `100bd7b0_FUN_100bd7b0.c` |
| `100bda20` | `FUN_100bda20` | 3 | `100bda20_FUN_100bda20.c` |
| `100bda30` | `FUN_100bda30` | 81 | `100bda30_FUN_100bda30.c` |
| `100bda90` | `FUN_100bda90` | 67 | `100bda90_FUN_100bda90.c` |
| `100bdae0` | `FUN_100bdae0` | 81 | `100bdae0_FUN_100bdae0.c` |
| `100bdb40` | `FUN_100bdb40` | 67 | `100bdb40_FUN_100bdb40.c` |
| `100bdb90` | `FUN_100bdb90` | 81 | `100bdb90_FUN_100bdb90.c` |
| `100bdbf0` | `FUN_100bdbf0` | 67 | `100bdbf0_FUN_100bdbf0.c` |
| `100bdc40` | `FUN_100bdc40` | 63 | `100bdc40_FUN_100bdc40.c` |
| `100bdc80` | `FUN_100bdc80` | 74 | `100bdc80_FUN_100bdc80.c` |
| `100bdcd0` | `FUN_100bdcd0` | 377 | `100bdcd0_FUN_100bdcd0.c` |
| `100bde50` | `FUN_100bde50` | 390 | `100bde50_FUN_100bde50.c` |
| `100bdfe0` | `FUN_100bdfe0` | 254 | `100bdfe0_FUN_100bdfe0.c` |
| `100be0e0` | `FUN_100be0e0` | 65 | `100be0e0_FUN_100be0e0.c` |
| `100be130` | `FUN_100be130` | 299 | `100be130_FUN_100be130.c` |
| `100be260` | `FUN_100be260` | 23 | `100be260_FUN_100be260.c` |
| `100be280` | `FUN_100be280` | 120 | `100be280_FUN_100be280.c` |
| `100be300` | `FUN_100be300` | 83 | `100be300_FUN_100be300.c` |
| `100be360` | `FUN_100be360` | 80 | `100be360_FUN_100be360.c` |
| `100be3b0` | `FUN_100be3b0` | 105 | `100be3b0_FUN_100be3b0.c` |
| `100be420` | `FUN_100be420` | 184 | `100be420_FUN_100be420.c` |
| `100be4e0` | `FUN_100be4e0` | 412 | `100be4e0_FUN_100be4e0.c` |
| `100be680` | `FUN_100be680` | 19 | `100be680_FUN_100be680.c` |
| `100be6a0` | `FUN_100be6a0` | 3 | `100be6a0_FUN_100be6a0.c` |
| `100be6b0` | `FUN_100be6b0` | 521 | `100be6b0_FUN_100be6b0.c` |
| `100be8c0` | `FUN_100be8c0` | 46 | `100be8c0_FUN_100be8c0.c` |
| `100be8f0` | `FUN_100be8f0` | 37 | `100be8f0_FUN_100be8f0.c` |
| `100be920` | `FUN_100be920` | 17 | `100be920_FUN_100be920.c` |
| `100be940` | `FUN_100be940` | 37 | `100be940_FUN_100be940.c` |
| `100be970` | `FUN_100be970` | 3713 | `100be970_FUN_100be970.c` |
| `100bf7f1` | `FUN_100bf7f1` | 3 | `100bf7f1_FUN_100bf7f1.c` |
| `100bf880` | `FUN_100bf880` | 32 | `100bf880_FUN_100bf880.c` |
| `100bf8a0` | `FUN_100bf8a0` | 32 | `100bf8a0_FUN_100bf8a0.c` |
| `100bf8c0` | `FUN_100bf8c0` | 26 | `100bf8c0_FUN_100bf8c0.c` |
| `100bf8e0` | `FUN_100bf8e0` | 89 | `100bf8e0_FUN_100bf8e0.c` |
| `100bf940` | `FUN_100bf940` | 26 | `100bf940_FUN_100bf940.c` |
| `100bf960` | `FUN_100bf960` | 89 | `100bf960_FUN_100bf960.c` |
| `100bf9c0` | `FUN_100bf9c0` | 17 | `100bf9c0_FUN_100bf9c0.c` |
| `100bf9e0` | `FUN_100bf9e0` | 32 | `100bf9e0_FUN_100bf9e0.c` |
| `100bfa00` | `FUN_100bfa00` | 168 | `100bfa00_FUN_100bfa00.c` |
| `100bfab0` | `FUN_100bfab0` | 32 | `100bfab0_FUN_100bfab0.c` |
| `100bfad0` | `FUN_100bfad0` | 280 | `100bfad0_FUN_100bfad0.c` |
| `100bfbf0` | `FUN_100bfbf0` | 356 | `100bfbf0_FUN_100bfbf0.c` |
| `100bfd60` | `FUN_100bfd60` | 89 | `100bfd60_FUN_100bfd60.c` |
| `100bfdc0` | `FUN_100bfdc0` | 9 | `100bfdc0_FUN_100bfdc0.c` |
| `100bfdd0` | `FUN_100bfdd0` | 168 | `100bfdd0_FUN_100bfdd0.c` |
| `100bfe80` | `FUN_100bfe80` | 32 | `100bfe80_FUN_100bfe80.c` |
| `100bfea0` | `FUN_100bfea0` | 24 | `100bfea0_FUN_100bfea0.c` |
| `100bfec0` | `FUN_100bfec0` | 89 | `100bfec0_FUN_100bfec0.c` |
| `100bff20` | `FUN_100bff20` | 17 | `100bff20_FUN_100bff20.c` |
| `100bff40` | `FUN_100bff40` | 21 | `100bff40_FUN_100bff40.c` |
| `100bff60` | `FUN_100bff60` | 51 | `100bff60_FUN_100bff60.c` |
| `100bffa0` | `FUN_100bffa0` | 32 | `100bffa0_FUN_100bffa0.c` |
| `100bffc0` | `FUN_100bffc0` | 32 | `100bffc0_FUN_100bffc0.c` |
| `100bffe0` | `FUN_100bffe0` | 224 | `100bffe0_FUN_100bffe0.c` |
| `100c00c0` | `FUN_100c00c0` | 150 | `100c00c0_FUN_100c00c0.c` |
| `100c0160` | `FUN_100c0160` | 155 | `100c0160_FUN_100c0160.c` |
| `100c0200` | `FUN_100c0200` | 490 | `100c0200_FUN_100c0200.c` |
| `100c03f0` | `FUN_100c03f0` | 19 | `100c03f0_FUN_100c03f0.c` |
| `100c0410` | `FUN_100c0410` | 155 | `100c0410_FUN_100c0410.c` |
| `100c04b0` | `FUN_100c04b0` | 490 | `100c04b0_FUN_100c04b0.c` |
| `100c06a0` | `FUN_100c06a0` | 155 | `100c06a0_FUN_100c06a0.c` |
| `100c0740` | `FUN_100c0740` | 490 | `100c0740_FUN_100c0740.c` |
| `100c0930` | `FUN_100c0930` | 155 | `100c0930_FUN_100c0930.c` |
| `100c09d0` | `FUN_100c09d0` | 490 | `100c09d0_FUN_100c09d0.c` |
| `100c0bc0` | `FUN_100c0bc0` | 19 | `100c0bc0_FUN_100c0bc0.c` |
| `100c0be0` | `FUN_100c0be0` | 155 | `100c0be0_FUN_100c0be0.c` |
| `100c0c80` | `FUN_100c0c80` | 490 | `100c0c80_FUN_100c0c80.c` |
| `100c0e70` | `FUN_100c0e70` | 19 | `100c0e70_FUN_100c0e70.c` |
| `100c0e90` | `FUN_100c0e90` | 412 | `100c0e90_FUN_100c0e90.c` |
| `100c1030` | `FUN_100c1030` | 3 | `100c1030_FUN_100c1030.c` |
| `100c1040` | `FUN_100c1040` | 46 | `100c1040_FUN_100c1040.c` |
| `100c1070` | `FUN_100c1070` | 412 | `100c1070_FUN_100c1070.c` |
| `100c1210` | `FUN_100c1210` | 3 | `100c1210_FUN_100c1210.c` |
| `100c1220` | `FUN_100c1220` | 46 | `100c1220_FUN_100c1220.c` |
| `100c1250` | `FUN_100c1250` | 412 | `100c1250_FUN_100c1250.c` |
| `100c13f0` | `FUN_100c13f0` | 46 | `100c13f0_FUN_100c13f0.c` |
| `100c1420` | `FUN_100c1420` | 412 | `100c1420_FUN_100c1420.c` |
| `100c15c0` | `FUN_100c15c0` | 3 | `100c15c0_FUN_100c15c0.c` |
| `100c15d0` | `FUN_100c15d0` | 46 | `100c15d0_FUN_100c15d0.c` |
| `100c1600` | `FUN_100c1600` | 37 | `100c1600_FUN_100c1600.c` |
| `100c1630` | `FUN_100c1630` | 37 | `100c1630_FUN_100c1630.c` |
| `100c1660` | `FUN_100c1660` | 37 | `100c1660_FUN_100c1660.c` |
| `100c1690` | `FUN_100c1690` | 37 | `100c1690_FUN_100c1690.c` |
| `100c16c0` | `FUN_100c16c0` | 38 | `100c16c0_FUN_100c16c0.c` |
| `100c16f0` | `FUN_100c16f0` | 38 | `100c16f0_FUN_100c16f0.c` |
| `100c1720` | `FUN_100c1720` | 38 | `100c1720_FUN_100c1720.c` |
| `100c1750` | `FUN_100c1750` | 38 | `100c1750_FUN_100c1750.c` |
| `100c1780` | `FUN_100c1780` | 38 | `100c1780_FUN_100c1780.c` |
| `100c17b0` | `FUN_100c17b0` | 17 | `100c17b0_FUN_100c17b0.c` |
| `100c17d0` | `FUN_100c17d0` | 17 | `100c17d0_FUN_100c17d0.c` |
| `100c17f0` | `FUN_100c17f0` | 17 | `100c17f0_FUN_100c17f0.c` |
| `100c1810` | `FUN_100c1810` | 17 | `100c1810_FUN_100c1810.c` |
| `100c1830` | `FUN_100c1830` | 37 | `100c1830_FUN_100c1830.c` |
| `100c1860` | `FUN_100c1860` | 1279 | `100c1860_FUN_100c1860.c` |
| `100c1dc0` | `FUN_100c1dc0` | 74 | `100c1dc0_FUN_100c1dc0.c` |
| `100c1e10` | `FUN_100c1e10` | 30 | `100c1e10_FUN_100c1e10.c` |
| `100c1e30` | `FUN_100c1e30` | 40 | `100c1e30_FUN_100c1e30.c` |
| `100c1e60` | `FUN_100c1e60` | 32 | `100c1e60_FUN_100c1e60.c` |
| `100c1e80` | `FUN_100c1e80` | 60 | `100c1e80_FUN_100c1e80.c` |
| `100c1ec0` | `FUN_100c1ec0` | 63 | `100c1ec0_FUN_100c1ec0.c` |
| `100c1f00` | `FUN_100c1f00` | 21 | `100c1f00_FUN_100c1f00.c` |
| `100c1f20` | `FUN_100c1f20` | 370 | `100c1f20_FUN_100c1f20.c` |
| `100c20a0` | `FUN_100c20a0` | 207 | `100c20a0_FUN_100c20a0.c` |
| `100c2170` | `FUN_100c2170` | 169 | `100c2170_FUN_100c2170.c` |
| `100c2220` | `FUN_100c2220` | 130 | `100c2220_FUN_100c2220.c` |
| `100c22b0` | `FUN_100c22b0` | 169 | `100c22b0_FUN_100c22b0.c` |
| `100c2360` | `FUN_100c2360` | 56 | `100c2360_FUN_100c2360.c` |
| `100c23a0` | `FUN_100c23a0` | 65 | `100c23a0_FUN_100c23a0.c` |
| `100c23f0` | `FUN_100c23f0` | 29 | `100c23f0_FUN_100c23f0.c` |
| `100c2410` | `FUN_100c2410` | 97 | `100c2410_FUN_100c2410.c` |
| `100c2480` | `FUN_100c2480` | 53 | `100c2480_FUN_100c2480.c` |
| `100c24c0` | `FUN_100c24c0` | 35 | `100c24c0_FUN_100c24c0.c` |
| `100c24f0` | `FUN_100c24f0` | 53 | `100c24f0_FUN_100c24f0.c` |
| `100c2530` | `FUN_100c2530` | 32 | `100c2530_FUN_100c2530.c` |
| `100c2550` | `FUN_100c2550` | 14 | `100c2550_FUN_100c2550.c` |
| `100c2560` | `FUN_100c2560` | 19 | `100c2560_FUN_100c2560.c` |
| `100c2580` | `FUN_100c2580` | 12 | `100c2580_FUN_100c2580.c` |
| `100c2590` | `FUN_100c2590` | 10 | `100c2590_FUN_100c2590.c` |
| `100c25a0` | `FUN_100c25a0` | 29 | `100c25a0_FUN_100c25a0.c` |
| `100c25c0` | `FUN_100c25c0` | 12 | `100c25c0_FUN_100c25c0.c` |
| `100c25d0` | `FUN_100c25d0` | 69 | `100c25d0_FUN_100c25d0.c` |
| `100c2620` | `FUN_100c2620` | 25 | `100c2620_FUN_100c2620.c` |
| `100c2640` | `FUN_100c2640` | 23 | `100c2640_FUN_100c2640.c` |
| `100c2660` | `FUN_100c2660` | 332 | `100c2660_FUN_100c2660.c` |
| `100c27b0` | `FUN_100c27b0` | 6 | `100c27b0_FUN_100c27b0.c` |
| `100c27c0` | `FUN_100c27c0` | 37 | `100c27c0_FUN_100c27c0.c` |
| `100c27f0` | `FUN_100c27f0` | 238 | `100c27f0_FUN_100c27f0.c` |
| `100c28e0` | `FUN_100c28e0` | 37 | `100c28e0_FUN_100c28e0.c` |
| `100c2910` | `FUN_100c2910` | 6 | `100c2910_FUN_100c2910.c` |
| `100c2920` | `FUN_100c2920` | 6 | `100c2920_FUN_100c2920.c` |
| `100c2930` | `FUN_100c2930` | 6 | `100c2930_FUN_100c2930.c` |
| `100c2940` | `FUN_100c2940` | 6 | `100c2940_FUN_100c2940.c` |
| `100c2950` | `FUN_100c2950` | 6 | `100c2950_FUN_100c2950.c` |
| `100c2960` | `FUN_100c2960` | 105 | `100c2960_FUN_100c2960.c` |
| `100c29d0` | `FUN_100c29d0` | 6 | `100c29d0_FUN_100c29d0.c` |
| `100c29e0` | `FUN_100c29e0` | 15 | `100c29e0_FUN_100c29e0.c` |
| `100c29f0` | `FUN_100c29f0` | 48 | `100c29f0_FUN_100c29f0.c` |
| `100c2a20` | `FUN_100c2a20` | 457 | `100c2a20_FUN_100c2a20.c` |
| `100c2bf0` | `FUN_100c2bf0` | 11 | `100c2bf0_FUN_100c2bf0.c` |
| `100c2c00` | `FUN_100c2c00` | 47 | `100c2c00_FUN_100c2c00.c` |
| `100c2c30` | `FUN_100c2c30` | 390 | `100c2c30_FUN_100c2c30.c` |
| `100c2dc0` | `FUN_100c2dc0` | 91 | `100c2dc0_FUN_100c2dc0.c` |
| `100c2e20` | `FUN_100c2e20` | 102 | `100c2e20_FUN_100c2e20.c` |
| `100c2e90` | `FUN_100c2e90` | 34 | `100c2e90_FUN_100c2e90.c` |
| `100c2ec0` | `FUN_100c2ec0` | 24 | `100c2ec0_FUN_100c2ec0.c` |
| `100c2ee0` | `FUN_100c2ee0` | 133 | `100c2ee0_FUN_100c2ee0.c` |
| `100c2f70` | `FUN_100c2f70` | 163 | `100c2f70_FUN_100c2f70.c` |
| `100c3020` | `FUN_100c3020` | 80 | `100c3020_FUN_100c3020.c` |
| `100c3070` | `FUN_100c3070` | 37 | `100c3070_FUN_100c3070.c` |
| `100c30a0` | `FUN_100c30a0` | 123 | `100c30a0_FUN_100c30a0.c` |
| `100c3120` | `efw_Marker` | 79 | `100c3120_efw_Marker.c` |
| `100c3170` | `FUN_100c3170` | 10 | `100c3170_FUN_100c3170.c` |
| `100c3180` | `FUN_100c3180` | 178 | `100c3180_FUN_100c3180.c` |
| `100c3240` | `FUN_100c3240` | 12 | `100c3240_FUN_100c3240.c` |
| `100c3250` | `FUN_100c3250` | 273 | `100c3250_FUN_100c3250.c` |
| `100c3370` | `FUN_100c3370` | 188 | `100c3370_FUN_100c3370.c` |
| `100c3430` | `FUN_100c3430` | 205 | `100c3430_FUN_100c3430.c` |
| `100c3500` | `FUN_100c3500` | 215 | `100c3500_FUN_100c3500.c` |
| `100c35e0` | `FUN_100c35e0` | 116 | `100c35e0_FUN_100c35e0.c` |
| `100c3660` | `FUN_100c3660` | 62 | `100c3660_FUN_100c3660.c` |
| `100c36a0` | `FUN_100c36a0` | 14 | `100c36a0_FUN_100c36a0.c` |
| `100c36b0` | `FUN_100c36b0` | 67 | `100c36b0_FUN_100c36b0.c` |
| `100c3700` | `FUN_100c3700` | 607 | `100c3700_FUN_100c3700.c` |
| `100c3960` | `FUN_100c3960` | 1020 | `100c3960_FUN_100c3960.c` |
| `100c3d60` | `FUN_100c3d60` | 108 | `100c3d60_FUN_100c3d60.c` |
| `100c3dd0` | `FUN_100c3dd0` | 25 | `100c3dd0_FUN_100c3dd0.c` |
| `100c3df0` | `FUN_100c3df0` | 22 | `100c3df0_FUN_100c3df0.c` |
| `100c3e10` | `FUN_100c3e10` | 619 | `100c3e10_FUN_100c3e10.c` |
| `100c4080` | `FUN_100c4080` | 82 | `100c4080_FUN_100c4080.c` |
| `100c40e0` | `FUN_100c40e0` | 86 | `100c40e0_FUN_100c40e0.c` |
| `100c4140` | `FUN_100c4140` | 27 | `100c4140_FUN_100c4140.c` |
| `100c4160` | `FUN_100c4160` | 81 | `100c4160_FUN_100c4160.c` |
| `100c41c0` | `FUN_100c41c0` | 305 | `100c41c0_FUN_100c41c0.c` |
| `100c4300` | `FUN_100c4300` | 83 | `100c4300_FUN_100c4300.c` |
| `100c4360` | `FUN_100c4360` | 37 | `100c4360_FUN_100c4360.c` |
| `100c4390` | `FUN_100c4390` | 12 | `100c4390_FUN_100c4390.c` |
| `100c43a0` | `FUN_100c43a0` | 12 | `100c43a0_FUN_100c43a0.c` |
| `100c43b0` | `FUN_100c43b0` | 56 | `100c43b0_FUN_100c43b0.c` |
| `100c43f0` | `FUN_100c43f0` | 41 | `100c43f0_FUN_100c43f0.c` |
| `100c4420` | `FUN_100c4420` | 276 | `100c4420_FUN_100c4420.c` |
| `100c4540` | `FUN_100c4540` | 1 | `100c4540_FUN_100c4540.c` |
| `100c4550` | `FUN_100c4550` | 38 | `100c4550_FUN_100c4550.c` |
| `100c4580` | `FUN_100c4580` | 44 | `100c4580_FUN_100c4580.c` |
| `100c45b0` | `FUN_100c45b0` | 76 | `100c45b0_FUN_100c45b0.c` |
| `100c4600` | `FUN_100c4600` | 47 | `100c4600_FUN_100c4600.c` |
| `100c4630` | `FUN_100c4630` | 6 | `100c4630_FUN_100c4630.c` |
| `100c4640` | `FUN_100c4640` | 17 | `100c4640_FUN_100c4640.c` |
| `100c4660` | `FUN_100c4660` | 29 | `100c4660_FUN_100c4660.c` |
| `100c4680` | `FUN_100c4680` | 5 | `100c4680_FUN_100c4680.c` |
| `100c4690` | `FUN_100c4690` | 13 | `100c4690_FUN_100c4690.c` |
| `100c46a0` | `FUN_100c46a0` | 85 | `100c46a0_FUN_100c46a0.c` |
| `100c4700` | `weapon_efw_Pliers` | 106 | `100c4700_weapon_efw_Pliers.c` |
| `100c4770` | `weapon_efw_Lever` | 106 | `100c4770_weapon_efw_Lever.c` |
| `100c47e0` | `weapon_efw_Branch` | 106 | `100c47e0_weapon_efw_Branch.c` |
| `100c4850` | `weapon_efw_MobilePhone` | 106 | `100c4850_weapon_efw_MobilePhone.c` |
| `100c48c0` | `weapon_efw_IDTag` | 106 | `100c48c0_weapon_efw_IDTag.c` |
| `100c4930` | `weapon_efw_RedPhoneCard` | 106 | `100c4930_weapon_efw_RedPhoneCard.c` |
| `100c49a0` | `weapon_efw_GreenPhoneCard` | 106 | `100c49a0_weapon_efw_GreenPhoneCard.c` |
| `100c4a10` | `weapon_efw_BluePhoneCard` | 106 | `100c4a10_weapon_efw_BluePhoneCard.c` |
| `100c4a80` | `weapon_efw_WashingPowder` | 106 | `100c4a80_weapon_efw_WashingPowder.c` |
| `100c4af0` | `FUN_100c4af0` | 540 | `100c4af0_FUN_100c4af0.c` |
| `100c4d10` | `FUN_100c4d10` | 86 | `100c4d10_FUN_100c4d10.c` |
| `100c4d70` | `FUN_100c4d70` | 86 | `100c4d70_FUN_100c4d70.c` |
| `100c4dd0` | `FUN_100c4dd0` | 3 | `100c4dd0_FUN_100c4dd0.c` |
| `100c4de0` | `FUN_100c4de0` | 37 | `100c4de0_FUN_100c4de0.c` |
| `100c4e10` | `FUN_100c4e10` | 6 | `100c4e10_FUN_100c4e10.c` |
| `100c4e20` | `FUN_100c4e20` | 15 | `100c4e20_FUN_100c4e20.c` |
| `100c4e30` | `FUN_100c4e30` | 251 | `100c4e30_FUN_100c4e30.c` |
| `100c4f30` | `FUN_100c4f30` | 92 | `100c4f30_FUN_100c4f30.c` |
| `100c4f90` | `FUN_100c4f90` | 294 | `100c4f90_FUN_100c4f90.c` |
| `100c50c0` | `FUN_100c50c0` | 6 | `100c50c0_FUN_100c50c0.c` |
| `100c50d0` | `FUN_100c50d0` | 154 | `100c50d0_FUN_100c50d0.c` |
| `100c5170` | `FUN_100c5170` | 6 | `100c5170_FUN_100c5170.c` |
| `100c5180` | `FUN_100c5180` | 155 | `100c5180_FUN_100c5180.c` |
| `100c5220` | `FUN_100c5220` | 15 | `100c5220_FUN_100c5220.c` |
| `100c5230` | `FUN_100c5230` | 6 | `100c5230_FUN_100c5230.c` |
| `100c5240` | `FUN_100c5240` | 167 | `100c5240_FUN_100c5240.c` |
| `100c52f0` | `FUN_100c52f0` | 6 | `100c52f0_FUN_100c52f0.c` |
| `100c5300` | `FUN_100c5300` | 6 | `100c5300_FUN_100c5300.c` |
| `100c5310` | `FUN_100c5310` | 6 | `100c5310_FUN_100c5310.c` |
| `100c5320` | `FUN_100c5320` | 6 | `100c5320_FUN_100c5320.c` |
| `100c5330` | `FUN_100c5330` | 131 | `100c5330_FUN_100c5330.c` |
| `100c53c0` | `monster_patrol_guard` | 91 | `100c53c0_monster_patrol_guard.c` |
| `100c5420` | `FUN_100c5420` | 34 | `100c5420_FUN_100c5420.c` |
| `100c5450` | `FUN_100c5450` | 18 | `100c5450_FUN_100c5450.c` |
| `100c5470` | `FUN_100c5470` | 6 | `100c5470_FUN_100c5470.c` |
| `100c5480` | `FUN_100c5480` | 82 | `100c5480_FUN_100c5480.c` |
| `100c54e0` | `FUN_100c54e0` | 1172 | `100c54e0_FUN_100c54e0.c` |
| `100c5990` | `FUN_100c5990` | 37 | `100c5990_FUN_100c5990.c` |
| `100c59c0` | `FUN_100c59c0` | 410 | `100c59c0_FUN_100c59c0.c` |
| `100c5b60` | `FUN_100c5b60` | 8 | `100c5b60_FUN_100c5b60.c` |
| `100c5b70` | `FUN_100c5b70` | 7 | `100c5b70_FUN_100c5b70.c` |
| `100c5b80` | `FUN_100c5b80` | 161 | `100c5b80_FUN_100c5b80.c` |
| `100c5c30` | `FUN_100c5c30` | 31 | `100c5c30_FUN_100c5c30.c` |
| `100c5c50` | `FUN_100c5c50` | 477 | `100c5c50_FUN_100c5c50.c` |
| `100c5e30` | `FUN_100c5e30` | 29 | `100c5e30_FUN_100c5e30.c` |
| `100c5e50` | `FUN_100c5e50` | 70 | `100c5e50_FUN_100c5e50.c` |
| `100c5ea0` | `monster_refugee` | 91 | `100c5ea0_monster_refugee.c` |
| `100c5f00` | `FUN_100c5f00` | 6 | `100c5f00_FUN_100c5f00.c` |
| `100c5f10` | `monster_efw_guard` | 91 | `100c5f10_monster_efw_guard.c` |
| `100c5f70` | `FUN_100c5f70` | 10 | `100c5f70_FUN_100c5f70.c` |
| `100c5f80` | `FUN_100c5f80` | 10 | `100c5f80_FUN_100c5f80.c` |
| `100c5f90` | `FUN_100c5f90` | 12 | `100c5f90_FUN_100c5f90.c` |
| `100c5fa0` | `FUN_100c5fa0` | 10 | `100c5fa0_FUN_100c5fa0.c` |
| `100c5fb0` | `FUN_100c5fb0` | 68 | `100c5fb0_FUN_100c5fb0.c` |
| `100c6000` | `FUN_100c6000` | 51 | `100c6000_FUN_100c6000.c` |
| `100c6040` | `FUN_100c6040` | 689 | `100c6040_FUN_100c6040.c` |
| `100c6300` | `FUN_100c6300` | 1 | `100c6300_FUN_100c6300.c` |
| `100c6310` | `FUN_100c6310` | 6 | `100c6310_FUN_100c6310.c` |
| `100c6320` | `FUN_100c6320` | 162 | `100c6320_FUN_100c6320.c` |
| `100c63d0` | `FUN_100c63d0` | 73 | `100c63d0_FUN_100c63d0.c` |
| `100c6420` | `FUN_100c6420` | 21 | `100c6420_FUN_100c6420.c` |
| `100c6440` | `CRefugee::IdleThink` | 585 | `100c6440_IdleThink.c` |
| `100c6690` | `FUN_100c6690` | 37 | `100c6690_FUN_100c6690.c` |
| `100c66c0` | `FUN_100c66c0` | 10 | `100c66c0_FUN_100c66c0.c` |
| `100c66d0` | `FUN_100c66d0` | 38 | `100c66d0_FUN_100c66d0.c` |
| `100c6700` | `FUN_100c6700` | 12 | `100c6700_FUN_100c6700.c` |
| `100c6710` | `FUN_100c6710` | 38 | `100c6710_FUN_100c6710.c` |
| `100c6740` | `FUN_100c6740` | 60 | `100c6740_FUN_100c6740.c` |
| `100c6780` | `FUN_100c6780` | 254 | `100c6780_FUN_100c6780.c` |
| `100c6880` | `FUN_100c6880` | 6 | `100c6880_FUN_100c6880.c` |
| `100c6890` | `FUN_100c6890` | 127 | `100c6890_FUN_100c6890.c` |
| `100c6910` | `FUN_100c6910` | 12 | `100c6910_FUN_100c6910.c` |
| `100c6920` | `FUN_100c6920` | 45 | `100c6920_FUN_100c6920.c` |
| `100c6950` | `FUN_100c6950` | 17 | `100c6950_FUN_100c6950.c` |
| `100c6970` | `FUN_100c6970` | 10 | `100c6970_FUN_100c6970.c` |
| `100c6980` | `FUN_100c6980` | 6 | `100c6980_FUN_100c6980.c` |
| `100c6990` | `FUN_100c6990` | 14 | `100c6990_FUN_100c6990.c` |
| `100c69a0` | `FUN_100c69a0` | 162 | `100c69a0_FUN_100c69a0.c` |
| `100c6a50` | `FUN_100c6a50` | 15 | `100c6a50_FUN_100c6a50.c` |
| `100c6a60` | `FUN_100c6a60` | 15 | `100c6a60_FUN_100c6a60.c` |
| `100c6a70` | `FUN_100c6a70` | 81 | `100c6a70_FUN_100c6a70.c` |
| `100c6ad0` | `FUN_100c6ad0` | 141 | `100c6ad0_FUN_100c6ad0.c` |
| `100c6b60` | `FUN_100c6b60` | 161 | `100c6b60_FUN_100c6b60.c` |
| `100c6c10` | `FUN_100c6c10` | 349 | `100c6c10_FUN_100c6c10.c` |
| `100c6d70` | `FUN_100c6d70` | 95 | `100c6d70_FUN_100c6d70.c` |
| `100c6dd0` | `FUN_100c6dd0` | 63 | `100c6dd0_FUN_100c6dd0.c` |
| `100c6e10` | `FUN_100c6e10` | 11 | `100c6e10_FUN_100c6e10.c` |
| `100c6e20` | `FUN_100c6e20` | 53 | `100c6e20_FUN_100c6e20.c` |
| `100c6e60` | `FUN_100c6e60` | 1311 | `100c6e60_FUN_100c6e60.c` |
| `100c7380` | `FUN_100c7380` | 153 | `100c7380_FUN_100c7380.c` |
| `100c7420` | `FUN_100c7420` | 6 | `100c7420_FUN_100c7420.c` |
| `100c7430` | `FUN_100c7430` | 30 | `100c7430_FUN_100c7430.c` |
| `100c7450` | `FUN_100c7450` | 6 | `100c7450_FUN_100c7450.c` |
| `100c7460` | `FUN_100c7460` | 33 | `100c7460_FUN_100c7460.c` |
| `100c7490` | `FUN_100c7490` | 6 | `100c7490_FUN_100c7490.c` |
| `100c74a0` | `FUN_100c74a0` | 99 | `100c74a0_FUN_100c74a0.c` |
| `100c7510` | `FUN_100c7510` | 80 | `100c7510_FUN_100c7510.c` |
| `100c7560` | `FUN_100c7560` | 37 | `100c7560_FUN_100c7560.c` |
| `100c7590` | `FUN_100c7590` | 27 | `100c7590_FUN_100c7590.c` |
| `100c75b0` | `FUN_100c75b0` | 1 | `100c75b0_FUN_100c75b0.c` |
| `100c75c0` | `FUN_100c75c0` | 17 | `100c75c0_FUN_100c75c0.c` |
| `100c75e0` | `FUN_100c75e0` | 144 | `100c75e0_FUN_100c75e0.c` |
| `100c7670` | `FUN_100c7670` | 129 | `100c7670_FUN_100c7670.c` |
| `100c7700` | `FUN_100c7700` | 49 | `100c7700_FUN_100c7700.c` |
| `100c7740` | `FUN_100c7740` | 127 | `100c7740_FUN_100c7740.c` |
| `100c77c0` | `FUN_100c77c0` | 21 | `100c77c0_FUN_100c77c0.c` |
| `100c77e0` | `FUN_100c77e0` | 5 | `100c77e0_FUN_100c77e0.c` |
| `100c77f0` | `thunk_FUN_100c7800` | 5 | `100c77f0_thunk_FUN_100c7800.c` |
| `100c7800` | `FUN_100c7800` | 1 | `100c7800_FUN_100c7800.c` |
| `100c7810` | `FUN_100c7810` | 11 | `100c7810_FUN_100c7810.c` |
| `100c7820` | `FUN_100c7820` | 14 | `100c7820_FUN_100c7820.c` |
| `100c7830` | `FUN_100c7830` | 1277 | `100c7830_FUN_100c7830.c` |
| `100c7d30` | `FUN_100c7d30` | 107 | `100c7d30_FUN_100c7d30.c` |
| `100c7da0` | `FUN_100c7da0` | 767 | `100c7da0_FUN_100c7da0.c` |
| `100c80a0` | `FUN_100c80a0` | 37 | `100c80a0_FUN_100c80a0.c` |
| `100c80d0` | `FUN_100c80d0` | 57 | `100c80d0_FUN_100c80d0.c` |
| `100c8110` | `FUN_100c8110` | 77 | `100c8110_FUN_100c8110.c` |
| `100c8160` | `FUN_100c8160` | 25 | `100c8160_FUN_100c8160.c` |
| `100c8180` | `FUN_100c8180` | 16 | `100c8180_FUN_100c8180.c` |
| `100c8190` | `FUN_100c8190` | 12 | `100c8190_FUN_100c8190.c` |
| `100c81a0` | `FUN_100c81a0` | 16 | `100c81a0_FUN_100c81a0.c` |
| `100c81b0` | `FUN_100c81b0` | 12 | `100c81b0_FUN_100c81b0.c` |
| `100c81c0` | `FUN_100c81c0` | 1 | `100c81c0_FUN_100c81c0.c` |
| `100c81d0` | `FUN_100c81d0` | 199 | `100c81d0_FUN_100c81d0.c` |

## Client

### Spirit functions that reach the mod

| Address | Spirit function | Calls into mod | Strings not in Spirit |
| --- | --- | --- | --- |
| `10001220` | near `dlls/crossbow.cpp` | 1 |  |
| `100013e0` | near `dlls/crossbow.cpp` | 1 |  |
| `10002010` | near `dlls/crowbar.cpp` | 1 |  |
| `10002e60` | `EV_HLDM_DamageDecal` | 0 | {bproof1 |
| `10002ee0` | near `cl_dll/ev_hldm.cpp` | 0 | weapons/ric1.wav; weapons/ric2.wav; weapons/ric3.wav … |
| `10006a40` | near `cl_dll/ev_hldm.cpp` | 0 | agrunt/ag_fire1.wav; agrunt/ag_fire2.wav; agrunt/ag_fire3.wav |
| `10006e50` | near `cl_dll/ev_hldm.cpp` | 0 | lats/ttrain7.wav; plats/ttrain1.wav; plats/ttrain2.wav … |
| `10008280` | near `dlls/gauss.cpp` | 1 |  |
| `10008a50` | near `dlls/handgrenade.cpp` | 1 |  |
| `10009830` | near `dlls/weapons.h` | 1 | models/p_Pliers.mdl; models/v_Pliers.mdl; models/w_Pliers.mdl |
| `100098e0` | near `dlls/weapons.h` | 1 |  |
| `100098f0` | near `dlls/weapons.h` | 3 | Amir; Are you crazy? Whatever you do, don't try to leave; Fashid … |
| `100099e0` | near `dlls/weapons.h` | 2 | ELECTRICIAN; PLIERS; PLIERS_GOT_PLIERS |
| `10009a40` | near `dlls/weapons.h` | 4 | Dammit! Electrician saw you, can't put pliers in b; Oi! Put that back!; PLIERS_GOT_PLIERS … |
| `10009b50` | near `dlls/weapons.h` | 1 | models/p_Lever.mdl; models/v_Lever.mdl; models/w_Lever.mdl |
| `10009b90` | near `dlls/weapons.h` | 1 | Good work; you've openned the cage door, by using ; _cage_door; efw_cage_door … |
| `10009c30` | near `dlls/weapons.h` | 1 | models/p_Branch.mdl; models/v_Branch.mdl; models/w_Branch.mdl |
| `10009c70` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | Oh, you've broken the branch attempting to open th; _cage_door; efw_cage_door … |
| `10009d30` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_MobilePhone.mdl; models/v_MobilePhone.mdl; models/w_MobilePhone.mdl |
| `10009d70` | near `cl_dll/hl/hl_baseentity.cpp` | 5 | Gholan; GholanAgreedToPloy; GotHintAboutHiding … |
| `10009e20` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_IDTag.mdl; models/v_IDTag.mdl; models/w_IDTag.mdl |
| `10009e60` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | Player'sIDTagOnFence |
| `10009e90` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | ID Tag has been placed on the wall.\n; Okay RAR-124, you can pass.; Player'sIDTagOnFence … |
| `1000a070` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_RedPhoneCard.mdl; models/v_RedPhoneCard.mdl; models/w_RedPhoneCard.mdl |
| `1000a0c0` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_GreenPhoneCard.mdl; models/v_GreenPhoneCard.mdl; models/w_GreenPhoneCard.mdl |
| `1000a110` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_BluePhoneCard.mdl; models/v_BluePhoneCard.mdl; models/w_BluePhoneCard.mdl |
| `1000a160` | near `cl_dll/hl/hl_baseentity.cpp` | 1 | models/p_WashingPowder.mdl; models/v_WashingPowder.mdl; models/w_WashingPowder.mdl |
| `1000b720` | near `dlls/wpn_shared/hl_wpn_glock.cpp` | 1 |  |
| `1000bdf0` | near `dlls/hornetgun.cpp` | 1 |  |
| `1000bf00` | near `dlls/hornetgun.cpp` | 1 |  |
| `1000c3e0` | near `dlls/mp5.cpp` | 1 |  |
| `1000c660` | near `dlls/mp5.cpp` | 1 |  |
| `1000cf80` | `CPython::PrimaryAttack` | 1 |  |
| `1000dc40` | `CSatchelCharge::SatchelSlide` | 0 | fff?33s? |
| `1000dd90` | `CSatchelCharge::SatchelThink` | 0 | fff?33s? |
| `1000e410` | `CSatchel::Throw` | 1 |  |
| `1000ec00` | near `dlls/shotgun.cpp` | 1 |  |
| `1000f620` | near `dlls/squeakgrenade.cpp` | 1 |  |
| `1000fc30` | `CTripmine::PrimaryAttack` | 1 |  |
| `10012e90` | `CVoiceStatus::UpdateServerState` | 0 | vban |
| `10018c60` | `HUD_Init` | 2 |  |
| `10018c90` | `HUD_Redraw` | 1 |  |
| `100193c0` | near `cl_dll/death.cpp` | 0 | _gluon gun; _tau cannon; _world … |
| `1001bc20` | `CHud::Init` | 1 |  |
| `1001d750` | near `cl_dll/hud_redraw.cpp` | 0 | sprites/ascale.spr |
| `1001db00` | near `cl_dll/hud_redraw.cpp` | 8 | %2d.%02d %s; Press [%d]     %s; pm … |
| `1001e4c0` | near `cl_dll/hud_redraw.cpp` | 3 |  |
| `1001ebf0` | near `cl_dll/hud_redraw.cpp` | 0 | got list\n |
| `1001f320` | near `cl_dll/hud_redraw.cpp` | 0 | %s:%i; -comm; Master … |
| `1001f650` | near `cl_dll/hud_redraw.cpp` | 0 | SendRequest:  Unable to read master server address |
| `10020de0` | `CHudSpectator::DrawOverviewLayer` | 0 | a6< |
| `10021200` | near `cl_dll/hud_spectator.cpp` | 0 | a6< |
| `100212b0` | near `cl_dll/hud_spectator.cpp` | 0 | a6< |
| `100224f0` | near `cl_dll/hud_spectator.cpp` | 0 | cam_command |
| `10022560` | near `cl_dll/hud_spectator.cpp` | 0 | cam_command |
| `100225b0` | near `cl_dll/hud_spectator.cpp` | 0 | +camdistance; +camin; +cammousemove … |
| `10023ea0` | near `cl_dll/input.cpp` | 0 | -noforcemaccel; -noforcemparms; -noforcemspd … |
| `10024360` | near `cl_dll/input.cpp` | 0 | -nojoy; joystick found\n\n; joystick not found -- driver not present\n\n … |
| `10024500` | near `cl_dll/input.cpp` | 0 | \n%s configured\n\n; joystick; oystick … |
| `10024d30` | near `cl_dll/input.cpp` | 0 | -1.0; 0.0; 1.0 … |
| `10026a40` | `PM_PlayStepSound` | 0 | Footsteps/Guard_Footstep_Generic_1.wav; Footsteps/Guard_Footstep_Generic_2.wav; Footsteps/Guard_Footstep_Generic_3.wav … |
| `1002c910` | near `cl_dll/statusbar.cpp` | 0 | *****; ****** |
| `1002f1e0` | near `cl_dll/studiomodelrenderer.cpp` | 0 | a6; |
| `1002f490` | near `cl_dll/studiomodelrenderer.cpp` | 0 | a6; |
| `100352e0` | near `cl_dll/vgui_schememanager.cpp` | 0 | Arial; Default Scheme; efault Scheme … |
| `10039a30` | near `cl_dll/vgui_teamfortressviewport.cpp` | 0 |  start; AP; CUSTOM … |
| `1003cb40` | `TeamFortressViewport::UpdateSpectatorMenu` | 0 | #Spec_Only_Help |
| `1003cea0` | near `cl_dll/vgui_teamfortressviewport.cpp` | 0 | #Help_civilian; #Help_demoman; #Help_engineer … |
| `1003d2f0` | near `cl_dll/vgui_teamfortressviewport.cpp` | 1 |  |
| `1003fb80` | near `cl_dll/vgui_teamfortressviewport.cpp` | 1 |  |
| `10040fb0` | near `cl_dll/view.cpp` | 0 | a6< |

### Mod functions

| Address | Name | Bytes | Listing |
| --- | --- | --- | --- |
| `100418f0` | `FUN_100418f0` | 61 | `100418f0_FUN_100418f0.c` |
| `10041930` | `FUN_10041930` | 172 | `10041930_FUN_10041930.c` |
| `100419e0` | `FUN_100419e0` | 1059 | `100419e0_FUN_100419e0.c` |
| `10041a20` | `FUN_10041a20` | 7 | `10041a20_FUN_10041a20.c` |
| `10041a30` | `FUN_10041a30` | 14 | `10041a30_FUN_10041a30.c` |
| `10041a40` | `FUN_10041a40` | 37 | `10041a40_FUN_10041a40.c` |
| `10041a70` | `FUN_10041a70` | 10 | `10041a70_FUN_10041a70.c` |
| `10041a80` | `FUN_10041a80` | 23 | `10041a80_FUN_10041a80.c` |
| `10041aa0` | `FUN_10041aa0` | 12 | `10041aa0_FUN_10041aa0.c` |
| `10041ab0` | `FUN_10041ab0` | 253 | `10041ab0_FUN_10041ab0.c` |
| `10041fb0` | `FUN_10041fb0` | 392 | `10041fb0_FUN_10041fb0.c` |
| `10042140` | `FUN_10042140` | 5 | `10042140_FUN_10042140.c` |
| `10042150` | `FUN_10042150` | 62 | `10042150_FUN_10042150.c` |
| `10042190` | `FUN_10042190` | 168 | `10042190_FUN_10042190.c` |
| `10042240` | `FUN_10042240` | 109 | `10042240_FUN_10042240.c` |
| `100422b0` | `FUN_100422b0` | 512 | `100422b0_FUN_100422b0.c` |
| `100424b0` | `FUN_100424b0` | 72 | `100424b0_FUN_100424b0.c` |
| `10042500` | `FUN_10042500` | 245 | `10042500_FUN_10042500.c` |
| `10042600` | `FUN_10042600` | 14 | `10042600_FUN_10042600.c` |
| `10042610` | `FUN_10042610` | 176 | `10042610_FUN_10042610.c` |
| `100426c0` | `FUN_100426c0` | 279 | `100426c0_FUN_100426c0.c` |
| `100427e0` | `FUN_100427e0` | 279 | `100427e0_FUN_100427e0.c` |
| `10042900` | `FUN_10042900` | 156 | `10042900_FUN_10042900.c` |
| `100429a0` | `FUN_100429a0` | 17 | `100429a0_FUN_100429a0.c` |
| `100429c0` | `FUN_100429c0` | 282 | `100429c0_FUN_100429c0.c` |
| `10042ae0` | `FUN_10042ae0` | 201 | `10042ae0_FUN_10042ae0.c` |
| `10042bb0` | `FUN_10042bb0` | 983 | `10042bb0_FUN_10042bb0.c` |
| `10042f90` | `FUN_10042f90` | 67 | `10042f90_FUN_10042f90.c` |
| `10042fe0` | `FUN_10042fe0` | 6 | `10042fe0_FUN_10042fe0.c` |
| `10042ff0` | `FUN_10042ff0` | 89 | `10042ff0_FUN_10042ff0.c` |
| `1004306a` | `FUN_1004306a` | 6 | `1004306a_FUN_1004306a.c` |
| `10043070` | `FUN_10043070` | 136 | `10043070_FUN_10043070.c` |
| `10043100` | `FUN_10043100` | 619 | `10043100_FUN_10043100.c` |
| `10043370` | `FUN_10043370` | 81 | `10043370_FUN_10043370.c` |
| `100433d0` | `FUN_100433d0` | 67 | `100433d0_FUN_100433d0.c` |
| `10043420` | `FUN_10043420` | 331 | `10043420_FUN_10043420.c` |
| `10043570` | `FUN_10043570` | 30 | `10043570_FUN_10043570.c` |
| `10043590` | `FUN_10043590` | 80 | `10043590_FUN_10043590.c` |
| `100435e0` | `FUN_100435e0` | 37 | `100435e0_FUN_100435e0.c` |
| `10043610` | `FUN_10043610` | 10 | `10043610_FUN_10043610.c` |
| `10043620` | `FUN_10043620` | 29 | `10043620_FUN_10043620.c` |
| `10043640` | `FUN_10043640` | 12 | `10043640_FUN_10043640.c` |
| `10043650` | `FUN_10043650` | 69 | `10043650_FUN_10043650.c` |
| `100436a0` | `FUN_100436a0` | 18 | `100436a0_FUN_100436a0.c` |
| `100436c0` | `FUN_100436c0` | 134 | `100436c0_FUN_100436c0.c` |
| `10043750` | `FUN_10043750` | 703 | `10043750_FUN_10043750.c` |
| `10043a10` | `FUN_10043a10` | 87 | `10043a10_FUN_10043a10.c` |
| `10043a70` | `FUN_10043a70` | 116 | `10043a70_FUN_10043a70.c` |
| `10043af0` | `FUN_10043af0` | 182 | `10043af0_FUN_10043af0.c` |
| `10043bb0` | `FUN_10043bb0` | 535 | `10043bb0_FUN_10043bb0.c` |
| `10043dd0` | `FUN_10043dd0` | 358 | `10043dd0_FUN_10043dd0.c` |
| `10043f40` | `FUN_10043f40` | 37 | `10043f40_FUN_10043f40.c` |
| `10043f70` | `FUN_10043f70` | 47 | `10043f70_FUN_10043f70.c` |
| `10043fa0` | `FUN_10043fa0` | 102 | `10043fa0_FUN_10043fa0.c` |
| `10044010` | `FUN_10044010` | 34 | `10044010_FUN_10044010.c` |
| `10044040` | `FUN_10044040` | 37 | `10044040_FUN_10044040.c` |
| `10044070` | `FUN_10044070` | 37 | `10044070_FUN_10044070.c` |
| `100440a0` | `FUN_100440a0` | 12 | `100440a0_FUN_100440a0.c` |
| `100440b0` | `FUN_100440b0` | 12 | `100440b0_FUN_100440b0.c` |
| `100440c0` | `FUN_100440c0` | 41 | `100440c0_FUN_100440c0.c` |
| `100440f0` | `FUN_100440f0` | 216 | `100440f0_FUN_100440f0.c` |
| `100441d0` | `FUN_100441d0` | 44 | `100441d0_FUN_100441d0.c` |
| `10044200` | `FUN_10044200` | 76 | `10044200_FUN_10044200.c` |
| `10044250` | `FUN_10044250` | 47 | `10044250_FUN_10044250.c` |
| `10044280` | `FUN_10044280` | 17 | `10044280_FUN_10044280.c` |
| `100442a0` | `FUN_100442a0` | 29 | `100442a0_FUN_100442a0.c` |
| `100442c0` | `FUN_100442c0` | 5 | `100442c0_FUN_100442c0.c` |
| `100442d0` | `FUN_100442d0` | 13 | `100442d0_FUN_100442d0.c` |
| `100442e0` | `CBasePlayerAmmo::DefaultTouch` | 3 | `100442e0_DefaultTouch.c` |
| `100442f0` | `weapon_efw_Pliers` | 12 | `100442f0_weapon_efw_Pliers.c` |
| `10044300` | `weapon_efw_Lever` | 12 | `10044300_weapon_efw_Lever.c` |
| `10044310` | `weapon_efw_Branch` | 12 | `10044310_weapon_efw_Branch.c` |
| `10044320` | `weapon_efw_MobilePhone` | 12 | `10044320_weapon_efw_MobilePhone.c` |
| `10044330` | `weapon_efw_IDTag` | 12 | `10044330_weapon_efw_IDTag.c` |
| `10044340` | `weapon_efw_RedPhoneCard` | 12 | `10044340_weapon_efw_RedPhoneCard.c` |
| `10044350` | `weapon_efw_GreenPhoneCard` | 12 | `10044350_weapon_efw_GreenPhoneCard.c` |
| `10044360` | `weapon_efw_BluePhoneCard` | 12 | `10044360_weapon_efw_BluePhoneCard.c` |
| `10044370` | `weapon_efw_WashingPowder` | 12 | `10044370_weapon_efw_WashingPowder.c` |
| `10044380` | `FUN_10044380` | 86 | `10044380_FUN_10044380.c` |
| `100443e0` | `FUN_100443e0` | 86 | `100443e0_FUN_100443e0.c` |
| `10044440` | `FUN_10044440` | 108 | `10044440_FUN_10044440.c` |
| `100444b0` | `FUN_100444b0` | 108 | `100444b0_FUN_100444b0.c` |
| `10044520` | `FUN_10044520` | 108 | `10044520_FUN_10044520.c` |
| `10044590` | `FUN_10044590` | 108 | `10044590_FUN_10044590.c` |
| `10044600` | `FUN_10044600` | 108 | `10044600_FUN_10044600.c` |
| `10044670` | `FUN_10044670` | 108 | `10044670_FUN_10044670.c` |
| `100446e0` | `FUN_100446e0` | 108 | `100446e0_FUN_100446e0.c` |
| `10044750` | `FUN_10044750` | 108 | `10044750_FUN_10044750.c` |
| `100447c0` | `FUN_100447c0` | 108 | `100447c0_FUN_100447c0.c` |
| `10044830` | `FUN_10044830` | 37 | `10044830_FUN_10044830.c` |
| `10044860` | `FUN_10044860` | 3 | `10044860_FUN_10044860.c` |
| `10044870` | `FUN_10044870` | 8 | `10044870_FUN_10044870.c` |
| `10044880` | `FUN_10044880` | 161 | `10044880_FUN_10044880.c` |
| `10044930` | `thunk_FUN_10044940` | 5 | `10044930_thunk_FUN_10044940.c` |
| `10044940` | `FUN_10044940` | 1 | `10044940_FUN_10044940.c` |
| `10044950` | `FUN_10044950` | 628 | `10044950_FUN_10044950.c` |
| `10044bd0` | `FUN_10044bd0` | 29 | `10044bd0_FUN_10044bd0.c` |
| `10044bf0` | `FUN_10044bf0` | 318 | `10044bf0_FUN_10044bf0.c` |
| `10044d30` | `FUN_10044d30` | 10 | `10044d30_FUN_10044d30.c` |
| `10044d40` | `FUN_10044d40` | 29 | `10044d40_FUN_10044d40.c` |
| `10044d60` | `FUN_10044d60` | 12 | `10044d60_FUN_10044d60.c` |
| `10044d70` | `FUN_10044d70` | 37 | `10044d70_FUN_10044d70.c` |
| `10044da0` | `FUN_10044da0` | 10 | `10044da0_FUN_10044da0.c` |
| `10044db0` | `FUN_10044db0` | 29 | `10044db0_FUN_10044db0.c` |
| `10044dd0` | `FUN_10044dd0` | 12 | `10044dd0_FUN_10044dd0.c` |
| `10044de0` | `FUN_10044de0` | 37 | `10044de0_FUN_10044de0.c` |
| `10044e10` | `thunk_FUN_10044e20` | 5 | `10044e10_thunk_FUN_10044e20.c` |
| `10044e20` | `FUN_10044e20` | 8 | `10044e20_FUN_10044e20.c` |
| `10044e30` | `FUN_10044e30` | 244 | `10044e30_FUN_10044e30.c` |
| `10044f30` | `FUN_10044f30` | 51 | `10044f30_FUN_10044f30.c` |
| `10044f70` | `FUN_10044f70` | 2739 | `10044f70_FUN_10044f70.c` |
| `10045a30` | `FUN_10045a30` | 26 | `10045a30_FUN_10045a30.c` |
| `10045a50` | `FUN_10045a50` | 7 | `10045a50_FUN_10045a50.c` |
| `10045a60` | `FUN_10045a60` | 32 | `10045a60_FUN_10045a60.c` |
| `10045a80` | `FUN_10045a80` | 31 | `10045a80_FUN_10045a80.c` |
| `10045aa0` | `FUN_10045aa0` | 1067 | `10045aa0_FUN_10045aa0.c` |
| `10045f20` | `FUN_10045f20` | 203 | `10045f20_FUN_10045f20.c` |
| `10045ff0` | `FUN_10045ff0` | 78 | `10045ff0_FUN_10045ff0.c` |
| `10046040` | `FUN_10046040` | 497 | `10046040_FUN_10046040.c` |
| `10046240` | `FUN_10046240` | 133 | `10046240_FUN_10046240.c` |
| `100462d0` | `FUN_100462d0` | 30 | `100462d0_FUN_100462d0.c` |
| `100462f0` | `FUN_100462f0` | 121 | `100462f0_FUN_100462f0.c` |
| `10046370` | `FUN_10046370` | 72 | `10046370_FUN_10046370.c` |
| `100463c0` | `FUN_100463c0` | 244 | `100463c0_FUN_100463c0.c` |
| `100464c0` | `FUN_100464c0` | 129 | `100464c0_FUN_100464c0.c` |
| `10046550` | `FUN_10046550` | 57 | `10046550_FUN_10046550.c` |
| `10046590` | `FUN_10046590` | 858 | `10046590_FUN_10046590.c` |
| `100468f0` | `FUN_100468f0` | 107 | `100468f0_FUN_100468f0.c` |
| `10046960` | `FUN_10046960` | 33 | `10046960_FUN_10046960.c` |
| `10046990` | `FUN_10046990` | 6 | `10046990_FUN_10046990.c` |
| `100469a0` | `FUN_100469a0` | 189 | `100469a0_FUN_100469a0.c` |
| `10046a60` | `FUN_10046a60` | 34 | `10046a60_FUN_10046a60.c` |
| `10046a90` | `FUN_10046a90` | 19 | `10046a90_FUN_10046a90.c` |
| `10046ab0` | `FUN_10046ab0` | 412 | `10046ab0_FUN_10046ab0.c` |
| `10046c50` | `FUN_10046c50` | 46 | `10046c50_FUN_10046c50.c` |
| `10046c80` | `FUN_10046c80` | 223 | `10046c80_FUN_10046c80.c` |
| `10046d60` | `FUN_10046d60` | 186 | `10046d60_FUN_10046d60.c` |
| `10046e20` | `FUN_10046e20` | 521 | `10046e20_FUN_10046e20.c` |
| `10047030` | `FUN_10047030` | 737 | `10047030_FUN_10047030.c` |
| `10047320` | `FUN_10047320` | 37 | `10047320_FUN_10047320.c` |
| `10047350` | `FUN_10047350` | 260 | `10047350_FUN_10047350.c` |
| `10047460` | `FUN_10047460` | 295 | `10047460_FUN_10047460.c` |
| `10047590` | `FUN_10047590` | 38 | `10047590_FUN_10047590.c` |
| `100475c0` | `FUN_100475c0` | 17 | `100475c0_FUN_100475c0.c` |
| `100475e0` | `FUN_100475e0` | 29 | `100475e0_FUN_100475e0.c` |
| `10047600` | `FUN_10047600` | 37 | `10047600_FUN_10047600.c` |
| `10047630` | `FUN_10047630` | 25 | `10047630_FUN_10047630.c` |
| `10047650` | `FUN_10047650` | 16 | `10047650_FUN_10047650.c` |
| `10047660` | `FUN_10047660` | 12 | `10047660_FUN_10047660.c` |
| `10047670` | `FUN_10047670` | 12 | `10047670_FUN_10047670.c` |
| `10047680` | `FUN_10047680` | 32 | `10047680_FUN_10047680.c` |
| `100476a0` | `FUN_100476a0` | 10 | `100476a0_FUN_100476a0.c` |
| `100476b0` | `FUN_100476b0` | 25 | `100476b0_FUN_100476b0.c` |
| `100476d0` | `FUN_100476d0` | 12 | `100476d0_FUN_100476d0.c` |
| `100476e0` | `FUN_100476e0` | 20 | `100476e0_FUN_100476e0.c` |
| `10047700` | `FUN_10047700` | 20 | `10047700_FUN_10047700.c` |
| `10047720` | `FUN_10047720` | 263 | `10047720_FUN_10047720.c` |
| `10047830` | `FUN_10047830` | 2966 | `10047830_FUN_10047830.c` |
| `100483d0` | `FUN_100483d0` | 82 | `100483d0_FUN_100483d0.c` |
| `10048430` | `FUN_10048430` | 38 | `10048430_FUN_10048430.c` |
| `10048460` | `FUN_10048460` | 60 | `10048460_FUN_10048460.c` |
| `100484a0` | `FUN_100484a0` | 14 | `100484a0_FUN_100484a0.c` |
| `100484b0` | `FUN_100484b0` | 211 | `100484b0_FUN_100484b0.c` |
| `10048590` | `FUN_10048590` | 60 | `10048590_FUN_10048590.c` |
| `100485d0` | `FUN_100485d0` | 116 | `100485d0_FUN_100485d0.c` |
| `10048650` | `FUN_10048650` | 116 | `10048650_FUN_10048650.c` |
| `100486d0` | `FUN_100486d0` | 23 | `100486d0_FUN_100486d0.c` |
| `100486f0` | `FUN_100486f0` | 21 | `100486f0_FUN_100486f0.c` |
| `10048710` | `FUN_10048710` | 43 | `10048710_FUN_10048710.c` |
| `10048740` | `FUN_10048740` | 76 | `10048740_FUN_10048740.c` |
| `10048790` | `FUN_10048790` | 442 | `10048790_FUN_10048790.c` |
| `10048950` | `FUN_10048950` | 278 | `10048950_FUN_10048950.c` |
| `10048a70` | `FUN_10048a70` | 82 | `10048a70_FUN_10048a70.c` |
| `10048ad0` | `FUN_10048ad0` | 282 | `10048ad0_FUN_10048ad0.c` |
| `10048bf0` | `FUN_10048bf0` | 37 | `10048bf0_FUN_10048bf0.c` |
