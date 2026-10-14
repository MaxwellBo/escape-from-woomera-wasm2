
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002d8c0(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  if ((float)param_1[0x37] == _DAT_100dd5f8) {
    param_1[0x37] = 0x41c80000;
  }
  FUN_10098fc0(param_1[1]);
  if (*(int *)(param_1[1] + 0x114) == 0) {
    uVar1 = (*DAT_10121e18)(param_1[0x35]);
    *(undefined4 *)(param_1[1] + 0x114) = uVar1;
  }
  return;
}

