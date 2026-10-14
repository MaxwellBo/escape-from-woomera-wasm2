
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009f950(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1[0x33] != 0) {
    iVar2 = param_1[1];
    iVar3 = *(int *)(param_1[0x33] + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(float *)(*(int *)(param_1[0x33] + 4) + 8) =
         *(float *)(param_1[1] + 0x160) + *(float *)(*(int *)(param_1[0x33] + 4) + 8);
  }
  if (param_1[0x32] != 0) {
    iVar2 = param_1[1];
    iVar3 = *(int *)(param_1[0x35] + 4);
    fStack_24 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
    fStack_14 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
    fStack_1c = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
    fVar1 = SQRT(fStack_24 * fStack_24 + fStack_14 * fStack_14 + fStack_1c * fStack_1c);
    if (fVar1 == _DAT_100dd5f8) {
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fStack_24 = fVar1 * fStack_24;
      fStack_20 = fStack_14 * fVar1;
      fStack_1c = fStack_1c * fVar1;
    }
    FUN_100ae8d0(&fStack_18,&fStack_24,*(float *)(iVar2 + 0x1bc));
    iVar2 = param_1[1];
    fVar1 = *(float *)(iVar2 + 0x160);
    fStack_c = fStack_18 * fVar1;
    fStack_8 = fStack_14 * fVar1;
    fStack_24 = fStack_c + *(float *)(iVar2 + 8);
    fStack_20 = fStack_8 + *(float *)(iVar2 + 0xc);
    fStack_1c = fVar1 * fStack_10 + *(float *)(iVar2 + 0x10);
    iVar2 = *(int *)(param_1[0x32] + 4);
    *(float *)(iVar2 + 8) = fStack_24;
    *(float *)(iVar2 + 0xc) = fStack_20;
    *(float *)(iVar2 + 0x10) = fStack_1c;
  }
  if (param_1[0x34] != 0) {
    iVar2 = param_1[1];
    iVar3 = *(int *)(param_1[0x35] + 4);
    fStack_24 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
    fStack_8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
    fStack_1c = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
    fVar1 = SQRT(fStack_24 * fStack_24 + fStack_8 * fStack_8 + fStack_1c * fStack_1c);
    if (fVar1 == _DAT_100dd5f8) {
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fStack_24 = fVar1 * fStack_24;
      fStack_20 = fStack_8 * fVar1;
      fStack_1c = fStack_1c * fVar1;
    }
    FUN_100ae860(&fStack_c,&fStack_24,*(float *)(iVar2 + 0x1bc));
    iVar2 = param_1[1];
    iVar3 = *(int *)(param_1[0x34] + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = *(int *)(param_1[0x34] + 4);
    *(float *)(iVar2 + 0x50) = fStack_c;
    *(float *)(iVar2 + 0x54) = fStack_8;
    *(undefined4 *)(iVar2 + 0x58) = uStack_4;
  }
  iVar2 = param_1[1];
  *(float *)(iVar2 + 0x1bc) =
       *(float *)(iVar2 + 0x1b8) * (float)_DAT_100dfb80 + *(float *)(iVar2 + 0x1bc);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

