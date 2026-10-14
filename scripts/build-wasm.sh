#!/bin/sh
# Rebuild the Escape from Woomera server and client side modules.
# Requires Emscripten 4.0.17 on PATH and a checkout of hlsdk-portable sohl1.2
# at the commit recorded below. The engine itself is the published
# xash3d-fwgs 1.2.2 wasm package; this script does not rebuild it.
set -eu
ROOT=$(CDPATH= cd -- "$(dirname "$0")/.." && pwd)
SDK=${HLSDK_PORTABLE:-/tmp/hlsdk-portable}
COMMIT=c0dd993d82fb9ecad98eadf1ad392b7b2e6d3226

if [ ! -d "$SDK/.git" ]; then
  git clone --branch sohl1.2 --single-branch https://github.com/FWGS/hlsdk-portable.git "$SDK"
fi
git -C "$SDK" fetch --depth 1 origin "$COMMIT"
git -C "$SDK" checkout -f "$COMMIT"
git -C "$SDK" submodule update --init --depth 1 freevgui
rm -rf "$SDK/dlls/efw" "$SDK/cl_dll/efw_hud.cpp"
mkdir -p "$SDK/dlls/efw"
cp "$ROOT/engine/efw/efw.h" "$ROOT/engine/efw/efw_game.cpp" "$ROOT/engine/efw/efw_items.cpp" "$ROOT/engine/efw/efw_monsters.cpp" "$SDK/dlls/efw/"
cp "$ROOT/engine/efw/efw_hud.cpp" "$SDK/cl_dll/efw_hud.cpp"
git -C "$SDK" apply "$ROOT/engine/sohl-efw.patch"

cd "$SDK"
python3 ./waf configure --emscripten -T release --disable-werror
python3 ./waf build -j2

mkdir -p "$ROOT/public/dlls" "$ROOT/public/cl_dlls"
cp "$SDK/build/dlls/spirit_emscripten_wasm32.wasm" "$ROOT/public/dlls/hl_emscripten_wasm32.wasm"
cp "$SDK/build/cl_dll/client_emscripten_wasm32.wasm" "$ROOT/public/cl_dlls/client_emscripten_wasm32.wasm"
echo "wrote public/dlls/hl_emscripten_wasm32.wasm and public/cl_dlls/client_emscripten_wasm32.wasm"
