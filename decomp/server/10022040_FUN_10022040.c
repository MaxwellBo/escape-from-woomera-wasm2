
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10022040(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_5 - param_2;
  fVar2 = param_6 - param_3;
  fVar4 = param_7 - param_4;
  fVar3 = (param_8 * param_8 + param_9 * param_9 + param_10 * param_10) - param_11 * param_11;
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4;
  if (fVar3 == _DAT_100dd5f8) {
    fVar3 = fVar5 / (param_11 * param_11);
  }
  else {
    fVar5 = SQRT(fVar5 * fVar3 * _DAT_100e1128) / (fVar3 + fVar3);
    fVar3 = -fVar5;
    if ((_DAT_100dd5f8 <= fVar5) && (fVar5 <= fVar3)) {
      fVar3 = fVar5;
    }
  }
  if (fVar3 < (float)_DAT_100dfb80) {
    fVar3 = _DAT_100de1f0;
  }
  if ((float)_DAT_100de4a0 < fVar3) {
    fVar3 = _DAT_100dd63c;
  }
  fVar1 = param_8 * fVar3 + fVar1;
  fVar2 = param_9 * fVar3 + fVar2;
  fVar4 = fVar3 * param_10 + fVar4;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4);
  if (fVar3 == _DAT_100dd5f8) {
    param_3 = 0.0;
    param_4 = 1.0;
    fVar1 = _DAT_100dd5f8;
  }
  else {
    fVar3 = _DAT_100dd618 / fVar3;
    fVar1 = fVar1 * fVar3;
    param_3 = fVar2 * fVar3;
    param_4 = fVar4 * fVar3;
  }
  *param_1 = fVar1 * param_11;
  param_1[1] = param_3 * param_11;
  param_1[2] = param_4 * param_11;
  return;
}

