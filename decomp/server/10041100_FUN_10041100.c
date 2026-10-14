
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10041100(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = param_1[0x37];
  if ((*(int *)(*(int *)(iVar1 + 4) + 0x1c0) == 3) &&
     (-0x11 < *(int *)(*(int *)(iVar1 + 4) + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    fVar2 = FUN_100ae400();
    fVar3 = (float10)_DAT_100e5730;
    param_1[0x3e] = (int)(float)(fVar2 + fVar3);
    param_1[0x3f] = (int)(float)(fVar2 + fVar3);
    return;
  }
  if (*(int *)(iVar1 + 0x534 + param_1[0x41] * 4) < 2) {
    (**(code **)(*param_1 + 0x174))();
    fVar3 = FUN_100ae400();
    *(float *)(param_1[0x37] + 700) = (float)(fVar3 + (float10)_DAT_100dd648);
    return;
  }
  *(undefined4 *)(iVar1 + 0x314) = 0x1c2;
  param_1[0x4c] = 1;
  *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) =
       *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) + -2;
  FUN_10041710(param_1);
  param_1[0x2c] = 0;
  fVar3 = FUN_100ae400();
  param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100dd628);
  fVar3 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar3 + (float10)_DAT_100dd608);
  return;
}

