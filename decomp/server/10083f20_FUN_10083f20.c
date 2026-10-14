
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10083f20(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  FUN_10083ee0(param_1);
  FUN_10083ee0(param_2);
  iVar4 = 3;
  pfVar3 = param_2;
  do {
    fVar1 = *(float *)(((int)param_1 - (int)param_2) + (int)pfVar3);
    fVar2 = *pfVar3 - fVar1;
    if (fVar2 <= _DAT_100ddaec) {
      if (fVar2 < _DAT_100de530) {
        fVar2 = fVar2 + _DAT_100ddae8;
      }
    }
    else {
      fVar2 = fVar2 - _DAT_100ddae8;
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
    *(float *)((int)param_3 + (-4 - (int)param_2) + (int)pfVar3) = fVar2 * param_4 + fVar1;
  } while (iVar4 != 0);
  FUN_10083ee0(param_3);
  return;
}

