
undefined4 __cdecl FUN_100cfacf(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101351c0) &&
     ((*(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d42a8(param_1);
    uVar1 = FUN_100cfb2c(param_1);
    FUN_100d4307(param_1);
    return uVar1;
  }
  pDVar2 = FUN_100d3f8f();
  *pDVar2 = 9;
  pDVar2 = FUN_100d3f98();
  *pDVar2 = 0;
  return 0xffffffff;
}

