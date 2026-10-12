import assert from "node:assert/strict";
import test from "node:test";
import {
  HOPE_BONUS,
  HOPE_CAUGHT,
  HOPE_DEPLETED_MENU,
  HOPE_MAX,
  HOPE_MAX_STEP,
  HOPE_START,
  addHope,
  applyMenuToHope,
  decayHope,
  frameStep,
} from "../src/hope.js";

test("hope decays by one twelfth of the clamped time step", () => {
  assert.equal(decayHope(HOPE_MAX, HOPE_MAX_STEP), HOPE_MAX - HOPE_MAX_STEP / 12);
  assert.equal(decayHope(HOPE_MAX, 1200), HOPE_MAX - HOPE_MAX_STEP / 12);
  assert.equal(decayHope(0, 24), 0);
  assert.equal(decayHope(HOPE_MAX, 0), HOPE_MAX);
  assert.equal(decayHope(HOPE_START, -5), HOPE_START);
  assert.equal(frameStep(1), HOPE_MAX_STEP);
  assert.equal(frameStep(-1), 0);
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
