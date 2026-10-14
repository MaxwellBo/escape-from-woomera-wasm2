
void __fastcall FUN_100747e0(int *param_1)

{
  FUN_100745f0((int)param_1);
  (**(code **)(*param_1 + 0x2c))();
  if (*(int *)(param_1[1] + 0x1cc) != 0) {
    FUN_10063390((int)param_1);
    param_1[0x37] = 0;
    param_1[0x1f] = (int)CFuncPlat::PlatUse;
    return;
  }
  FUN_10063390((int)param_1);
  param_1[0x37] = 1;
  return;
}

