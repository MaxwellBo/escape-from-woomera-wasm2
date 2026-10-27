
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083e00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)_DAT_100de1f8);
  fVar1 = (float)fVar6;
  fVar7 = (float10)fcos((float10)param_1[1] * (float10)_DAT_100de1f8);
  fVar6 = (float10)fsin((float10)*param_1 * (float10)_DAT_100de1f8);
  fVar2 = (float)fVar6;
  fVar6 = (float10)fcos((float10)*param_1 * (float10)_DAT_100de1f8);
  fVar3 = (float)fVar6;
  fVar4 = param_1[2];
  fVar6 = (float10)_DAT_100de1f8;
  fVar8 = (float10)fsin((float10)fVar4 * fVar6);
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  fVar5 = (float)fVar8;
  fVar6 = (float10)fcos((float10)fVar4 * fVar6);
  fVar4 = (float)fVar6;
  *param_2 = (float)((float10)fVar3 * fVar7);
  param_2[1] = fVar3 * fVar1;
  param_2[2] = -fVar2;
  param_2[4] = (float)((float10)fVar5 * (float10)fVar2 * fVar7 - (float10)fVar4 * (float10)fVar1);
  param_2[5] = (float)((float10)fVar4 * fVar7 + (float10)fVar5 * (float10)fVar2 * (float10)fVar1);
  param_2[6] = fVar5 * fVar3;
  param_2[8] = (float)((float10)fVar5 * (float10)fVar1 + (float10)fVar4 * (float10)fVar2 * fVar7);
  param_2[9] = (float)((float10)fVar4 * (float10)fVar2 * (float10)fVar1 - (float10)fVar5 * fVar7);
  param_2[10] = fVar4 * fVar3;
  return;
}

