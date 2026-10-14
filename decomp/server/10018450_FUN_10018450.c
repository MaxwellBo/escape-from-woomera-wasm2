
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10018450(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  uVar1 = *(uint *)(param_1[1] + 0x1a0);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      param_1[0x1d] = (int)CEnvSpark::SparkThink;
    }
    else if ((uVar1 & 0x40) == 0) {
      param_1[0x1f] = (int)CEnvSpark::SparkStart;
    }
    else {
      param_1[0x1d] = (int)CEnvSpark::SparkThink;
      param_1[0x1f] = (int)CEnvSpark::SparkStop;
    }
  }
  else {
    param_1[0x1f] = (int)CEnvSpark::SparkCyclic;
  }
  if (param_1[0x1d] != 0) {
    iVar2 = *param_1;
    fVar3 = (float10)(*DAT_10121f74)(0,0x3fc00000);
    (**(code **)(iVar2 + 8))((float)(fVar3 + (float10)_DAT_100dfb80));
    if ((float)param_1[0x2e] <= _DAT_100dd5f8) {
      param_1[0x2e] = 0x3fc00000;
    }
  }
  (**(code **)(*param_1 + 0x2c))();
  return;
}

