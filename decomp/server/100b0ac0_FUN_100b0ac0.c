
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b0ac0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  
  local_8 = param_2[1];
  fVar1 = param_2[2];
  local_c = *param_2;
  if (local_c <= *param_3) {
    if (-*param_3 <= local_c) {
      local_c = 0.0;
    }
    else {
      local_c = local_c + *param_3;
    }
  }
  else {
    local_c = local_c - *param_3;
  }
  if (local_8 <= param_3[1]) {
    if (-param_3[1] <= local_8) {
      local_8 = 0.0;
    }
    else {
      local_8 = local_8 + param_3[1];
    }
  }
  else {
    local_8 = local_8 - param_3[1];
  }
  if (fVar1 <= param_3[2]) {
    fVar2 = _DAT_100dd5f8;
    if (fVar1 < -param_3[2]) {
      fVar2 = fVar1 + param_3[2];
    }
  }
  else {
    fVar2 = fVar1 - param_3[2];
  }
  fVar1 = SQRT(local_c * local_c + local_8 * local_8 + fVar2 * fVar2);
  if (fVar1 != _DAT_100dd5f8) {
    fVar1 = _DAT_100dd618 / fVar1;
    *param_1 = fVar1 * local_c;
    param_1[1] = fVar1 * local_8;
    param_1[2] = fVar1 * fVar2;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 1.0;
  return;
}

