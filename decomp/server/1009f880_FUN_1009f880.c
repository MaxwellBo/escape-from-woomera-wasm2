
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009f880(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)));
  param_1[0x32] = iVar1;
  iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1d0)));
  param_1[0x33] = iVar1;
  iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1ec)));
  param_1[0x34] = iVar1;
  iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1d4)));
  param_1[0x35] = iVar1;
  *(undefined4 *)(param_1[1] + 0x1bc) = 0;
  if (*(float *)(param_1[1] + 0x1b8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1b8) = 0x41f00000;
  }
  (**(code **)(*param_1 + 8))(0x3f800000);
  return;
}

