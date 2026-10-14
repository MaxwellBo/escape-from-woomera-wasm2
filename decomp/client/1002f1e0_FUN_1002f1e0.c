
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002f1e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 extraout_ST0;
  longlong lVar4;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar3 = (float10)*(double *)(param_1 + 8) - (float10)*(double *)(param_1 + 0x10);
  fStack_10 = (float)fVar3;
  if (fVar3 < (float10)_DAT_10059a18) {
LAB_1002f477:
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  if (fStack_10 <= (float)_DAT_10059a10) {
    if (fStack_10 == _DAT_10059a18) goto LAB_1002f477;
  }
  else {
    fStack_10 = 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(iVar1 + 0x178) == *(int *)(param_1 + 0x20)) goto LAB_1002f477;
  if (*(int *)(param_1 + 0x1c) == 0) {
    fStack_c = *(float *)(param_2 + 0x70);
    fStack_8 = *(float *)(param_2 + 0x74);
    fStack_4 = *(float *)(param_2 + 0x78);
    fVar3 = FUN_100264c0(&fStack_c);
    *(float *)(param_1 + 0x40) = (float)(fVar3 * (float10)fStack_10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    fStack_c = *(float *)(iVar2 + 0xb48) - *(float *)(iVar1 + 0x188);
    fStack_8 = *(float *)(iVar2 + 0xb4c) - *(float *)(iVar1 + 0x18c);
    fStack_4 = *(float *)(iVar2 + 0xb50) - *(float *)(iVar1 + 400);
    *(undefined4 *)(iVar1 + 0x188) = *(undefined4 *)(iVar2 + 0xb48);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x18c) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb4c);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 400) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb50);
    fVar3 = FUN_100264c0(&fStack_c);
    *(float *)(param_1 + 0x40) = (float)fVar3;
    if ((fStack_10 <= _DAT_10059a18) || (fVar3 / (float10)fStack_10 < (float10)_DAT_1005c36c)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      fStack_c = 0.0;
      fStack_8 = 0.0;
      goto LAB_1002f359;
    }
  }
  if ((fStack_8 != _DAT_10059a18) || (fStack_c != _DAT_10059a18)) {
    fVar3 = (float10)fpatan((float10)fStack_8,(float10)fStack_c);
    *(float *)(*(int *)(param_1 + 0x38) + 0x184) = (float)(fVar3 * (float10)_DAT_10060200);
    if (_DAT_100601f4 < *(float *)(*(int *)(param_1 + 0x38) + 0x184)) {
      *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x184) = 0x43340000;
    }
    if (_DAT_100601f0 <= *(float *)(*(int *)(param_1 + 0x38) + 0x184)) {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x184) = 0xc3340000;
    return;
  }
LAB_1002f359:
  iVar1 = *(int *)(param_1 + 0x38);
  lVar4 = __ftol();
  fVar3 = extraout_ST0 - (float10)((int)lVar4 * 0x168);
  if ((float10)_DAT_100601f4 < fVar3) {
    fVar3 = fVar3 - (float10)_DAT_1006015c;
  }
  if (fVar3 < (float10)_DAT_100601f0) {
    fVar3 = fVar3 + (float10)_DAT_1006015c;
  }
  fVar3 = fVar3 * (float10)fStack_10;
  if (fStack_10 < (float)_DAT_10059cf0) {
    fVar3 = fVar3 * (float10)_DAT_1005acc8;
  }
  *(float *)(iVar1 + 0x184) = (float)(fVar3 + (float10)*(float *)(iVar1 + 0x184));
  iVar1 = *(int *)(param_1 + 0x38);
  lVar4 = __ftol();
  *(float *)(iVar1 + 0x184) = *(float *)(iVar1 + 0x184) - (float)((int)lVar4 * 0x168);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

