
void __fastcall FUN_10019470(int *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 0xa0) != 0) {
    FUN_10062ba0((int)param_1);
  }
  if ((param_1[0x17] & 0x1000U) != 0) {
    FUN_100aecd0((int)param_1);
  }
  if (param_1[0x1c] == 0) {
    param_1[0x1c] = 1;
    FUN_100194c0((int)param_1);
    (**(code **)(*param_1 + 0x44))();
  }
  return;
}

