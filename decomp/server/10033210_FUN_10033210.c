
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10033210(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0x164) = 0;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = 0x41200000;
  }
  return;
}

