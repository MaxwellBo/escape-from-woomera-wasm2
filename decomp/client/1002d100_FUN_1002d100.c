
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002d100(float *param_1,float *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar7 = (int)param_1 - (int)param_2;
  iVar6 = 4;
  pfVar5 = param_2;
  fVar2 = _DAT_10059a18;
  fVar3 = _DAT_10059a18;
  do {
    fVar4 = *(float *)(iVar7 + (int)pfVar5) - *pfVar5;
    iVar6 = iVar6 + -1;
    fVar2 = fVar4 * fVar4 + fVar2;
    fVar4 = *(float *)(iVar7 + -4 + (int)(pfVar5 + 1)) + *pfVar5;
    fVar3 = fVar4 * fVar4 + fVar3;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  if (fVar3 < fVar2) {
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      *pfVar5 = -*pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  fVar2 = *param_1 * *param_2 +
          param_1[1] * param_2[1] + param_1[2] * param_2[2] + param_1[3] * param_2[3];
  if ((float)_DAT_100602c0 < fVar2 + (float)_DAT_10059a10) {
    if ((float)_DAT_10059a10 - fVar2 <= (float)_DAT_100602c0) {
      fVar10 = (float10)_DAT_10059a10 - (float10)param_3;
      fVar8 = (float10)param_3;
    }
    else {
      fVar8 = (float10)FUN_1004b4c0();
      fVar9 = (float10)fsin(fVar8);
      fVar10 = (float10)fsin(((float10)_DAT_10059a10 - (float10)param_3) * (float10)(float)fVar8);
      fVar10 = fVar10 / (float10)(float)fVar9;
      fVar8 = (float10)fsin((float10)(float)fVar8 * (float10)param_3);
      fVar8 = fVar8 / (float10)(float)fVar9;
    }
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      pfVar1 = (float *)((int)pfVar5 + iVar7);
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      *(float *)((int)param_4 + (-4 - (int)param_2) + (int)pfVar5) =
           (float)(fVar8 * (float10)fVar2 + fVar10 * (float10)*pfVar1);
    } while (iVar6 != 0);
    return;
  }
  *param_4 = -param_2[1];
  param_4[1] = *param_2;
  param_4[2] = -param_2[3];
  fVar10 = (float10)_DAT_10059a10;
  param_4[3] = param_2[2];
  iVar6 = 3;
  fVar10 = (float10)fsin((fVar10 - (float10)param_3) * (float10)_DAT_100602b8);
  fVar8 = (float10)fsin((float10)param_3 * (float10)_DAT_100602b8);
  pfVar5 = param_4;
  do {
    iVar6 = iVar6 + -1;
    *pfVar5 = (float)(fVar8 * (float10)*pfVar5 +
                     fVar10 * (float10)*(float *)(((int)param_1 - (int)param_4) + (int)pfVar5));
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  return;
}

