
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10083b20(float *param_1,float *param_2,float *param_3,float *param_4)

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
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2 * fVar6);
    param_3[1] = (float)(((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1)
                        * (float10)_DAT_100df2b0);
    param_3[2] = fVar4 * fVar3 * _DAT_100df2b0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

