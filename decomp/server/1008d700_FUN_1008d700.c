
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008d700(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  undefined3 extraout_var;
  int iVar10;
  float10 fVar11;
  longlong lVar12;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar7 = param_2;
  iVar9 = *param_2;
  if (iVar9 == 0x6d) {
    if (param_1[0x35] == 0) {
      fVar11 = FUN_1009a810((int)param_1);
      if (((float10)_DAT_100de4b0 < fVar11) && ((param_1[0x57] & 0x40000000U) == 0)) {
        param_1[0x78] = 4;
      }
      iVar9 = param_1[1];
      iVar10 = FUN_10019460((uint *)(param_1 + 0x5a));
      iVar10 = *(int *)(iVar10 + 4);
      fStack_4 = *(float *)(iVar10 + 0x10) - *(float *)(iVar9 + 0x10);
      fStack_8 = *(float *)(iVar10 + 0xc) - *(float *)(iVar9 + 0xc);
      fStack_c = *(float *)(iVar10 + 8) - *(float *)(iVar9 + 8);
      fVar11 = (float10)FUN_100afde0(&fStack_c);
      *(float *)(param_1[1] + 0xac) = (float)fVar11;
      iVar9 = *param_1;
      lVar12 = __ftol();
      (**(code **)(iVar9 + 0x128))((int)lVar12);
      return;
    }
    if ((param_1[0x57] & 0x40000000U) != 0) {
      return;
    }
    param_1[0x78] = 4;
    return;
  }
  if (iVar9 == 0x6f) {
    if ((param_1[0x9b] == 0) && ((param_1[0x57] & 0x40000000U) == 0)) {
      param_1[0x78] = 4;
    }
    iVar9 = (*DAT_10121f70)(0,0x1f);
    if (7 < iVar9) {
      return;
    }
    FUN_1008d450(param_1);
    return;
  }
  if (iVar9 != 0x72) {
    FUN_1009a1e0(param_1,param_2);
    return;
  }
  iVar9 = (*DAT_10121f70)(0,0x3f);
  if (iVar9 < 8) {
    FUN_1008d450(param_1);
  }
  bVar8 = FUN_10019450((uint *)(param_1 + 0x58));
  if (CONCAT31(extraout_var,bVar8) == 0) {
    param_1[0x57] = param_1[0x57] | 0x40000000;
    return;
  }
  pfVar2 = (float *)(param_1 + 0x9e);
  fVar3 = *pfVar2 - *(float *)(param_1[1] + 8);
  fVar4 = (float)param_1[0x9f] - *(float *)(param_1[1] + 0xc);
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if ((float)param_2[1] <= fVar3) {
    iVar9 = FUN_10019460((uint *)(param_1 + 0x5a));
    iVar9 = *(int *)(iVar9 + 4);
    fVar4 = *pfVar2 - *(float *)(iVar9 + 8);
    fVar6 = (float)param_1[0x9f] - *(float *)(iVar9 + 0xc);
    fVar5 = (float)param_1[0xa0] - *(float *)(iVar9 + 0x10);
    pfVar1 = (float *)(param_2 + 1);
    param_2 = (int *)fVar3;
    if (SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) <= *pfVar1 * (float)_DAT_100dd648)
    goto LAB_1008d845;
  }
  iVar9 = FUN_10019460((uint *)(param_1 + 0x5a));
  iVar9 = *(int *)(iVar9 + 4);
  *pfVar2 = *(float *)(iVar9 + 8);
  param_1[0x9f] = *(int *)(iVar9 + 0xc);
  param_1[0xa0] = *(int *)(iVar9 + 0x10);
  fVar3 = *pfVar2 - *(float *)(param_1[1] + 8);
  fVar4 = (float)param_1[0x9f] - *(float *)(param_1[1] + 0xc);
  param_2 = (int *)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  FUN_1005d300(param_1);
LAB_1008d845:
  if ((float)param_2 < (float)piVar7[1]) {
    if ((param_1[0x57] & 0x40000000U) == 0) {
      param_1[0x78] = 4;
    }
    FUN_1005d290((int)param_1);
    return;
  }
  if (((float)param_2 < _DAT_100ddb04) && (param_1[0xa1] != 0x3f)) {
    param_1[0xa1] = 0x3f;
    return;
  }
  if ((_DAT_100ddb00 <= (float)param_2) && (param_1[0xa1] != 0x40)) {
    param_1[0xa1] = 0x40;
    return;
  }
  return;
}

