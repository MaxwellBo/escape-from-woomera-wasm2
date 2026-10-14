
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10039a50(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  float *pfVar11;
  uint uVar12;
  float unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  int *piVar13;
  float10 fVar14;
  longlong lVar15;
  undefined4 uVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 local_84 [4];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int *apiStack_4c [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_1c;
  float afStack_14 [5];
  
  piVar13 = (int *)0x0;
  local_b8 = 0.0;
  if (param_1[0x50] != 0) {
    (*DAT_10121e58)(param_1[1] + 0x50,local_84,local_78,&local_f0);
    fVar19 = (float)param_1[0x43];
    FUN_10001d60(&fStack_a8,local_f0 * fVar19,fStack_ec * fVar19,fStack_e8 * fVar19);
    pfVar11 = &fStack_a8;
    pfVar9 = &fStack_e4;
    pfVar4 = (float *)FUN_10002280(local_78,&fStack_6c,(float)param_1[0x42]);
    pfVar18 = &fStack_9c;
    pfVar5 = (float *)FUN_10002280(local_84,&fStack_60,(float)param_1[0x41]);
    pvVar6 = (void *)FUN_1000b550((void *)(param_1[1] + 8),&fStack_b4,pfVar5);
    pvVar6 = (void *)FUN_1000b550(pvVar6,pfVar18,pfVar4);
    FUN_1000b550(pvVar6,pfVar9,pfVar11);
    iVar8 = *(int *)(param_1[0x50] + 4);
    *(float *)(iVar8 + 8) = fStack_e4;
    *(float *)(iVar8 + 0xc) = fStack_e0;
    *(float *)(iVar8 + 0x10) = fStack_dc;
    (*DAT_10121e58)(param_1[1] + 0x50,*(int *)(param_1[0x50] + 4) + 0x20,0,0);
  }
  if (param_1[0x2f] == 0) {
    if ((param_1[0x2e] == 0) || (*(int *)(param_1[0x2e] + 200) == 0)) {
      if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
        FUN_10019680((int)param_1);
        FUN_10063ac0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
        return;
      }
      (**(code **)(*param_1 + 8))(0x3dcccccd);
      FUN_10039470((int)param_1);
      piVar7 = (int *)FUN_100396b0(param_1);
      apiStack_4c[0] = piVar7;
      if (((piVar7 == (int *)0x0) || (*(int *)(piVar7[1] + 0x208) == 0)) ||
         (iVar8 = (*DAT_10121f20)(*(int *)(piVar7[1] + 0x208)), iVar8 == 0)) {
        if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
          return;
        }
        (**(code **)(*param_1 + 8))(0x40000000);
        return;
      }
      (*DAT_10121e58)(param_1[1] + 0x50,&fStack_88,&local_b8,&fStack_e8);
      fVar19 = (float)param_1[0x43];
      FUN_10001d60(&fStack_b0,fStack_ec * fVar19,fStack_e8 * fVar19,fStack_e4 * fVar19);
      fVar19 = (float)param_1[0x42];
      FUN_10001d60(&fStack_80,fStack_bc * fVar19,local_b8 * fVar19,fStack_b4 * fVar19);
      pfVar11 = &fStack_b0;
      pfVar9 = (float *)&stack0xffffff08;
      pfVar18 = &fStack_80;
      pfVar4 = &fStack_74;
      pfVar5 = (float *)FUN_10002280(&fStack_8c,&fStack_a4,(float)param_1[0x41]);
      pvVar6 = (void *)FUN_1000b550((void *)(param_1[1] + 8),&fStack_68,pfVar5);
      pvVar6 = (void *)FUN_1000b550(pvVar6,pfVar4,pfVar18);
      FUN_1000b550(pvVar6,pfVar9,pfVar11);
      fStack_54 = local_f0;
      iVar8 = piVar7[1];
      fStack_ec = *(float *)(iVar8 + 0x174) + *(float *)(iVar8 + 8);
      fStack_e8 = *(float *)(iVar8 + 0xc) + *(float *)(iVar8 + 0x178);
      fStack_e4 = *(float *)(iVar8 + 0x10) + *(float *)(iVar8 + 0x17c);
      fVar19 = SQRT((fStack_e8 - unaff_EBX) * (fStack_e8 - unaff_EBX) +
                    (fStack_e4 - local_f0) * (fStack_e4 - local_f0) +
                    (fStack_ec - unaff_EBP) * (fStack_ec - unaff_EBP));
      fStack_c8 = fVar19;
      fStack_98 = fStack_ec;
      fStack_94 = fStack_e8;
      fStack_90 = fStack_e4;
      fStack_5c = unaff_EBP;
      fStack_58 = unaff_EBX;
      iVar8 = FUN_10039950(param_1,fVar19);
      if (iVar8 == 0) {
        return;
      }
      FUN_100afc60(&fStack_5c,&fStack_98,0,*(undefined4 *)(param_1[1] + 0x208),apiStack_4c);
      if (((fStack_3c == (float)_DAT_100dd628) || (iStack_1c == *(int *)(piVar7[1] + 0x208))) &&
         ((iVar8 = FUN_10039950(param_1,fVar19), iVar8 != 0 &&
          (iVar8 = (**(code **)(*piVar7 + 0xb8))(), iVar8 != 0)))) {
        fStack_c0 = 1.4013e-45;
        piVar7 = (int *)(**(code **)(*param_1 + 0x11c))(&fStack_b0,piVar7);
        param_1[0x49] = *piVar7;
        param_1[0x4a] = piVar7[1];
        param_1[0x4b] = piVar7[2];
      }
      iVar8 = param_1[1];
      fStack_d4 = (float)param_1[0x49] - *(float *)(iVar8 + 8);
      fStack_d0 = (float)param_1[0x4a] - *(float *)(iVar8 + 0xc);
      fStack_cc = (float)param_1[0x4b] - *(float *)(iVar8 + 0x10);
      goto LAB_1003a228;
    }
    FUN_10039470((int)param_1);
    piVar13 = *(int **)(param_1[0x2e] + 200);
    (**(code **)(*param_1 + 4))(0x3d4ccccd,0);
    iVar8 = piVar13[1];
    if ((*(byte *)(param_1[1] + 0x1a0) & 0x80) == 0) {
      fStack_dc = *(float *)(iVar8 + 0x78);
      fStack_d8 = *(float *)(iVar8 + 0x7c);
      fStack_e0 = -*(float *)(iVar8 + 0x74);
      goto LAB_1003a276;
    }
    fStack_e0 = *(float *)(iVar8 + 0x74);
    fStack_dc = *(float *)(iVar8 + 0x78);
    fStack_d8 = *(float *)(iVar8 + 0x7c);
    (*DAT_10121e58)(&fStack_e0,&fStack_d4,0,0);
    fVar19 = fStack_d4 * _DAT_100e08e0;
    pfVar11 = &fStack_b0;
    fVar1 = fStack_d0 * _DAT_100e08e0;
    local_f0 = fStack_cc * _DAT_100e08e0;
    pfVar9 = (float *)(**(code **)(*piVar13 + 0xfc))();
    local_f0 = unaff_ESI + *pfVar9;
    fStack_ec = fVar19 + pfVar9[1];
    fStack_e8 = fVar1 + pfVar9[2];
    piVar7 = &iStack_50;
    uVar3 = *(undefined4 *)(param_1[1] + 0x198);
    *(undefined4 *)(param_1[1] + 0x198) = *(undefined4 *)(piVar13[1] + 0x208);
    iVar8 = *(int *)(param_1[1] + 0x208);
    iVar17 = 1;
    uVar16 = 2;
    fStack_9c = local_f0;
    fStack_98 = fStack_ec;
    fStack_94 = fStack_e8;
    uVar10 = (**(code **)(*piVar13 + 0xfc))(&fStack_b4,&fStack_9c);
    FUN_100afc20(uVar10,uVar16,iVar17,iVar8,piVar7,pfVar11);
    *(undefined4 *)(param_1[1] + 0x198) = uVar3;
    iVar8 = param_1[1];
    unaff_EBP = fStack_38 - *(float *)(iVar8 + 8);
    unaff_EBX = fStack_34 - *(float *)(iVar8 + 0xc);
    local_f0 = fStack_30 - *(float *)(iVar8 + 0x10);
    fStack_d4 = unaff_EBP;
    fStack_d0 = unaff_EBX;
    fStack_cc = local_f0;
    pfVar11 = (float *)FUN_100ae830(&fStack_b0,&fStack_d4);
    fStack_e0 = *pfVar11;
    fStack_dc = pfVar11[1];
    fStack_d8 = pfVar11[2];
    fVar19 = SQRT(fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fStack_d4 * fStack_d4);
    fStack_98 = fStack_38;
    fStack_94 = fStack_34;
    fStack_90 = fStack_30;
LAB_1003a26f:
    FUN_1003aa80(param_1,&fStack_e0,fVar19);
  }
  else {
    FUN_10039470((int)param_1);
    (**(code **)(*param_1 + 4))(0x3d4ccccd,0);
    iVar8 = param_1[0x2f];
    iVar17 = *(int *)(iVar8 + 200);
    if (iVar17 == 3) {
      piVar7 = (int *)(**(code **)(*(int *)param_1[0x30] + 0x74))();
      if ((piVar7 != (int *)0x0) && (iVar8 = (**(code **)(*piVar7 + 0xb8))(), iVar8 == 0)) {
        FUN_1003c6c0((int *)param_1[0x2f]);
      }
      iVar8 = *(int *)(param_1[0x30] + 4);
      fStack_ec = *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x174);
      fStack_e8 = *(float *)(iVar8 + 0xc) + *(float *)(iVar8 + 0x178);
      fStack_e4 = *(float *)(iVar8 + 0x10) + *(float *)(iVar8 + 0x17c);
      iVar8 = param_1[1];
      fStack_d4 = fStack_ec - *(float *)(iVar8 + 8);
      fStack_d0 = fStack_e8 - *(float *)(iVar8 + 0xc);
      fStack_cc = fStack_e4 - *(float *)(iVar8 + 0x10);
      fStack_98 = fStack_ec;
      fStack_94 = fStack_e8;
      fStack_90 = fStack_e4;
LAB_1003a228:
      unaff_EBX = fStack_d0;
      unaff_EBP = fStack_d4;
      local_f0 = fStack_cc;
      pfVar11 = (float *)FUN_100ae830(&fStack_b0,&fStack_d4);
      fStack_e0 = *pfVar11;
      fStack_dc = pfVar11[1];
      fStack_d8 = pfVar11[2];
      fVar19 = SQRT(fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fStack_d4 * fStack_d4);
      goto LAB_1003a26f;
    }
    if (iVar17 == 1) {
      iVar8 = *(int *)(iVar8 + 4);
      fStack_e0 = *(float *)(iVar8 + 0x50);
      fStack_dc = *(float *)(iVar8 + 0x54);
      fStack_d8 = *(float *)(iVar8 + 0x58);
    }
    else if (iVar17 == 2) {
      iVar8 = *(int *)(iVar8 + 4);
      iVar17 = param_1[1];
      unaff_EBP = *(float *)(iVar8 + 8) - *(float *)(iVar17 + 8);
      unaff_EBX = *(float *)(iVar8 + 0xc) - *(float *)(iVar17 + 0xc);
      local_f0 = *(float *)(iVar8 + 0x10) - *(float *)(iVar17 + 0x10);
      fStack_d4 = unaff_EBP;
      fStack_d0 = unaff_EBX;
      fStack_cc = local_f0;
      pfVar11 = (float *)FUN_100ae830(&fStack_b0,&fStack_d4);
      fStack_e0 = *pfVar11;
      fStack_dc = pfVar11[1];
      fStack_d8 = pfVar11[2];
      fVar19 = SQRT(fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fStack_d4 * fStack_d4);
      goto LAB_1003a26f;
    }
  }
