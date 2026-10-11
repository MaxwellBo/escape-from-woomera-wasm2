# escape-from-woomera-wasm2

Escape from Woomera v0.84 in the browser. The page runs the Xash3D FWGS GoldSrc engine (`xash3d-fwgs@1.2.2`). The server and client libraries are Spirit of Half-Life 1.2 with the prototype’s entities (`monster_refugee`, `efw_Marker`, the patrol guards, and `weapon_efw_*`) linked in from `engine/efw/`.

The Windows DLLs were inspected with [REA](https://github.com/morluto/rea) and Ghidra. `docs/decompilation.md` records what that inspection recovered and which browser behaviors are assumptions. `src/` keeps the small JavaScript model of hope, the conversation grammar, and the HUD message names. The map, model, sound, and dialogue files under `public/efw/` are the authors’ released prototype. Valve’s commercial `valve/` assets and `gfx/shell` bitmaps are not included.

```bash
npm install
npm test
npm start
```

Open the printed local URL. Click the view, walk with WASD, and press E to talk or use something in front of you. Number keys pick a dialogue line.

`scripts/build-wasm.sh` rebuilds `public/dlls/hl_emscripten_wasm32.wasm` and `public/cl_dlls/client_emscripten_wasm32.wasm` with Emscripten 4.0.17. The engine wasm in `public/` comes from the npm package.
