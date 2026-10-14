
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10068190(int *param_1)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  bool bVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  undefined3 extraout_var;
  int iVar16;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar17;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint auStack_40 [16];
  
  FUN_100af210((float *)(param_1[1] + 0x50));
  if (1 < param_1[0xdd]) {
    if (param_1[0x10c] == 0) {
      piVar13 = FUN_1002ca80(0x10112500,(undefined4 *)(param_1[1] + 8),1);
      param_1[0x10c] = (int)piVar13;
      if (piVar13 != (int *)0x0) {
        *(undefined4 *)(piVar13[1] + 0x148) = 5;
        *(undefined4 *)(piVar13[1] + 0x150) = 0x437f0000;
        *(undefined4 *)(piVar13[1] + 0x154) = 0x437f0000;
        *(undefined4 *)(piVar13[1] + 0x158) = 0x437f0000;
        *(undefined4 *)(piVar13[1] + 0x14c) = 0x437f0000;
        *(undefined4 *)(piVar13[1] + 0x15c) = 0xe;
        iVar15 = param_1[0x10c];
        iVar16 = *(int *)(param_1[1] + 0x208);
        if (iVar16 != 0) {
          uVar14 = (*DAT_10121f24)(iVar16);
          *(undefined4 *)(*(int *)(iVar15 + 4) + 0x110) = uVar14;
          *(undefined4 *)(*(int *)(iVar15 + 4) + 0x114) = 1;
          *(int *)(*(int *)(iVar15 + 4) + 0x194) = iVar16;
          *(undefined4 *)(*(int *)(iVar15 + 4) + 0x108) = 0xc;
        }
        *(undefined4 *)(*(int *)(param_1[0x10c] + 4) + 0x144) = 0x40800000;
        *(undefined4 *)(*(int *)(param_1[0x10c] + 4) + 0x138) = 0x41200000;
        FUN_1002cd00((int *)param_1[0x10c]);
      }
      if (param_1[0x10c] == 0) goto LAB_10068351;
    }
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0x1c);
    iVar15 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ed0)(iVar15 + 0x1000);
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0x10));
    (*DAT_10121edc)(0x43800000);
    (*DAT_10121ec8)(0xff);
    (*DAT_10121ec8)(0xc0);
    (*DAT_10121ec8)(0x40);
    (*DAT_10121ec8)(200);
    (*DAT_10121edc)(0);
    (*DAT_10121ec4)();
  }
LAB_10068351:
  if ((*(float *)(param_1[1] + 0x160) < DAT_10126ae8 * _DAT_100dd614) || (param_1[0x10a] < 10)) {
    puVar1 = (uint *)(param_1 + 0xe0);
    bVar12 = FUN_10019450(puVar1);
    if ((CONCAT31(extraout_var,bVar12) == 0) && (param_1[0xde] < 10)) {
      iVar15 = 0;
      fStack_60 = 8192.0;
      FUN_100c8506((undefined1 *)auStack_40,&DAT_101124f8);
      iVar16 = FUN_100af030(0,(byte *)auStack_40);
      if (iVar16 != 0) {
        do {
          iVar9 = *(int *)(iVar16 + 4);
          iVar10 = param_1[1];
          fVar3 = *(float *)(iVar9 + 8) - *(float *)(iVar10 + 8);
          fVar5 = *(float *)(iVar9 + 0xc) - *(float *)(iVar10 + 0xc);
          fVar4 = *(float *)(iVar9 + 0x10) - *(float *)(iVar10 + 0x10);
          fVar3 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
          if (fVar3 < fStack_60) {
            iVar15 = iVar16;
            fStack_60 = fVar3;
          }
          iVar16 = FUN_100af030(iVar16,(byte *)auStack_40);
        } while (iVar16 != 0);
        if (iVar15 != 0) {
          FUN_10019420(puVar1,iVar15);
          iVar16 = *(int *)(param_1[1] + 0xc);
          iVar9 = *(int *)(*(int *)(iVar15 + 4) + 0x10);
          param_1[0xd3] = (int)*(float *)(param_1[1] + 8);
          param_1[0xd4] = iVar16;
          param_1[0xd5] = iVar9;
          iVar15 = *(int *)(iVar15 + 4);
          fStack_58 = *(float *)(iVar15 + 8) - (float)param_1[0xd3];
          fStack_54 = *(float *)(iVar15 + 0xc) - (float)param_1[0xd4];
          fStack_50 = *(float *)(iVar15 + 0x10) - (float)param_1[0xd5];
          fVar3 = SQRT(fStack_58 * fStack_58 + fStack_54 * fStack_54 + fStack_50 * fStack_50);
          if (fVar3 == _DAT_100dd5f8) {
            fStack_58 = 0.0;
            fStack_54 = 0.0;
            fStack_50 = 1.0;
          }
          else {
            fVar3 = _DAT_100dd618 / fVar3;
            fStack_58 = fVar3 * fStack_58;
            fStack_54 = fStack_54 * fVar3;
            fStack_50 = fStack_50 * fVar3;
          }
          pfVar2 = (float *)(param_1 + 0xd0);
          *pfVar2 = fStack_58;
          param_1[0xd1] = (int)fStack_54;
          param_1[0xd2] = (int)fStack_50;
          param_1[0xd2] = 0;
          fStack_50 = SQRT((float)param_1[0xd2] * (float)param_1[0xd2] +
                           (float)param_1[0xd1] * (float)param_1[0xd1] + *pfVar2 * *pfVar2);
          if (fStack_50 == _DAT_100dd5f8) {
            fStack_58 = 0.0;
            fStack_54 = 0.0;
            fStack_50 = 1.0;
          }
          else {
            fStack_50 = _DAT_100dd618 / fStack_50;
            fStack_58 = fStack_50 * *pfVar2;
            fStack_54 = fStack_50 * (float)param_1[0xd1];
            fStack_50 = fStack_50 * (float)param_1[0xd2];
          }
          *pfVar2 = fStack_58;
          param_1[0xd1] = (int)fStack_54;
          param_1[0xd2] = (int)fStack_50;
          goto LAB_100685db;
        }
      }
      FUN_10019420(puVar1,0);
      (*DAT_10121efc)(2,s_nihilanth_can_t_find__s_101124dc,auStack_40);
      iVar15 = param_1[0xde];
      param_1[0xde] = iVar15 + 1;
      if (9 < iVar15 + 1) {
        param_1[0xdd] = 2;
      }
    }
  }
