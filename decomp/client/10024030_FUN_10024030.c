
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10024030(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  float local_c;
  float fStack_8;
  
  (*DAT_100a5078)(&local_c);
  if ((DAT_100a9880 & 1) != 0) {
    FUN_1003fdd0();
  }
  if (((DAT_100a97b4 != 0) || (DAT_100a9ad0 != 0)) || (DAT_100a4fe4 != 0)) goto LAB_100242af;
  GetCursorPos((LPPOINT)&DAT_100a9a60);
  iVar2 = (*DAT_100a5070)();
  iVar2 = (DAT_100a9ac8 + DAT_100a9a60) - iVar2;
  iVar3 = (*DAT_100a5074)();
  iVar4 = DAT_100a9a00;
  DAT_100a9ac8 = 0;
  DAT_100a9a00 = 0;
  iVar3 = (iVar4 + DAT_100a9a64) - iVar3;
  iVar4 = iVar3;
  iVar1 = iVar2;
  if (*(float *)(DAT_100a9a10 + 0xc) != _DAT_10059a18) {
    lVar6 = __ftol();
    _DAT_100a99f4 = (int)lVar6;
    lVar6 = __ftol();
    iVar4 = (int)lVar6;
    iVar1 = _DAT_100a99f4;
  }
  _DAT_100a99f4 = iVar1;
  _DAT_100a99ec = iVar4;
  DAT_100a9a38 = iVar3;
  DAT_100a9a3c = iVar2;
  fVar5 = FUN_1001c580(0x100a3a40);
  if (fVar5 == (float10)_DAT_10059a18) {
    lVar6 = __ftol();
    _DAT_100a99f4 = (int)lVar6;
  }
  else {
    FUN_1001c580(0x100a3a40);
    lVar6 = __ftol();
    _DAT_100a99f4 = (int)lVar6;
    FUN_1001c580(0x100a3a40);
  }
  lVar6 = __ftol();
  _DAT_100a99ec = (int)lVar6;
  if (((DAT_100a9920 & 1) == 0) &&
     ((*(float *)(DAT_100a9870 + 0xc) == _DAT_10059a18 || ((DAT_100a9880 & 1) == 0)))) {
    fStack_8 = fStack_8 - (float)_DAT_100a99f4 * *(float *)(DAT_100a98d4 + 0xc);
  }
  else {
    *(float *)(param_2 + 0x14) =
         (float)_DAT_100a99f4 * *(float *)(DAT_100a98a4 + 0xc) + *(float *)(param_2 + 0x14);
  }
  if ((DAT_100a9880 & 1) == 0) {
    if ((DAT_100a9920 & 1) != 0) goto LAB_10024266;
LAB_10024287:
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) - (float)_DAT_100a99ec * *(float *)(DAT_100a98f4 + 0xc);
  }
  else if ((DAT_100a9920 & 1) == 0) {
    local_c = (float)_DAT_100a99ec * *(float *)(DAT_100a97f8 + 0xc) + local_c;
    if (*(float *)(DAT_100a983c + 0xc) < local_c) {
      local_c = *(float *)(DAT_100a983c + 0xc);
    }
    if (local_c < -*(float *)(DAT_100a9884 + 0xc)) {
      local_c = -*(float *)(DAT_100a9884 + 0xc);
    }
  }
  else {
LAB_10024266:
    iVar4 = (*DAT_100a50b8)();
    if (iVar4 == 0) goto LAB_10024287;
    *(float *)(param_2 + 0x18) =
         *(float *)(param_2 + 0x18) - (float)_DAT_100a99ec * *(float *)(DAT_100a98f4 + 0xc);
  }
  if ((iVar2 != 0) || (iVar3 != 0)) {
    FUN_10023f80();
  }
LAB_100242af:
  (*DAT_100a507c)(&local_c);
  return;
}

