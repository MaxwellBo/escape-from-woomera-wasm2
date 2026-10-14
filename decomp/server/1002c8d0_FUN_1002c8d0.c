
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002c8d0(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = (*DAT_10121e18)(*(undefined4 *)(param_1[1] + 0xb4));
  param_1[0x2f] = (int)((float)iVar1 - _DAT_100dd618);
  if ((*(int *)(param_1[1] + 0x1cc) == 0) || ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0)) {
    FUN_1002cd00(param_1);
  }
  else {
    FUN_1002cce0((int)param_1);
  }
  iVar1 = param_1[1];
  if ((*(float *)(iVar1 + 0x54) != _DAT_100dd5f8) && (*(float *)(iVar1 + 0x58) == _DAT_100dd5f8)) {
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1[1] + 0x54) = 0;
  }
  return;
}

