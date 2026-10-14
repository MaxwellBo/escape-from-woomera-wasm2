
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10052270(float *param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  if ((param_1[2] == _DAT_100dd5f8) && (*param_1 == _DAT_100dd5f8)) {
    return (float10)_DAT_100dd5f8;
  }
  fpatan((float10)param_1[2],
         SQRT((float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1]));
  lVar2 = __ftol();
  fVar1 = (float10)(int)lVar2;
  if (fVar1 < (float10)_DAT_100dd5f8) {
    fVar1 = fVar1 + (float10)_DAT_100ddae8;
  }
  return fVar1;
}

