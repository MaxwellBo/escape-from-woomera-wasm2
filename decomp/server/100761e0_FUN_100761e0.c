
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100761e0(float param_1)

{
  float10 fVar1;
  
  if ((DAT_101137d0 & (uint)param_1) == DAT_101137d0) {
    (*DAT_10121efc)(1,s_NaN_error_during_Fix__10113ee8);
    return (float10)param_1;
  }
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)_DAT_100dd5f8) {
    do {
      fVar1 = fVar1 + (float10)_DAT_100ddae8;
    } while (fVar1 < (float10)_DAT_100dd5f8);
  }
  if ((float10)_DAT_100ddae8 < fVar1) {
    do {
      fVar1 = fVar1 - (float10)_DAT_100ddae8;
    } while ((float10)_DAT_100ddae8 < fVar1);
  }
  return fVar1;
}

