
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10076620(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  (**(code **)(*param_1 + 0x2c))();
  if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    (*DAT_10121efc)(1,s_func_train___s__has_no_target_10113f1c,
                    *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  }
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x1e0) == _DAT_100dd5f8) {
    *(undefined4 *)(iVar1 + 0x1e0) = 0x40000000;
  }
  else if (*(int *)(iVar1 + 0x1e0) == -0x40800000) {
    *(undefined4 *)(iVar1 + 0x1e0) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = param_1[1];
  FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  bVar2 = (float)param_1[0x58] == _DAT_100dd5f8;
  param_1[0x5c] = 0;
  if (bVar2) {
    param_1[0x58] = 0x3f59999a;
  }
  return;
}

