
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100b1010(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*param_2 - (float10)*param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar4 = SQRT((float10)fVar2 * (float10)fVar2 + fVar3 * fVar3);
  if (fVar4 == (float10)_DAT_100dd5f8) {
    fVar3 = (float10)_DAT_100dd5f8;
    fVar4 = (float10)_DAT_100dd5f8;
  }
  else {
    fVar1 = (float)((float10)_DAT_100dd618 / fVar4);
    fVar3 = fVar3 * (float10)fVar1;
    fVar4 = (float10)fVar1 * (float10)fVar2;
  }
  return (float10)*param_3 * fVar3 + fVar4 * (float10)param_3[1];
}

