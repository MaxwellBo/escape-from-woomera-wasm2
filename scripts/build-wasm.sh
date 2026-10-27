#!/bin/sh
# Rebuild the decompiled Escape from Woomera server and client as Xash
# side modules. Requires Emscripten 4.0.17. The engine is the published
# xash3d-fwgs 1.2.2 package; this script does not rebuild it.
set -eu
ROOT=$(CDPATH= cd -- "$(dirname "$0")/.." && pwd)
if [ -f /home/ubuntu/emsdk/emsdk_env.sh ]; then
  # shellcheck disable=SC1091
  . /home/ubuntu/emsdk/emsdk_env.sh >/dev/null
fi
exec python3 "$ROOT/scripts/compile_ghidra.py" --target wasm --side both --jobs 2
