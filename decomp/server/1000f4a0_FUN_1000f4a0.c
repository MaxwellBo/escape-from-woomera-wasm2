
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f4a0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  float in_stack_ffffffc4;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float afStack_c [3];
  
  fVar7 = (float10)(*DAT_10121f74)();
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(param_1 + 0x310) = (float)(fVar7 + (float10)*DAT_10122044);
  fStack_18 = *(float *)(iVar2 + 8);
  uStack_14 = *(undefined4 *)(iVar2 + 0xc);
  fStack_10 = *(float *)(iVar2 + 0x10) + _DAT_100ddaec;
  fStack_24 = DAT_10121dd8;
  fStack_20 = DAT_10121ddc;
  fStack_1c = DAT_10121de0;
  if (*(int *)(param_1 + 0x2fc) == 0) {
    fStack_24 = *(float *)(iVar2 + 0x44);
    fStack_20 = *(float *)(iVar2 + 0x48);
    fStack_1c = *(float *)(iVar2 + 0x4c);
  }
  else {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x168));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      fVar9 = 2.543244e-29;
      fVar7 = (float10)(*DAT_10121f74)();
      fVar13 = (float)fVar7;
      fVar11 = 2.5432483e-29;
      iVar2 = FUN_10019460((uint *)(param_1 + 0x168));
      FUN_10003850(&stack0xffffffc4,(undefined4 *)(*(int *)(iVar2 + 4) + 8));
      pfVar3 = (float *)FUN_10010510(afStack_c,*(int *)(param_1 + 4),&fStack_18,in_stack_ffffffc4,
                                     fVar9,fVar11,fVar13);
      fStack_24 = *pfVar3;
      fStack_20 = pfVar3[1];
      fStack_1c = pfVar3[2];
    }
    if (((fStack_24 == DAT_10121dd8) && (fStack_20 == DAT_10121ddc)) && (fStack_1c == DAT_10121de0))
    {
      iVar2 = *(int *)(param_1 + 4);
      fStack_24 = *(float *)(iVar2 + 0x44);
      fStack_20 = *(float *)(iVar2 + 0x48);
      fStack_1c = *(float *)(iVar2 + 0x4c);
    }
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  iVar2 = (*DAT_10121f70)();
  iVar2 = iVar2 + 100;
  uVar12 = 0;
  uVar10 = 0x3f4ccccd;
  uVar8 = 0x3f800000;
  iVar4 = (*DAT_10121f70)();
  FUN_10094b20((&PTR_s_gonarch_gon_sack1_wav_10103464)[iVar4],uVar5,1,
               (&PTR_s_gonarch_gon_sack1_wav_10103464)[iVar4],uVar8,uVar10,uVar12,iVar2);
  FUN_10003850(&stack0xffffffbc,&fStack_18);
  uVar5 = FUN_1000fe80(param_1);
  piVar6 = FUN_10010980(uVar5);
  fStack_24 = 0.0;
  *(undefined4 *)(piVar6[1] + 0x11c) = 0x3f800000;
  fStack_20 = 0.0;
  fStack_1c = 1.0;
  FUN_100106a0(&fStack_18,&fStack_24,DAT_10121cc4,0x18);
  return;
}

