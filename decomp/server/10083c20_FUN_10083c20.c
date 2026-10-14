
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083c20(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)_DAT_100de1f8);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)_DAT_100de1f8);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)_DAT_100de1f8);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)_DAT_100de1f8);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)_DAT_100de1f8);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)_DAT_100de1f8);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = (float)((float10)fVar4 * (float10)fVar2 * fVar6 - (float10)fVar5 * (float10)fVar1);
    param_2[2] = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar3 * fVar1;
    param_3[1] = (float)((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1);
    param_3[2] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = -fVar2;
    param_4[1] = fVar4 * fVar3;
    param_4[2] = fVar5 * fVar3;
  }
  return;
}

