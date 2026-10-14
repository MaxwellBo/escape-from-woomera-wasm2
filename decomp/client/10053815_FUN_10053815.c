
byte __cdecl FUN_10053815(uint param_1)

{
  if (DAT_100bd160 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

