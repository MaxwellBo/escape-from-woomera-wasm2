
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10052370(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_8;
  
  if (*(int *)(param_1[1] + 0x108) == 5) {
    fVar2 = (float10)FUN_100522f0();
    fStack_8 = 0.0;
    iVar1 = (**(code **)(*param_1 + 0x160))();
    if (param_1[0x74] != iVar1) {
      if (_DAT_100e45b0 <= (float)fVar2) {
        if (_DAT_100ddacc < (float)fVar2) {
          fStack_8 = -45.0;
        }
      }
      else {
        fStack_8 = 45.0;
      }
    }
    fVar2 = FUN_100afe80(fStack_8,*(float *)(param_1[1] + 0x50),22.0);
    *(float *)(param_1[1] + 0x50) = (float)fVar2;
  }
  return (float10)_DAT_100dd5f8;
}

