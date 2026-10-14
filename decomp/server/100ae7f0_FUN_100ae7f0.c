
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100ae7f0(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 - (float10)param_2;
  if (param_1 <= param_2) {
    if (fVar1 <= (float10)_DAT_100de530) {
      fVar1 = fVar1 + (float10)_DAT_100ddae8;
    }
  }
  else if ((float10)_DAT_100ddaec <= fVar1) {
    return fVar1 - (float10)_DAT_100ddae8;
  }
  return fVar1;
}

