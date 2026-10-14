
void __fastcall FUN_100a6ef0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_10121db8 + 0x1c))();
  if (iVar1 != 0) {
    (*DAT_10121e60)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  FUN_100a3270(param_1);
  *(code **)(param_1 + 0x78) = CTriggerSave::SaveTouch;
  return;
}

