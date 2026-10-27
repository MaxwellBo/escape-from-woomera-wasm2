
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10045f20(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  fVar5 = ((_DAT_10064f40 + _DAT_10064f40) * (float)*(int *)(param_1 + 4)) /
          (float)*(int *)(param_1 + 8) + _DAT_10064f40;
  fVar6 = FUN_10044870();
  fVar6 = fVar6 - (float10)_DAT_100bc354;
  fVar7 = fVar6 + fVar6;
  if ((float10)_DAT_10059eb0 < fVar7) {
    fVar7 = (float10)_DAT_10059eb0;
  }
  fVar7 = (float10)_DAT_10059eb0 - fVar7;
  fVar7 = fVar7 * fVar7 * fVar7;
  fVar1 = (float)(((float10)_DAT_10059eb0 - fVar7) * (float10)_DAT_10064f7c);
  fVar8 = (float10)fsin((float10)_DAT_10064f40 * (float10)(float)fVar6 * (float10)_DAT_10064f78);
  fVar6 = (float10)_DAT_1006011c;
  fVar4 = (float10)_DAT_10064f40;
  param_2[2] = 0.5;
  fVar7 = ((float10)fVar5 - fVar7 * fVar4) + fVar8 * fVar6;
  fVar6 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  *param_2 = (float)(fVar6 * (float10)fVar1 + (float10)fVar2);
  param_2[1] = (float)(fVar7 * (float10)fVar1 + (float10)fVar3);
  return;
}

