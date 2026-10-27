
int __fastcall FUN_1005d0b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  undefined3 extraout_var;
  int iVar6;
  float fVar7;
  float fVar8;
  float fStack_4;
  
  fVar8 = *(float *)(param_1 + 0x288);
  fVar7 = -NAN;
  fStack_4 = 8192.0;
  if (fVar8 == -NAN) {
    (*DAT_10121efc)(2,s_ERROR__PBestScent___has_empty_so_10111214);
  }
  else {
    do {
      pfVar5 = (float *)FUN_10095f40((int)fVar8);
      bVar4 = FUN_10095b80((int)pfVar5);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        iVar6 = *(int *)(param_1 + 4);
        fVar1 = *pfVar5 - *(float *)(iVar6 + 8);
        fVar2 = pfVar5[1] - *(float *)(iVar6 + 0xc);
        fVar3 = pfVar5[2] - *(float *)(iVar6 + 0x10);
        fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
        if (fVar1 < fStack_4) {
          fVar7 = fVar8;
          fStack_4 = fVar1;
        }
      }
      fVar8 = pfVar5[7];
    } while (fVar8 != -NAN);
    if (-1 < (int)fVar7) {
      iVar6 = FUN_10095f40((int)fVar7);
      return iVar6;
    }
  }
  return 0;
}

