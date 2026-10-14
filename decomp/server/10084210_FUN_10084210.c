
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10084210(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != _DAT_100dd5f8) {
    fVar1 = _DAT_100dd618 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}

