
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100afec0(float param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_100ae770(param_1);
  fVar1 = (float)fVar2;
  fVar2 = FUN_100ae770(fVar1);
  fVar3 = (float10)fVar1 - fVar2;
  if (param_3 < _DAT_100dd5f8) {
    param_3 = -param_3;
  }
  if ((float10)_DAT_100de530 <= fVar3) {
    if ((float10)_DAT_100ddaec < fVar3) {
      fVar3 = fVar3 - (float10)_DAT_100ddae8;
    }
  }
  else {
    fVar3 = fVar3 + (float10)_DAT_100ddae8;
  }
  if ((float10)param_3 < fVar3) {
    return fVar2 + (float10)param_3;
  }
  if (fVar3 < -(float10)param_3) {
    return fVar2 - (float10)param_3;
  }
  return (float10)fVar1;
}

