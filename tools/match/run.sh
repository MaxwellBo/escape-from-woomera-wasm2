#!/bin/sh
# Classify every function in the two Escape from Woomera DLLs against
# Spirit of Half-Life 1.0 and write decomp/classification/.
#
# Usage: tools/match/run.sh <EscapeFromWoomera_v084 dir>
# Needs Ghidra 12.2 (GHIDRA_HOME), JDK 25, clang with 32-bit multilib, git.
set -eu
HERE=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
ROOT=$(CDPATH= cd -- "$HERE/../.." && pwd)
MOD=$1
WORK=${WORK:-/tmp/efw-match}
SPIRIT=${SPIRIT_SRC:-$WORK/Spirit-of-Half-Life-1.0}
SPIRIT_COMMIT=${SPIRIT_COMMIT:-e356580dbb61a22c8c4439eb7ec0a4185fc3d3d5}
mkdir -p "$WORK"

if [ ! -d "$SPIRIT" ]; then
  git clone -q https://github.com/sohl-modders/Spirit-of-Half-Life-1.0 "$SPIRIT"
fi
git -C "$SPIRIT" checkout -q "$SPIRIT_COMMIT"
python3 "$HERE/build_spirit10.py" "$SPIRIT/SpiritSource" "$WORK/ref"

ls "$ROOT/decomp/server" | grep -E '^[0-9a-f]{8}_' | cut -c1-8 > "$WORK/seeds_server.txt"
ls "$ROOT/decomp/client" | grep -E '^[0-9a-f]{8}_' | cut -c1-8 > "$WORK/seeds_client.txt"
"$HERE/analyze.sh" "$MOD/dlls/EscapeFromWoomera.dll" "$WORK/server.json" "$WORK/seeds_server.txt" > "$WORK/server.log" 2>&1 &
"$HERE/analyze.sh" "$MOD/cl_dlls/client.dll" "$WORK/client.json" "$WORK/seeds_client.txt" > "$WORK/client.log" 2>&1 &
wait
"$HERE/analyze.sh" "$WORK/ref/ref_server.so" "$WORK/ref_server.json" > "$WORK/ref_server.log" 2>&1 &
"$HERE/analyze.sh" "$WORK/ref/ref_client.so" "$WORK/ref_client.json" > "$WORK/ref_client.log" 2>&1 &
wait

for side in server client; do
  python3 "$HERE/match.py" "$WORK/$side.json" "$WORK/ref_$side.json" "$WORK/ref/ref_$side.so" \
    "$WORK/m_$side.json" --decomp "$ROOT/decomp/$side" --objects "$WORK/ref/ref_$side.objects.txt"
done
python3 "$HERE/report.py" "$WORK/m_server.json" "$WORK/m_client.json" "$ROOT/decomp/classification"
