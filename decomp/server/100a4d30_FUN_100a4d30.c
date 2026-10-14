
void __fastcall FUN_100a4d30(int param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0xbf800000;
  if (*(int *)(param_1 + 0x128) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 2;
  }
  *(code **)(param_1 + 0x7c) = CTriggerCounter::CounterUse;
  return;
}

