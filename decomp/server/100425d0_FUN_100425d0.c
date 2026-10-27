
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100425d0(int *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  char *pcVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar6 = param_1[1];
  fVar2 = *(float *)(iVar6 + 0xf4);
  fVar3 = *(float *)(iVar6 + 0xf8);
  fVar4 = *(float *)(iVar6 + 0xfc);
  if (*(int *)(iVar6 + 0xb8) == 0) {
    if (*(int *)(iVar6 + 0x1cc) == 0) {
      (*DAT_10121efc)(4,s_No_model_specified_for_monster_g_1010d240,(double)*(float *)(iVar6 + 8),
                      (double)*(float *)(iVar6 + 0xc),(double)*(float *)(iVar6 + 0x10));
    }
    else {
      (*DAT_10121efc)();
    }
    *(int *)(param_1[1] + 0xb8) = (int)s_models_player_mdl_10105870 - *(int *)(DAT_10122044 + 0x98);
  }
  uVar12 = CONCAT44(unaff_EBP,unaff_ESI);
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98),uVar12);
  if (((fVar2 != DAT_10121dd8) || (fVar3 != DAT_10121ddc)) || (fVar4 != DAT_10121de0)) {
    fStack_18 = fVar2 * _DAT_100dd614;
    iVar6 = param_1[1];
    fStack_14 = fVar3 * _DAT_100dd614;
    fStack_c = -fStack_18;
    fStack_8 = -fStack_14;
    fStack_4 = -(fVar4 * _DAT_100dd614);
    fStack_10 = fVar4 * _DAT_100dd614;
    if ((*(byte *)(iVar6 + 0x1a0) & 8) == 0) {
      fStack_4 = 0.0;
      fStack_10 = fVar4;
    }
    pfVar11 = &fStack_18;
    pfVar10 = &fStack_c;
    goto LAB_10042852;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 8) == 0) {
    pcVar8 = s_models_player_mdl_10105870;
    pbVar7 = (byte *)(*(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
    pbVar5 = pbVar7;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1004279c:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100427a1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1004279c;
      pbVar5 = pbVar5 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_100427a1:
    if (iVar6 == 0) goto LAB_10042815;
    pcVar8 = s_models_holo_mdl_1010d230;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100427d0:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100427d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100427d0;
      pbVar7 = pbVar7 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_100427d5:
    if (iVar6 == 0) goto LAB_10042815;
    fStack_4 = 72.0;
    fStack_10 = 0.0;
  }
  else {
LAB_10042815:
    fStack_4 = 36.0;
    fStack_10 = -36.0;
  }
  pfVar11 = &fStack_c;
  pfVar10 = &fStack_18;
  fStack_8 = 16.0;
  fStack_c = 16.0;
  fStack_14 = -16.0;
  fStack_18 = -16.0;
  iVar6 = param_1[1];
LAB_10042852:
  FUN_100afdc0(iVar6,pfVar10,pfVar11);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  if (param_1[0xb4] == 0) {
    param_1[0xb4] = 0xf7;
  }
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  }
  param_1[0x70] = 0x3f000000;
  param_1[0x76] = 0;
  (**(code **)(*param_1 + 0x134))();
  iVar6 = param_1[1];
  if ((*(uint *)(iVar6 + 0x1a0) & 4) != 0) {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
    *(undefined4 *)(param_1[1] + 0x16c) = 0;
    return;
  }
  if ((*(uint *)(iVar6 + 0x1a0) & 0x20) != 0) {
    *(undefined4 *)(iVar6 + 0x16c) = 0;
  }
  return;
}

