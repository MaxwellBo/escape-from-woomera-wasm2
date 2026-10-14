
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a4250(int *param_1)

{
  if ((float)param_1[0x3a] == _DAT_100dd5f8) {
    param_1[0x3a] = 0x3e4ccccd;
  }
  FUN_100a3270((int)param_1);
  param_1[0x1e] = (int)CTriggerMultiple::MultiTouch;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