LAB_1003a276:
  fStack_e0 = -fStack_e0;
  if (param_1[4] == 0) {
    fStack_c4 = (float)param_1[0x36];
    fStack_c8 = (float)param_1[0x3a];
  }
  else {
    iVar8 = *(int *)(param_1[4] + 4);
    fStack_c4 = *(float *)(iVar8 + 0x54) + (float)param_1[0x36];
    fStack_c8 = *(float *)(iVar8 + 0x50) + (float)param_1[0x3a];
  }
  fVar14 = (float10)FUN_100aff60(fStack_dc,fStack_c4);
  fStack_dc = (float)(fVar14 + (float10)fStack_c4);
  fVar14 = (float10)FUN_100aff60(fStack_e0,fStack_c8);
  fStack_e0 = (float)(fVar14 + (float10)fStack_c8);
  if (((_DAT_100ddae8 <= (float)param_1[0x38]) ||
      ((fVar19 = fStack_c4 + (float)param_1[0x38], fStack_dc <= fStack_c4 + (float)param_1[0x38] &&
       (fVar19 = fStack_c4 - (float)param_1[0x38], fStack_c4 - (float)param_1[0x38] <= fStack_dc))))
     && (fVar19 = fStack_dc, fStack_c0 != 0.0)) {
    param_1[0x3e] = (int)*DAT_10122044;
  }
  fStack_dc = fVar19;
  fVar14 = (float10)FUN_100aff60(fStack_dc,*(float *)(param_1[1] + 0x54));
  fStack_c4 = (float)fVar14;
  fStack_e8 = fStack_c4 * _DAT_100dd63c;
  fStack_e4 = DAT_10121de0;
  if (fStack_e8 <= (float)param_1[0x37]) {
    if (fStack_e8 < -(float)param_1[0x37]) {
      fStack_e8 = -(float)param_1[0x37];
    }
  }
  else {
    fStack_e8 = (float)param_1[0x37];
  }
  fVar19 = fStack_c8 + (float)param_1[0x3c];
  if ((fStack_e0 <= fStack_c8 + (float)param_1[0x3c]) &&
     (fVar19 = fStack_e0, fStack_e0 < fStack_c8 - (float)param_1[0x3c])) {
    fVar19 = fStack_c8 - (float)param_1[0x3c];
  }
  fStack_e0 = fVar19;
  fVar14 = (float10)FUN_100aff60(fStack_e0,*(float *)(param_1[1] + 0x50));
  fStack_c8 = (float)fVar14;
  fVar14 = fVar14 * (float10)_DAT_100dd63c;
  if (fVar14 <= (float10)(float)param_1[0x3b]) {
    fStack_c0 = -(float)param_1[0x3b];
    if (fVar14 < (float10)fStack_c0) {
      fVar14 = (float10)fStack_c0;
    }
  }
  else {
    fVar14 = (float10)(float)param_1[0x3b];
  }
  FUN_10063ac0((int)param_1,(float)fVar14,fStack_e8,fStack_e4);
  piVar7 = (int *)param_1[0x2f];
  if (piVar7 != (int *)0x0) {
    lVar15 = __ftol();
    uVar12 = (int)(uint)lVar15 >> 0x1f;
    fStack_c0 = (float)(((uint)lVar15 ^ uVar12) - uVar12);
    if ((double)(int)fStack_c0 < _DAT_100dfb80) {
      lVar15 = __ftol();
      uVar12 = (int)(uint)lVar15 >> 0x1f;
      fStack_c0 = (float)(((uint)lVar15 ^ uVar12) - uVar12);
      if ((double)(int)fStack_c0 < _DAT_100dfb80) {
        FUN_1003c680(piVar7);
      }
    }
  }
  if (param_1[0x2f] == 0) {
    if (piVar13 == (int *)0x0) {
      if ((*DAT_10122044 - (float)param_1[0x3e] < (float)param_1[0x3f]) &&
         (((ABS(fStack_c8) < (float)param_1[0x3d] && (ABS(fStack_c4) < (float)param_1[0x39])) ||
          ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0)))) {
        (*DAT_10121e58)(param_1[1] + 0x50,&stack0xffffff08,0,0);
        if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
          fVar19 = SQRT(fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_d4 * fStack_d4);
          fStack_bc = unaff_EBP * fVar19;
          local_b8 = unaff_EBX * fVar19;
          fStack_ec = fStack_bc + fStack_5c;
          fStack_e8 = local_b8 + fStack_58;
          fStack_e4 = fVar19 * local_f0 + fStack_54;
          FUN_100afc60(&fStack_5c,&fStack_ec,0,*(undefined4 *)(param_1[1] + 0x208),apiStack_4c);
          if (iStack_1c != *(int *)(*(int *)(iStack_50 + 4) + 0x208)) goto LAB_1003aa31;
        }
        (*DAT_10121e58)(param_1[1] + 0x50,&fStack_68,&fStack_ec,&fStack_bc);
        fVar19 = (float)param_1[0x43];
        fStack_80 = fStack_bc * fVar19;
        iVar8 = param_1[1];
        fStack_7c = local_b8 * fVar19;
        fVar1 = (float)param_1[0x42];
        fStack_8c = fStack_ec * fVar1;
        fStack_88 = fStack_e8 * fVar1;
        fVar2 = (float)param_1[0x41];
        fStack_74 = fStack_68 * fVar2 + *(float *)(iVar8 + 8);
        fStack_70 = fStack_64 * fVar2 + *(float *)(iVar8 + 0xc);
        fStack_a4 = fStack_74 + fStack_8c;
        fStack_a0 = fStack_70 + fStack_88;
        fStack_b0 = fStack_a4 + fStack_80;
        fStack_ac = fStack_a0 + fStack_7c;
        fStack_a8 = fVar2 * fStack_60 + *(float *)(iVar8 + 0x10) + fVar1 * fStack_e4 +
                    fVar19 * fStack_b4;
        FUN_1003ab30(param_1,&fStack_b0,&stack0xffffff08,iVar8);
        return;
      }
