
undefined4 __cdecl FUN_100d41bf(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_101351c0) &&
     ((*(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_101350c0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_100d3f8f();
  *pDVar1 = 9;
  pDVar1 = FUN_100d3f98();
  *pDVar1 = 0;
  return 0xffffffff;
}