LAB_100685db:
  iVar15 = param_1[1];
  fVar3 = (float)param_1[0xd3] - *(float *)(iVar15 + 8);
  fVar5 = (float)param_1[0xd4] - *(float *)(iVar15 + 0xc);
  fVar4 = (float)param_1[0xd5] - *(float *)(iVar15 + 0x10);
  fVar11 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar3 = (float)param_1[0xd2];
  fVar4 = DAT_10122044[0xc];
  fVar5 = (float)param_1[0xd1];
  fVar6 = DAT_10122044[0xb];
  fVar7 = (float)param_1[0xd0];
  fVar8 = DAT_10122044[10];
  bVar12 = FUN_10019450((uint *)(param_1 + 0xe0));
  if (CONCAT31(extraout_var_00,bVar12) == 0) {
    puVar1 = (uint *)(param_1 + 0x58);
    bVar12 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var_01,bVar12) != 0) {
      piVar13 = (int *)FUN_10019460(puVar1);
      iVar15 = (**(code **)(*piVar13 + 0xb8))();
      if (iVar15 == 0) {
        FUN_10019420(puVar1,0);
      }
    }
    if ((float)param_1[0xdb] + _DAT_100dd5d4 < *DAT_10122044) {
      FUN_10019420(puVar1,0);
    }
    bVar12 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var_02,bVar12) == 0) {
      (**(code **)(*param_1 + 0x11c))(0x1000);
      iVar15 = (**(code **)(*param_1 + 0x144))();
      FUN_10019420(puVar1,iVar15);
    }
    bVar12 = FUN_10019450(puVar1);
    if ((((CONCAT31(extraout_var_03,bVar12) != 0) && (param_1[0xdd] != 0)) &&
        (*DAT_10122044 < (float)param_1[0xdb] + _DAT_100dd5d8)) &&
       ((fVar11 < _DAT_100dd658 && (_DAT_100dd5f8 < fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4)))
       ) {
      if ((1 < param_1[0xdd]) &&
         (*(float *)(param_1[1] + 0x160) < DAT_10126ae8 * (float)_DAT_100dd648)) {
        pcVar17 = s_attack1_open_101124b4;
LAB_100687d5:
        uVar14 = FUN_10008160(param_1,(byte *)pcVar17);
        *(undefined4 *)(param_1[1] + 0x128) = uVar14;
        return;
      }
      iVar15 = (*DAT_10121f70)(0,1);
      if (iVar15 != 0) {
        FUN_100c8506((undefined1 *)auStack_40,&DAT_101124f8);
        iVar15 = FUN_100af030(0,(byte *)auStack_40);
        FUN_100c8506((undefined1 *)auStack_40,&DAT_101124f8);
        iVar16 = FUN_100af030(0,(byte *)auStack_40);
        if ((iVar16 != 0) || (iVar15 != 0)) {
          pcVar17 = s_attack2_101124ac;
          goto LAB_100687d5;
        }
        param_1[0xdf] = param_1[0xdf] + 1;
      }
      uVar14 = FUN_10008160(param_1,(byte *)s_attack1_10102df8);
      *(undefined4 *)(param_1[1] + 0x128) = uVar14;
      return;
    }
  }
  else if (fVar11 < (float)_DAT_100ed288) {
    iVar15 = FUN_10008160(param_1,(byte *)s_recharge_101124d0);
    if (iVar15 != *(int *)(param_1[1] + 0x128)) {
      FUN_100c8506((undefined1 *)auStack_40,&DAT_101124f8);
      FUN_10098c10(auStack_40,param_1,param_1,1,0x3f800000);
      (*DAT_10121efc)(1,s_fireing__s_101124c4,auStack_40);
    }
    pcVar17 = s_recharge_101124d0;
    goto LAB_100687d5;
  }
  FUN_100679c0(param_1);
  return;
}

