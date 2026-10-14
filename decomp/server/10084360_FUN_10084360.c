
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084360(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = _DAT_100dd5f8;
  if ((param_1[1] == _DAT_100dd5f8) && (*param_1 == _DAT_100dd5f8)) {
    if (_DAT_100dd5f8 < param_1[2]) {
      *param_2 = _DAT_100de4b0;
      param_2[2] = 0.0;
      param_2[1] = fVar1;
      return;
    }
    *param_2 = _DAT_100ddb00;
    param_2[2] = 0.0;
    param_2[1] = fVar1;
    return;
  }
  fVar2 = (float10)fpatan((float10)param_1[1],(float10)*param_1);
  fVar2 = fVar2 * (float10)_DAT_100e4918;
  if (fVar2 < (float10)_DAT_100dd5f8) {
    fVar2 = fVar2 + (float10)_DAT_100ddae8;
  }
  fVar3 = (float10)fpatan((float10)param_1[2],
                          SQRT((float10)param_1[1] * (float10)param_1[1] +
                               (float10)*param_1 * (float10)*param_1));
  fVar3 = fVar3 * (float10)_DAT_100e4918;
  if (fVar3 < (float10)_DAT_100dd5f8) {
    fVar3 = fVar3 + (float10)_DAT_100ddae8;
  }
  *param_2 = (float)fVar3;
  param_2[2] = 0.0;
  param_2[1] = (float)fVar2;
  return;
}

