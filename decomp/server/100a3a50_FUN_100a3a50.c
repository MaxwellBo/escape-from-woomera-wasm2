
void __fastcall FUN_100a3a50(int param_1)

{
  int iVar1;
  
  FUN_100a3270(param_1);
  iVar1 = *(int *)(param_1 + 4);
  *(code **)(param_1 + 0x78) = CTriggerHevCharge::ChargeTouch;
  *(code **)(param_1 + 0x74) = CTriggerHevCharge::AnnounceThink;
  if (*(int *)(iVar1 + 0x1cc) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    *(code **)(param_1 + 0x7c) = CBaseTrigger::ToggleUse;
  }
  if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

