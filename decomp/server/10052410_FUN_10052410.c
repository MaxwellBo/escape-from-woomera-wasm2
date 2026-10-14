
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10052410(int *param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float fStack_8;
  
  if (*(int *)(param_1[1] + 0x108) == 5) {
    fVar2 = FUN_10060350((int)param_1);
    fStack_8 = 0.0;
    iVar1 = (**(code **)(*param_1 + 0x160))();
    if (param_1[0x74] != iVar1) {
      if (_DAT_100e45b0 <= (float)fVar2) {
        if (_DAT_100ddacc < (float)fVar2) {
          fStack_8 = -20.0;
        }
      }
      else {
        fStack_8 = 20.0;
      }
    }
    fVar2 = FUN_100afe80(fStack_8,*(float *)(param_1[1] + 0x58),22.0);
    *(float *)(param_1[1] + 0x58) = (float)fVar2;
  }
  FUN_10035c30(param_1,param_2);
  return;
}

