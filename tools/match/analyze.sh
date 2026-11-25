#!/bin/sh
# Import one binary into a throwaway Ghidra project and export its features.
# Usage: analyze.sh <binary> <out.json> [function-start list]
set -eu
HERE=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
GHIDRA=${GHIDRA_HOME:-/opt/ghidra/ghidra_12.2_PUBLIC}
export JAVA_HOME=${JAVA_HOME:-/usr/lib/jvm/java-25-openjdk-amd64}
PROJ=$(mktemp -d)
trap 'rm -rf "$PROJ"' EXIT
SEED=""
if [ $# -ge 3 ]; then
  SEED="-postScript SeedFunctions.java $(realpath "$3")"
fi
# shellcheck disable=SC2086
"$GHIDRA/support/analyzeHeadless" "$PROJ" p -import "$1" \
  -scriptPath "$HERE/ghidra_scripts" $SEED \
  -postScript ExportFeatures.java "$(realpath -m "$2")" \
  -max-cpu 2 -deleteProject
