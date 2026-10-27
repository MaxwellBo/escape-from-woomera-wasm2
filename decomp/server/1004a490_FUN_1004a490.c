
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1004a490(int *param_1)

{
  uint *puVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined3 extraout_var;
  float *pfVar6;
  float *pfVar7;
  float in_stack_ffffffb4;
  float in_stack_ffffffb8;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(byte *)(param_1[1] + 0x168) & 6) == 0) {
    return 0;
  }
  if ((float)param_1[0x33] != _DAT_100dd5f8) {
    param_1[0xd6] = 0;
    return 0;
  }
  if (*DAT_10122044 < (float)param_1[0xd0]) goto LAB_1004a940;
  puVar1 = (uint *)(param_1 + 0x58);
  iVar4 = FUN_10019460(puVar1);
  if (((*(uint *)(*(int *)(iVar4 + 4) + 0x1a4) & 0x200) == 0) &&
     (((iVar4 = FUN_10019460(puVar1), *(int *)(*(int *)(iVar4 + 4) + 0x1c0) == 0 ||
       (iVar4 = FUN_10019460(puVar1), *(int *)(*(int *)(iVar4 + 4) + 0x1c4) == -0x13)) &&
      (*(float *)(param_1[1] + 0xd8) < (float)param_1[0xac])))) {
    param_1[0xd6] = 0;
    return 0;
  }
  if ((*(byte *)(param_1[1] + 0x168) & 2) == 0) {
    iVar4 = FUN_10019460(puVar1);
    iVar4 = *(int *)(iVar4 + 4);
    piVar5 = (int *)FUN_10019460(puVar1);
    pfVar9 = &fStack_18;
    fVar8 = 2.6160397e-29;
    pfVar7 = (float *)(**(code **)(*piVar5 + 0x104))();
    fStack_8 = pfVar7[1] - *(float *)(iVar4 + 0xc);
    fStack_4 = pfVar7[2] - *(float *)(iVar4 + 0x10);
    fStack_24 = (*pfVar7 - *(float *)(iVar4 + 8)) + (float)param_1[0xaa];
    fStack_20 = fStack_8 + (float)param_1[0xab];
    fStack_1c = fStack_4 + (float)param_1[0xac];
    fStack_18 = fStack_24;
    fStack_14 = fStack_20;
    fStack_10 = fStack_1c;
    if ((*(byte *)(param_1 + 0x57) & 0x10) != 0) {
      iVar4 = param_1[1];
      fStack_c = fStack_24 - *(float *)(iVar4 + 8);
      fStack_8 = fStack_20 - *(float *)(iVar4 + 0xc);
      fStack_4 = fStack_1c - *(float *)(iVar4 + 0x10);
      iVar4 = FUN_10019460(puVar1);
      iVar4 = *(int *)(iVar4 + 4);
      fVar10 = SQRT(fStack_c * fStack_c + fStack_8 * fStack_8 + fStack_4 * fStack_4) / DAT_10126aac;
      fStack_18 = fVar10 * *(float *)(iVar4 + 0x20);
      fStack_14 = fVar10 * *(float *)(iVar4 + 0x24);
      fStack_24 = fStack_18 + fStack_24;
      fStack_20 = fStack_20 + fStack_14;
      fStack_1c = fStack_1c + fVar10 * *(float *)(iVar4 + 0x28);
      fStack_c = fStack_24;
      fStack_8 = fStack_20;
      fStack_4 = fStack_1c;
    }
  }
  else {
    pfVar9 = (float *)0x0;
    fVar8 = 2.615987e-29;
    iVar4 = (*DAT_10121f70)();
    if (iVar4 == 0) {
      fStack_24 = (float)param_1[0xaa];
      fStack_20 = (float)param_1[0xab];
      fStack_1c = (float)param_1[0xac];
    }
    else {
      iVar4 = FUN_10019460(puVar1);
      fVar10 = *(float *)(*(int *)(iVar4 + 4) + 0xcc);
      iVar4 = FUN_10019460(puVar1);
      fVar2 = *(float *)(*(int *)(iVar4 + 4) + 0xc);
      iVar4 = FUN_10019460(puVar1);
      fStack_24 = *(float *)(*(int *)(iVar4 + 4) + 8);
      fStack_20 = fVar2;
      fStack_1c = fVar10;
      fStack_c = fStack_24;
      fStack_8 = fVar2;
      fStack_4 = fVar10;
    }
  }
  bVar3 = FUN_10019450((uint *)(param_1 + 0xc2));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    pfVar9 = &fStack_24;
    fVar8 = 2.6161306e-29;
    iVar4 = FUN_10096eb0(param_1,pfVar9,256.0);
    if (iVar4 != 0) {
      fVar10 = *DAT_10122044 + _DAT_100dd618;
      param_1[0xd6] = 0;
      param_1[0xd0] = (int)fVar10;
    }
  }
  iVar4 = param_1[1];
  fVar10 = fStack_24 - *(float *)(iVar4 + 8);
  fVar2 = fStack_20 - *(float *)(iVar4 + 0xc);
  if (SQRT(fVar10 * fVar10 + fVar2 * fVar2) <= _DAT_100dd658) {
    fVar8 = *DAT_10122044 + _DAT_100dd618;
    param_1[0xd6] = 0;
    param_1[0xd0] = (int)fVar8;
    return 0;
  }
  if ((*(byte *)(iVar4 + 0x168) & 2) == 0) {
    fVar10 = DAT_10126aac;
    FUN_10003850(&stack0xffffffb4,&fStack_24);
    pfVar9 = &fStack_18;
    pfVar7 = (float *)(**(code **)(*param_1 + 0x214))();
    FUN_10044b60(&fStack_10,param_1[1],pfVar7,(float)pfVar9,in_stack_ffffffb4,in_stack_ffffffb8,
                 fVar8,fVar10);
    if (((fStack_10 == DAT_10121dd8) && (fStack_c == DAT_10121ddc)) && (fStack_8 == DAT_10121de0)) {
      param_1[0xd6] = 0;
      fVar8 = *DAT_10122044;
      goto LAB_1004a934;
    }
    param_1[0xd6] = 1;
    param_1[0xd3] = (int)fStack_10;
    param_1[0xd4] = (int)fStack_c;
    param_1[0xd5] = (int)fStack_8;
    fVar8 = *DAT_10122044 + (float)_DAT_100e0eb8;
  }
  else {
    FUN_10003850(&stack0xffffffb8,&fStack_24);
    pfVar7 = &fStack_18;
    pfVar6 = (float *)(**(code **)(*param_1 + 0x214))();
    FUN_100446d0(&fStack_10,param_1[1],pfVar6,(float)pfVar7,in_stack_ffffffb8,fVar8,(float)pfVar9);
    if (((fStack_10 != DAT_10121dd8) || (fStack_c != DAT_10121ddc)) || (fStack_8 != DAT_10121de0)) {
      param_1[0xd6] = 1;
      param_1[0xd3] = (int)fStack_10;
      param_1[0xd4] = (int)fStack_c;
      param_1[0xd5] = (int)fStack_8;
      param_1[0xd0] = (int)*DAT_10122044;
      return param_1[0xd6];
    }
    param_1[0xd6] = 0;
    fVar8 = *DAT_10122044;
LAB_1004a934:
    fVar8 = fVar8 + _DAT_100dd618;
  }
  param_1[0xd0] = (int)fVar8;
LAB_1004a940:
  return param_1[0xd6];
}

