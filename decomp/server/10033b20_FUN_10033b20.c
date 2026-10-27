
void __thiscall FUN_10033b20(CEnvFog *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1001a170(param_1,param_4);
  if (iVar1 != 0) {
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      CEnvFog::TurnOff(param_1);
      return;
    }
    CEnvFog::TurnOn(param_1);
  }
  return;
}

