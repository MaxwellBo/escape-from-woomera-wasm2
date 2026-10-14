
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100200b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_100af200(*(int *)(param_1 + 4) + 0x50);
  fVar1 = *param_2 - *(float *)(*(int *)(param_1 + 4) + 8);
  fVar5 = param_2[1] - *(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar4 = SQRT(fVar1 * fVar1 + fVar5 * fVar5);
  fVar2 = _DAT_100dd5f8;
  fVar3 = _DAT_100dd5f8;
  if (fVar4 != _DAT_100dd5f8) {
    fVar4 = _DAT_100dd618 / fVar4;
    fVar2 = fVar1 * fVar4;
    fVar3 = fVar5 * fVar4;
  }
  if (*(float *)(DAT_10122044 + 0x28) * fVar2 + fVar3 * *(float *)(DAT_10122044 + 0x2c) <=
      *(float *)(param_1 + 0x1c0)) {
    return 0;
  }
  return 1;
}

