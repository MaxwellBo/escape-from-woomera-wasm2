
void __fastcall FUN_100a3cb0(int param_1)

{
  FUN_10098fc0(*(int *)(param_1 + 4));
  FUN_100a3270(param_1);
  FUN_10019680(param_1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x43480000;
  *(undefined4 *)(param_1 + 300) = 0x43160000;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
    FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
    *(code **)(param_1 + 0x7c) = CBaseTrigger::ToggleUse;
  }
  return;
}

