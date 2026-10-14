
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001fff0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_100af200(*(int *)((int)this + 4) + 0x50);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 8) - *(float *)(*(int *)((int)this + 4) + 8);
  fVar5 = *(float *)(*(int *)(param_1 + 4) + 0xc) - *(float *)(*(int *)((int)this + 4) + 0xc);
  fVar4 = SQRT(fVar1 * fVar1 + fVar5 * fVar5);
  fVar2 = _DAT_100dd5f8;
  fVar3 = _DAT_100dd5f8;
  if (fVar4 != _DAT_100dd5f8) {
    fVar4 = _DAT_100dd618 / fVar4;
    fVar2 = fVar1 * fVar4;
    fVar3 = fVar5 * fVar4;
  }
  if (*(float *)(DAT_10122044 + 0x28) * fVar2 + fVar3 * *(float *)(DAT_10122044 + 0x2c) <=
      *(float *)((int)this + 0x1c0)) {
    return 0;
  }
  return 1;
}

