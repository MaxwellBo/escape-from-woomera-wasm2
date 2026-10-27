
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001fdd0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = SQRT(*(float *)((int)this + 8) * *(float *)((int)this + 8) +
               *(float *)((int)this + 4) * *(float *)((int)this + 4) +
               *(float *)this * *(float *)this);
  if (fVar3 == _DAT_100dd5f8) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    return;
  }
  fVar3 = _DAT_100dd618 / fVar3;
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = fVar3 * *(float *)this;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar3 * fVar1;
  return;
}

