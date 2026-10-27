
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10025130(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  undefined4 unaff_ESI;
  float10 fVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  if (param_1[0x43] == 0) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 200;
  iVar1 = param_1[0x43] + -1;
  param_1[0x43] = iVar1;
  (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  CONCAT22((short)((uint)iVar1 >> 0x10),(short)param_1[0x49]),0,&DAT_10121dd8,
                  &DAT_10121dd8,0,0,iVar1,*(undefined4 *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)
                  ,0,0);
  FUN_1007c580((void *)param_1[0x37],5);
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_28 = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  fStack_2c = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  fStack_30 = *(float *)(iVar1 + 0x74) + *(float *)(iVar1 + 0x68);
  FUN_100af200(&fStack_30);
  fStack_30 = -fStack_30;
  fStack_24 = *(float *)(DAT_10122044 + 0x34) + *(float *)(DAT_10122044 + 0x34);
  fStack_20 = *(float *)(DAT_10122044 + 0x38) + *(float *)(DAT_10122044 + 0x38);
  fStack_1c = *(float *)(DAT_10122044 + 0x3c) + *(float *)(DAT_10122044 + 0x3c);
  pfVar2 = (float *)(**(code **)(*(int *)param_1[0x37] + 0x214))(auStack_c);
  fStack_1c = *pfVar2 - fStack_28;
  fStack_18 = pfVar2[1] - fStack_24;
  fStack_14 = pfVar2[2] - fStack_20;
  fStack_28 = *(float *)(DAT_10122044 + 0x28);
  fStack_24 = *(float *)(DAT_10122044 + 0x2c);
  fStack_20 = *(float *)(DAT_10122044 + 0x30);
  piVar3 = FUN_10024550();
  iVar1 = piVar3[1];
  *(float *)(iVar1 + 8) = fStack_1c;
  *(float *)(iVar1 + 0xc) = fStack_18;
  *(float *)(iVar1 + 0x10) = fStack_14;
  iVar1 = piVar3[1];
  *(undefined4 *)(iVar1 + 0x50) = unaff_ESI;
  *(float *)(iVar1 + 0x54) = fStack_30;
  *(float *)(iVar1 + 0x58) = fStack_2c;
  *(undefined4 *)(piVar3[1] + 0x198) = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
  if ((*(int *)(*(int *)(param_1[0x37] + 4) + 0x1c0) == 3) &&
     (-0x11 < *(int *)(*(int *)(param_1[0x37] + 4) + 0x1c4))) {
    fStack_1c = fStack_28 * _DAT_100e08e0;
    iVar1 = piVar3[1];
    fStack_18 = fStack_24 * _DAT_100e08e0;
    *(float *)(iVar1 + 0x20) = fStack_1c;
    fStack_14 = fStack_20 * _DAT_100e08e0;
    *(float *)(iVar1 + 0x24) = fStack_18;
    *(float *)(iVar1 + 0x28) = fStack_14;
    *(undefined4 *)(piVar3[1] + 0x1f8) = 0x447a0000;
  }
  else {
    fStack_1c = fStack_28 * _DAT_100de478;
    iVar1 = piVar3[1];
    fStack_18 = fStack_24 * _DAT_100de478;
    *(float *)(iVar1 + 0x20) = fStack_1c;
    fStack_14 = fStack_20 * _DAT_100de478;
    *(float *)(iVar1 + 0x24) = fStack_18;
    *(float *)(iVar1 + 0x28) = fStack_14;
    *(undefined4 *)(piVar3[1] + 0x1f8) = 0x44fa0000;
  }
  *(undefined4 *)(piVar3[1] + 100) = 0x41200000;
  if ((param_1[0x43] == 0) && (*(int *)(param_1[0x37] + param_1[0x41] * 4 + 0x534) < 1)) {
    FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
  }
  fVar4 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_100e1860);
  fVar4 = FUN_100ae400();
  param_1[0x3f] = (int)(float)(fVar4 + (float10)_DAT_100e1860);
  if (param_1[0x43] != 0) {
    fVar4 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100e08f0);
    return;
  }
  fVar4 = FUN_100ae400();
  param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100e1860);
  return;
}

