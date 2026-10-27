
void __fastcall FUN_100629c0(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x1e0) = 0x43480000;
  param_1[0x1d] = (int)CMortar::MortarExplode;
  FUN_10019680((int)param_1);
  (**(code **)(*param_1 + 0x2c))();
  return;
}