LAB_1003aa31:
      param_1[0x33] = 0;
      return;
    }
    if (((float)param_1[0x35] <= *DAT_10122044) && ((*(byte *)(piVar13[1] + 0x180) & 1) != 0)) {
      (*DAT_10121e58)(param_1[1] + 0x50,&fStack_74,0,0);
      param_1[0x33] =
           (int)((*DAT_10122044 - _DAT_100dd618 / (float)param_1[0x34]) - (float)_DAT_100dfb88);
      (*DAT_10121e58)(param_1[1] + 0x50,&fStack_ec,&stack0xffffff08,&fStack_bc);
      fVar19 = (float)param_1[0x43];
      FUN_10001d60(&fStack_b0,fStack_bc * fVar19,fVar19 * local_b8,fVar19 * fStack_b4);
      fVar19 = (float)param_1[0x42];
      FUN_10001d60(&fStack_80,unaff_EBP * fVar19,fVar19 * unaff_EBX,fVar19 * local_f0);
      fVar19 = (float)param_1[0x41];
      FUN_10001d60(&fStack_8c,fStack_ec * fVar19,fVar19 * fStack_e8,fVar19 * fStack_e4);
      pfVar11 = &fStack_b0;
      pfVar9 = &fStack_a4;
      pfVar18 = &fStack_80;
      pfVar4 = afStack_14;
      pvVar6 = (void *)FUN_1000b550((void *)(param_1[1] + 8),&fStack_68,&fStack_8c);
      pvVar6 = (void *)FUN_1000b550(pvVar6,pfVar4,pfVar18);
      FUN_1000b550(pvVar6,pfVar9,pfVar11);
      FUN_1003ab30(param_1,&fStack_a4,&fStack_74,piVar13[1]);
      iVar8 = (**(code **)(*piVar13 + 0xcc))();
      if (iVar8 != 0) {
        piVar13[0xc5] = 1000;
      }
      param_1[0x35] = (int)(_DAT_100dd618 / (float)param_1[0x34] + *DAT_10122044);
      return;
    }
  }
  else if (((float)param_1[0x35] <= *DAT_10122044) &&
          ((*(uint *)(param_1[1] + 0x1a0) & 0x10000) != 0)) {
    (*DAT_10121e58)(param_1[1] + 0x50,&fStack_74,0,0);
    param_1[0x33] =
         (int)((*DAT_10122044 - _DAT_100dd618 / (float)param_1[0x34]) - (float)_DAT_100dfb88);
    (*DAT_10121e58)(param_1[1] + 0x50,&fStack_8c,&stack0xffffff08,&fStack_bc);
    fVar19 = (float)param_1[0x43];
    FUN_10001d60(&fStack_b0,fStack_bc * fVar19,fVar19 * local_b8,fVar19 * fStack_b4);
    fVar19 = (float)param_1[0x42];
    FUN_10001d60(&fStack_80,unaff_EBP * fVar19,fVar19 * unaff_EBX,fVar19 * local_f0);
    pfVar11 = &fStack_b0;
    pfVar9 = &fStack_a4;
    pfVar18 = &fStack_80;
    pfVar4 = &fStack_68;
    pfVar5 = (float *)FUN_10002280(&fStack_8c,&fStack_ec,(float)param_1[0x41]);
    pvVar6 = (void *)FUN_1000b550((void *)(param_1[1] + 8),afStack_14,pfVar5);
    pvVar6 = (void *)FUN_1000b550(pvVar6,pfVar4,pfVar18);
    FUN_1000b550(pvVar6,pfVar9,pfVar11);
    FUN_1003ab30(param_1,&fStack_a4,&fStack_74,param_1[1]);
    param_1[0x35] = (int)(_DAT_100dd618 / (float)param_1[0x34] + *DAT_10122044);
    return;
  }
  return;
}

