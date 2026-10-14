
void __fastcall FUN_100a5fd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) == DAT_10121dd8) && (*(float *)(iVar1 + 0x54) == DAT_10121ddc)) &&
     (*(float *)(iVar1 + 0x58) == DAT_10121de0)) {
    *(undefined4 *)(iVar1 + 0x54) = 0x43b40000;
  }
  FUN_100a3270(param_1);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  }
  *(code **)(param_1 + 0x7c) = CBaseTrigger::ToggleUse;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

