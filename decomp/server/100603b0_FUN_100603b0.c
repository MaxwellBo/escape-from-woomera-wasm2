
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_100603b0(void *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  undefined4 local_4;
  
  fVar3 = FUN_100ae770(*(float *)(*(int *)((int)param_1 + 4) + 0x54));
  fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0xac);
  if (fVar3 == (float10)fVar1) {
    return (float10)_DAT_100dd5f8;
  }
  fVar2 = (float)(int)param_2 * *(float *)(DAT_10122044 + 4) * _DAT_100dd63c;
  param_2 = (float)((float10)fVar1 - fVar3);
  if ((float10)fVar1 <= fVar3) {
    if (param_2 <= _DAT_100de530) {
      param_2 = param_2 + _DAT_100ddae8;
    }
  }
  else if (_DAT_100ddaec <= param_2) {
    param_2 = param_2 - _DAT_100ddae8;
  }
  if (param_2 <= _DAT_100dd5f8) {
    fVar1 = -fVar2;
    if (param_2 < -fVar2) goto LAB_1006047c;
  }
  else {
    fVar1 = fVar2;
    if (fVar2 < param_2) goto LAB_1006047c;
  }
  fVar1 = param_2;
LAB_1006047c:
  param_2 = fVar1;
  fVar3 = FUN_100ae770((float)((float10)param_2 + fVar3));
  *(float *)(*(int *)((int)param_1 + 4) + 0x54) = (float)fVar3;
  if ((*(uint *)((int)param_1 + 0x2b8) & 0x400) != 0) {
    local_4 = *(float *)(*(int *)((int)param_1 + 4) + 0xac) -
              *(float *)(*(int *)((int)param_1 + 4) + 0x54);
    if (_DAT_100ddaec < local_4) {
      local_4 = local_4 - _DAT_100ddae8;
    }
    if (local_4 < _DAT_100de530) {
      local_4 = local_4 + _DAT_100ddae8;
    }
    FUN_10008360(param_1,0,local_4);
  }
  return (float10)param_2;
}

