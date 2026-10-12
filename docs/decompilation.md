# Escape from Woomera v0.84 decompilation

Recovered with [REA](https://github.com/morluto/rea) 6.4.0 and Ghidra 12.1.4 from `EscapeFromWoomera_v084.zip`. The zip MD5 is `989cd1ba4052a8717eba548e0afa40da`, the same hash published on the ModDB file page. The server DLL SHA-256 is `b2395aab1e2ec65fd4fef354425866935e72d22e42fadab96ae167b416fccf74`.

The DLL’s debug path is `C:\Development\EscapeFromWoomera\Source\dlls\Releasehl\EscapeFromWoomera.pdb`. `liblist.gam` names the game “Escape from Woomera”, version `0.84 (Beta 2)`, and points `gamedll` at `dlls/EscapeFromWoomera.dll`. The package also contains `spirit.fgd` and `spirit.ico`. The exported class list is the Spirit of Half-Life SDK plus a small set of mod entities. This note covers that mod-specific layer. Ghidra pseudocode is analysis output, not the original source.

## What the package is

| Path | Role |
| --- | --- |
| `dlls/EscapeFromWoomera.dll` | Server gameplay, PE32 x86 |
| `cl_dlls/client.dll` | Client HUD and item views, PE32 x86 |
| `maps/efw_prototype_level1.bsp` | Start map (`startmap` in `liblist.gam`), 362 entities |
| `maps/efw_prototype_level2.bsp` | Night compound, 5 `monster_patrol_guard` |
| `maps/efw_prototype_level3.bsp` | Return to the camp, 344 entities |
| `Conversations/*.txt` | Dialogue scripts, 17 character files |
| `weapon_efw_*` | Inventory items implemented as weapons |

Custom server entities, from the export table: `efw_Marker`, `monster_refugee`, `monster_efw_guard`, `monster_patrol_guard`, and the nine `weapon_efw_*` items (pliers, lever, branch, mobile phone, ID tag, three phone cards, washing powder).

## Hope

Evidence: `ev_fd90219d093c36a1fb8f651e4476cdf41723692177be56db4c0cbed4615137b3` (`FUN_100c6ad0`), `ev_8ea6643d7cec3b8d2bdbbb10a43ea3c3382d5c9d94e845035a36b2e37ed0f12c` (read), `ev_5546e8ffe4016bcfa35d7a81780c37c08a8553aa20e2468b67ad1b1ccf22038e` (write), `ev_5e068671d3414d334b245cc40d5f60d76aa68fa641936cfaa6759e7de698c1f4` (bonus), `ev_9fea1de2d450b1cd2afd962129a41332f37b49614d6230f88302431bd3f329e9` (time step).

Hope is float slot 1 of the block at `DAT_10134948`. Each decay step does:

```text
hope = clamp(hope - deltaTime * (1/12), 0, 100)
```

`deltaTime` is the global at `DAT_10134874`. The factor is the float constant `0.083333336`, which is `1/12` in single precision. When the result is less than or equal to zero, the server writes the debug string `Run out of hope!` through `OutputDebugStringA` and sends user-message `EFW_Menu` with byte `0x4d`.

`FUN_100c4d70` adds a float to the same slot and clamps it. `FUN_100c4d10` subtracts a float and clamps it. Menu bytes `0x3f` and `0x43` add `15` before the menu message is delivered.

`FUN_100c6740` runs once, under the debug line `STARTUP GAME`, and stores two floats:

| Slot | Value |
| --- | --- |
| 0 | `100` (`0x42c80000`) |
| 1 (hope) | `80` (`0x42a00000`) |

The block lives in the DLL’s BSS, so both slots are 0 until that function runs. Hope is not reset on `STARTUP LEVEL`.

`FUN_100c6b60` is called from `0x1001bf7d`, inside the server start-frame function at `0x1001bf50`, so the decay runs every server frame. Before the decay, `FUN_100c6a70` reads `gpGlobals->time` (`fld dword ptr [gpGlobals]`, and `time` is the first field of `globalvars_t`) and writes the step into `DAT_10134874`:

```text
step = gpGlobals->time - last
if step < 0: step = 0
if step > 0.2: step = 0.2
DAT_10134874 = step
last = gpGlobals->time
```

`0.2` is the float at `0x100e1140`. `FUN_100c5b70` returns `DAT_10134874`, and the decay multiplies that by `1/12`.

Other hope changes recovered from call sites of `FUN_100c4d70` and `FUN_100c4d10`:

| Site | Change |
| --- | --- |
| `efw_kitchen_bin` while the electrician has not seen the player | `+10`, topic `PliersInBin` on, `PLIERS_GOT_PLIERS` off, diary 6, menu byte `0x3e` |
| same marker when `FUN_100c59c0` says the electrician saw it | `-2`, and the line `Oi! Put that back!` |
| Gholan agrees to remove the ID tag | `+10`, topics `GholanAgreedToPloy`, `IDTAG`, and `HIDING`, diary 13 |
| Mouhtaz hands over the lever | `+15`, gives `weapon_efw_Lever`, diary 17 |
| Player has both `weapon_efw_WashingPowder` and `weapon_efw_MobilePhone` | `+10`, menu byte `0x47` |
| `efw_approach_bin` when the player is not carrying pliers | gives `weapon_efw_Pliers`, `+15`, menu byte `0x45` |

## Conversation scripts

Evidence: `ev_e56005745b863b2d18aad7749b5096cc6b87b9ed38ae6d397ed252d131b007f8` (directory load), `ev_338740c586ae1adfce4dd655387016068d6de5bae1e38fce31f8da4d52a55e51` (topic flag).

On startup the server takes the game directory, appends `\Conversations\*.txt`, and parses every match with a flex/yacc parser (`parse error`, `parser stack overflow`, and `efwConversation::Squark` are in the binary). After the files load it enables three topics: `ESCAPE`, `GREET`, and `GOODBYE`.

Observed line shape:

```text
Q<TOPIC flags>: question
A<flags>: answer [AddTopic(NAME) DeleteTopic(NAME) AddDiary(N) ServerCommand(command) Goodbye]
```

A leading `#` comments the line out. Flags seen on questions and answers are `FirstTime` and `!FirstTime`. `ServerCommand` names found in the scripts are `efw_GetPackage`, `efw_EndMailPickupMessage`, and `efw_TriggerMailPickupMessage`. Diary numbers passed to `AddDiary` are integers. The parser in `src/conversation.js` follows this grammar.

`CRefugee::IdleThink` (`ev_e5dd0596bc0e61cc4dc260b577085597fe45f137bd60018d7fb2a170f30154b1`) faces nearby refugees toward the player and, on a distance and counter check, plays a short approach sequence. A separate debug string, `Conversation hidden, partner too far`, records that a conversation is dropped when the partner is too far away. The distance threshold for that check was not tied to a single constant in the functions read here.

## HUD messages

The server registers these user messages together. The size is the `REG_USER_MSG` argument; `-1` is variable length.

| Message | Size | Client handler located by REA |
| --- | --- | --- |
| `EFW_CtPrv` | 1 | `0x10044bd0` |
| `EFW_Cntxt` | -1 | `0x10044950` |
| `EFW_Menu` | 1 | `0x10047680` |
| `EFWData` | -1 | `0x100418f0` |
| `EFWShow` | -1 | `0x10041930` |

REA’s procedure search on `client.dll` (`ev_6cb477b067a50e7095ec975716a4d67d5f750ad63b20e2282cb9c50d28bad0c1`) named the `weapon_efw_*` link functions and not these handlers. Cross-references to the message-name strings (`ev_b6030108f5917`, `ev_08a9af6ffb01d`, `ev_6a8643b5d4193`, `ev_3a9d6bc5070b3`) land in the registration calls, which push the handler addresses above. Ghidra had not created procedures at those addresses, so the handler bodies were read from the bytes at the addresses REA reported.

The handlers are the functions registered with those names. Their bodies:

- `EFWData` (`0x100418f0`) reads one byte. If it is `1`, it reads 36 further bytes (`0x24`) into `0x100bc498`. Any other kind is ignored.
- `EFWShow` (`0x10041930`) reads one byte. `0xff` clears 14 slots of 1000 bytes (`0x3e8`) from `0x100b7824` through `0x100baed4` and sets the high-water mark to 0. Any other byte `n` raises the high-water mark to at least `n + 1` and appends `READ_STRING()` onto slot `n` (the copy starts at the existing NUL, so repeated messages concatenate).
- `EFW_Menu` (`0x10047680`) sign-extends the one payload byte and passes it to the menu object at `0x100a5178`.
- `EFW_CtPrv` (`0x10044bd0`) reads one byte and discards it. The server sends `(contextCount != 0)` on message id `DAT_10124908` at the end of `FUN_100c7830`.
- `EFW_Cntxt` (`0x10044950`) reads a count, then `count * 48` bytes into `0x100bb728`. `FUN_100c7d30` is the server writer: one count byte, then `count * 0x30` bytes from `DAT_101348b0`.

`FUN_100c7830` fills at most three of those 48-byte records each frame. It searches a sphere of radius `123` (`0x42f60000`) around the player. A record is:

| Offset | Contents |
| --- | --- |
| `0x00` | kind, int32 |
| `0x04` | targetname, 0x1d bytes, NUL-terminated |
| `0x24` | x, y, z floats |

Kind `0` is a `monster_refugee` or `monster_barney` inside 123 units. The z stored for that kind is the entity origin plus 64. Kind `1` is an `efw_Marker` (the pliers marker is omitted once the player has `weapon_efw_Pliers`; `efw_hiding_place` skips the visibility trace), or `func_door_rotating` named `efw_cage_door`. A world item whose classname begins with `weapon_efw` is stored as `100 + itemIndex`. The client projects each point and keeps the prompt only when it lands on screen. A kind-0 prompt whose targetname is `Detainee` is dropped. The label strings next to the command templates are `Talk to %C`, `Give %i to %C`, `Pick up %i`, `Take pliers`, `Hide under the building`, `Hide %i in bin`, `Force open cage door with %i`, and `Place %i on fence`. `%C` and `%i` are instructions for the client’s own format walker (`Recognised format string instruction (%` is its error string), not printf.

Client strings name the commands the HUD sends back: `efw_Talk`, `efw_Give`, `efw_Pickup`, `efw_UseWithMarker`, `efw_HideUnderBuilding`, `efw_ShowMenu`, `efw_diary`, `efw_diary_next`, `efw_diary_prev`, `efw_changelevel`, and `efw_pause`.

## Level flow

`efw_prototype_level1` is the start map. Its named gameplay entities include the kitchen door, the compound gate, the ID-tag board, the electrician and that path, the hiding place, the pliers marker, and the kitchen bin. `efw_prototype_level2` is the night compound with patrol guards, the cage door, and the hiding place. `efw_prototype_level3` repeats the camp landmarks from level 1.

Client storyboard names mark the chapter changes and endings: introduction, hiding by day, hiding by night, decoy, deportation, isolation, and a positive ending. Those screens issue `efw_changelevel` for one of the three maps, or `efw_pause`.

## Unknowns

- The generated flex parser was not decompiled production by production. The line shape above is what the shipped scripts and the loader strings support.
- Most of `EscapeFromWoomera.dll` is Spirit of Half-Life. Those functions were not re-copied here; the browser links the Spirit 1.2 sources.
- The client format walker that expands `%C`, `%c`, `%i`, `%d`, and `%u` was not lifted instruction by instruction. The templates and the 48-byte record they read are above.
- `FUN_100c59c0`, the “electrician saw you” test on the bin, was not reduced to a trace or a radius. The browser still uses a 160-unit distance for that refusal, and applies the recovered `-2` hope.
- Gholan’s ID-tag bargain (`+10`, diary 13) and Mouhtaz’s lever (`+15`, diary 17) are separate server functions. They are not yet called from the conversation picker.
- The string `Conversation hidden, partner too far` is not in this DLL’s `.rdata`. The 220-unit drop used by the browser port is still an assumption.

## Browser engine

The playable page runs [Xash3D FWGS](https://github.com/FWGS/xash3d-fwgs) from the `xash3d-fwgs@1.2.2` package (engine commit `7c58854`). That is a GoldSrc-compatible engine, not a new renderer. The game libraries are Spirit of Half-Life 1.2 (`hlsdk-portable` `c0dd993d82fb9ecad98eadf1ad392b7b2e6d3226`) with the mod entities added in `engine/efw/` and the hooks in `engine/sohl-efw.patch`. `scripts/build-wasm.sh` rebuilds those side modules. The published Windows DLLs are not loaded in the browser; the Emscripten build links the same entity names (`monster_refugee`, `efw_Marker`, `monster_patrol_guard`, `monster_efw_guard`, `env_flag`, `weapon_efw_*`) into the engine’s server and client slots.

`engine/efw/efw_game.cpp` is a structured port of the recovered grammar and the hope formula. It is not Ghidra’s C compiled as-is. The client reads one `EFWShow` layout written by that port (kind byte, hope byte, line count, strings). That layout is the browser HUD. It is not the slot protocol observed in `client.dll`.

Hope starts at 80, and the decay step is `gpGlobals->frametime` clamped to `[0, 0.2]`. A person named `Detainee` does not get the talk prompt. Other refugees and barneys are eligible inside 123 units. Stashing the pliers adds 10 hope; the electrician catching that attempt subtracts 2.

These choices are not recovered facts:

- The level-1 player is given `weapon_efw_IDTag` once. The scripts and markers use the tag; the DLL’s spawn grant was not isolated.
- `efw_GetPackage` applies the recovered +15 hope bonus. Diary lines do not add hope.
- A guard on level 2 ends the game when the player is within 180 units and not inside `efw_hiding_place`. The DLL’s hearing and line-of-sight checks are more specific than that radius.
- The electrician must be at least 160 units away before the pliers marker gives `weapon_efw_Pliers`.
- Choosing “Give him the pliers” while talking to Amir is the stand-in for `efw_Give`. The pliers topic in the script does not itself end the game.
- Officers stay `monster_barney` so Spirit’s AI remains, and their model is `models/Security.mdl` from the prototype. `models/barney.mdl` is not in the release.
- `env_flag` is exported and does nothing. The shipped maps do not use it.
- Map skies named `dashdesert256` are the prototype’s `day256` images under that name. Valve’s `valve/` wads and `gfx/shell` bitmaps are not in this tree. Xash’s own `extras.pk3` supplies the menu font and shell. Textures that lived only in the commercial wads stay missing.
