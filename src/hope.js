/**
 * Hope meter recovered from EscapeFromWoomera.dll.
 *
 * Slot 1 of the float block at DAT_10134948 is hope. Decay and bonuses both
 * clamp the slot to [0, 100]. The decay term is the time step multiplied by
 * the single-precision constant 1/12.
 */

export const HOPE_SLOT = 1;
export const HOPE_MIN = 0;
export const HOPE_MAX = 100;
/** FUN_100c6740 writes this into slot 1 on startup. Slot 0 is set to 100. */
export const HOPE_START = 80;
/**
 * FUN_100c6a70 stores the frame delta in DAT_10134874 after clamping it.
 * A backwards clock becomes 0. A hitch longer than this becomes 0.2.
 */
export const HOPE_MAX_STEP = 0.2;
export const HOPE_DECAY_PER_SECOND = 1 / 12;
export const HOPE_BONUS = 15;
/** Successful stash in efw_kitchen_bin. */
export const HOPE_BIN_BONUS = 10;
/** Electrician sees the stash. FUN_100c4d10 subtracts this from slot 1. */
export const HOPE_CAUGHT = 2;

/** Menu bytes that add hope before the menu message is sent. */
export const HOPE_BONUS_MENUS = new Set([0x3f, 0x43]);

/** Menu byte sent when hope reaches zero. */
export const HOPE_DEPLETED_MENU = 0x4d;

export function clampHope(value) {
  if (value < HOPE_MIN) return HOPE_MIN;
  if (value > HOPE_MAX) return HOPE_MAX;
  return value;
}

/**
 * One decay step. `deltaTime` is the value read from DAT_10134874.
 * Reaching zero is reported by the caller; this function only updates the meter.
 */
export function frameStep(deltaTime) {
  if (deltaTime < 0) return 0;
  if (deltaTime > HOPE_MAX_STEP) return HOPE_MAX_STEP;
  return deltaTime;
}

export function decayHope(hope, deltaTime) {
  return clampHope(hope - frameStep(deltaTime) * HOPE_DECAY_PER_SECOND);
}

export function addHope(hope, amount) {
  return clampHope(hope + amount);
}

/**
 * Server menu dispatch for the codes that touch hope.
 * Other menu bytes are not hope changes.
 */
export function applyMenuToHope(hope, menuByte) {
  if (HOPE_BONUS_MENUS.has(menuByte)) {
    return addHope(hope, HOPE_BONUS);
  }
  return hope;
}
