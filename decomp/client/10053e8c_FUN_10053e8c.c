
undefined4 __cdecl FUN_10053e8c(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_100bd160) &&
     ((*(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_100bd060)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1004ddc4();
  *pDVar1 = 9;
  pDVar1 = FUN_1004ddcd();
  *pDVar1 = 0;
  return 0xffffffff;
}

