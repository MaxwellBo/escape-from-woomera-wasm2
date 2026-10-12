
undefined4 __cdecl FUN_1004db0f(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100bd160) &&
     ((*(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10053ece(param_1);
    uVar1 = FUN_1004db6c(param_1);
    FUN_10053f2d(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1004ddc4();
  *pDVar2 = 9;
  pDVar2 = FUN_1004ddcd();
  *pDVar2 = 0;
  return 0xffffffff;
}

