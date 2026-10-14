
void __fastcall FUN_100a34c0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_100a3270((int)param_1);
  param_1[0x1e] = (int)CTriggerHurt::HurtTouch;
  if (*(int *)(param_1[1] + 0x1cc) == 0) {
    param_1[0x1f] = 0;
  }
  else {
    param_1[0x1f] = (int)CBaseTrigger::ToggleUse;
  }
  if ((param_1[0x55] & 0x40000U) != 0) {
    iVar1 = *param_1;
    param_1[0x1d] = (int)CTriggerHurt::RadiationThink;
    fVar2 = (float10)(*DAT_10121f74)(0,0x3f000000);
    (**(code **)(iVar1 + 8))((float)fVar2);
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
    *(undefined4 *)(param_1[1] + 0x10c) = 0;
  }
  FUN_100afe10((int)param_1,param_1[1] + 8);
  return;
}

