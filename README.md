# escape-from-woomera-wasm2

Recovered gameplay model of the Escape from Woomera v0.84 Half-Life prototype.

The server and client DLLs were inspected with [REA](https://github.com/morluto/rea) and Ghidra. `src/` is a small behavioral model of the hope meter, the conversation script format, and the HUD messages that model is built on. `docs/decompilation.md` records the evidence, including what was not recovered.

The original map, model, sound, and dialogue files are not in this repository.

```bash
npm test
```
