
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100ae8d0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fcos((float10)param_3 * (float10)_DAT_100de1f8);
  fVar7 = (float10)fsin((float10)param_3 * (float10)_DAT_100de1f8);
  fVar5 = (_DAT_100dd618 - (float)fVar6) * *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[2];
  fVar4 = param_2[1];
  *param_1 = fVar5 * *param_2 + (float)fVar6;
  param_1[2] = (float)((float10)fVar5 * (float10)fVar3 - fVar7 * (float10)fVar4);
  param_1[1] = (float)(fVar7 * (float10)fVar2 + (float10)fVar5 * (float10)fVar1);
  return;
}

