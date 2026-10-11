import assert from "node:assert/strict";
import test from "node:test";
import {
  HOPE_BONUS,
  HOPE_DEPLETED_MENU,
  HOPE_MAX,
  addHope,
  applyMenuToHope,
  decayHope,
} from "../src/hope.js";

test("hope decays by one twelfth of the time step and clamps at zero", () => {
  assert.equal(decayHope(HOPE_MAX, 12), 99);
  assert.equal(decayHope(HOPE_MAX, 1200), 0);
  assert.equal(decayHope(1, 24), 0);
  assert.equal(decayHope(HOPE_MAX, 0), HOPE_MAX);
});

test("hope bonuses clamp at the cap", () => {
  assert.equal(addHope(90, HOPE_BONUS), HOPE_MAX);
  assert.equal(addHope(10, -40), 0);
});

test("only the recovered menu bytes change hope", () => {
  assert.equal(applyMenuToHope(10, 0x3f), 25);
  assert.equal(applyMenuToHope(10, 0x43), 25);
  assert.equal(applyMenuToHope(10, HOPE_DEPLETED_MENU), 10);
});
