
int __fastcall FUN_1005cfe0(int *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  undefined3 extraout_var;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fStack_10;
  undefined1 auStack_c [12];
  
  fVar7 = (float)param_1[0xa2];
  fVar6 = -NAN;
  fStack_10 = 8192.0;
  if (fVar7 == -NAN) {
    (*DAT_10121efc)(2,s_ERROR__monster__s_has_no_audible_101111e8,
                    *(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98));
  }
  else {
    do {
      pfVar3 = (float *)FUN_10095f40((int)fVar7);
      if ((pfVar3 != (float *)0x0) &&
         (bVar2 = FUN_10095b70((int)pfVar3), CONCAT31(extraout_var,bVar2) != 0)) {
        pfVar4 = (float *)(**(code **)(*param_1 + 0x100))(auStack_c);
        fVar1 = SQRT((pfVar3[1] - pfVar4[1]) * (pfVar3[1] - pfVar4[1]) +
                     (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4) +
                     (pfVar3[2] - pfVar4[2]) * (pfVar3[2] - pfVar4[2]));
        if (fVar1 < fStack_10) {
          fVar6 = fVar7;
          fStack_10 = fVar1;
        }
      }
      fVar7 = pfVar3[7];
    } while (fVar7 != -NAN);
    if (-1 < (int)fVar6) {
      iVar5 = FUN_10095f40((int)fVar6);
      return iVar5;
    }
  }
  return 0;
}

