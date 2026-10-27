
byte __cdecl FUN_100d309d(uint param_1)

{
  if (DAT_101351c0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

