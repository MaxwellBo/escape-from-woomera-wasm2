import assert from "node:assert/strict";
import test from "node:test";

// Floats at 0x100f939c and 0x100f93a0 in EscapeFromWoomera.dll.
const ELECTRICIAN_CONE = 0.6108647584915161;
const GUARD_CONE = 1.0471975803375244;

test("sight cones are 35 and 60 degrees", () => {
  assert.ok(Math.abs(ELECTRICIAN_CONE - (35 * Math.PI) / 180) < 1e-6);
  assert.ok(Math.abs(GUARD_CONE - (60 * Math.PI) / 180) < 1e-6);
});
