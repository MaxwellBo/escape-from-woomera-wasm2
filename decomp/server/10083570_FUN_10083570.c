
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083570(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  float afStack_18 [6];
  
  afStack_18[0] = *param_2 - *param_1;
  afStack_18[1] = param_2[1] - param_1[1];
  afStack_18[2] = param_2[2] - param_1[2];
  fVar4 = (float10)FUN_10084210(afStack_18);
  param_2 = (float *)0x0;
  fVar1 = _DAT_100dd5f8;
  while (fVar1 <= (float)fVar4) {
    iVar3 = 3;
    pfVar2 = param_1;
    do {
      iVar3 = iVar3 + -1;
      *(float *)((int)afStack_18 + (8 - (int)param_1) + (int)(pfVar2 + 1)) =
           (float)param_2 * *(float *)(((int)afStack_18 - (int)param_1) + (int)pfVar2) + *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
    lVar5 = __ftol();
    (**(code **)(DAT_10126a38 + 0x4f558))(afStack_18 + 3,param_3,param_4,0,(int)lVar5);
    param_2 = (float *)((float)param_2 + _DAT_100de4ac);
    fVar1 = (float)param_2;
  }
  return;
}

