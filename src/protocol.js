/**
 * User messages registered by EscapeFromWoomera.dll, and the entities that
 * exist only in this mod. Sizes are the second argument of REG_USER_MSG;
 * -1 means a variable-length message.
 */

export const USER_MESSAGES = [
  { name: "EFW_CtPrv", size: 1 },
  { name: "EFW_Cntxt", size: -1 },
  { name: "EFW_Menu", size: 1 },
  { name: "EFWData", size: -1 },
  { name: "EFWShow", size: -1 },
];

export const CUSTOM_ENTITIES = [
  "efw_Marker",
  "monster_refugee",
  "monster_efw_guard",
  "monster_patrol_guard",
];

export const CUSTOM_ITEMS = [
  "weapon_efw_Pliers",
  "weapon_efw_Lever",
  "weapon_efw_Branch",
  "weapon_efw_MobilePhone",
  "weapon_efw_IDTag",
  "weapon_efw_RedPhoneCard",
  "weapon_efw_GreenPhoneCard",
  "weapon_efw_BluePhoneCard",
  "weapon_efw_WashingPowder",
];

export const MAPS = [
  "efw_prototype_level1",
  "efw_prototype_level2",
  "efw_prototype_level3",
];

/** Client commands recovered from client.dll string references. */
export const CLIENT_COMMANDS = [
  "efw_Talk",
  "efw_Give",
  "efw_Pickup",
  "efw_UseWithMarker",
  "efw_HideUnderBuilding",
  "efw_ShowMenu",
  "efw_PickupPliers",
  "efw_changelevel",
  "efw_pause",
  "efw_diary",
  "efw_diary_next",
  "efw_diary_prev",
  "efw_set_state",
];
