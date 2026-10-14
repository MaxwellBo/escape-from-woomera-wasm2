
undefined4 FUN_10018ff0(int param_1,int *param_2,int param_3)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 auStack_2e0 [4];
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 auStack_2d4 [4];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float fStack_2ac;
  float fStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 0x7c);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  FUN_100b1180(auStack_2e0,param_2);
  uStack_2dc = 0;
  uStack_2d8 = 1;
  iVar4 = iStack_2b4;
  if (param_3 == 0) {
LAB_100191a3:
    uVar7 = (**(code **)(*piVar6 + 0x3c))();
    if ((uVar7 & 4) == 0) {
      (**(code **)(*piVar6 + 0x38))(auStack_2e0);
      (**(code **)(*piVar6 + 0x2c))();
    }
    else {
      (**(code **)(*piVar6 + 0x38))();
      (**(code **)(*piVar6 + 0x28))();
    }
    if (param_1 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x7c);
    }
    if (param_3 == 0) {
      if ((piVar6 != (int *)0x0) && (*(int *)(piVar6[1] + 4) != 0)) {
        iVar4 = FUN_100b5a40(&DAT_101323a8,*(int *)(piVar6[1] + 4));
        if (iVar4 == 0) {
          (*DAT_10121efc)(4,s_Global_Entity__s___s__not_in_tab_101050a0,
                          ((int *)piVar6[1])[1] + *(int *)(DAT_10122044 + 0x98),
                          *(int *)(DAT_10122044 + 0x98) + *(int *)piVar6[1]);
          FUN_100b5980(&DAT_101323a8,*(int *)(piVar6[1] + 4),*(int *)(DAT_10122044 + 0xc),1);
        }
        else {
          if (*(int *)(iVar4 + 0x60) == 2) {
            FUN_100b1190();
            return 0xffffffff;
          }
          pbVar8 = (byte *)(iVar4 + 0x40);
          pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc));
          do {
            bVar2 = *pbVar5;
            bVar9 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_1001929f:
              iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_100192a4;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar9 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_1001929f;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_100192a4:
          if (iVar4 != 0) {
            FUN_10019fe0((int)piVar6);
          }
        }
      }
    }
    else {
      param_2[0x151] = (int)fStack_2bc;
      param_2[0x152] = iStack_2b8;
      param_2[0x153] = iVar4;
      if (piVar6 != (int *)0x0) {
        FUN_100afe10((int)piVar6,piVar6[1] + 8);
        (**(code **)(*piVar6 + 0x9c))();
      }
    }
  }
  else {
    FUN_100b1180(auStack_2d4,param_2);
    uStack_2d0 = 0;
    uStack_2cc = 0;
    FUN_100b2080(auStack_2d4,(byte *)s_ENTVARS_101050c8,(int)&iStack_2a4);
    iVar4 = *(int *)(param_2[10] + 8 + param_2[7] * 0x18);
    param_2[2] = iVar4;
    param_2[1] = iVar4 + *param_2;
    iVar4 = FUN_100b5a40(&DAT_101323a8,iStack_2a0);
    pbVar8 = (byte *)(iVar4 + 0x40);
    pbVar5 = (byte *)(param_2 + 0x155);
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_100190c2:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100190c7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_100190c2;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_100190c7:
    if (iVar4 == 0) {
      pfVar1 = (float *)(param_2 + 0x151);
      fStack_2bc = *pfVar1;
      iStack_2b8 = param_2[0x152];
      iVar4 = param_2[0x153];
      piVar6 = (int *)FUN_10018f50(iStack_2a4,iStack_2a0);
      if (piVar6 != (int *)0x0) {
        uStack_2dc = 1;
        iVar3 = piVar6[1];
        fStack_2ac = (float)param_2[0x152] - *(float *)(iVar3 + 0xe0);
        fStack_2a8 = (float)param_2[0x153] - *(float *)(iVar3 + 0xe4);
        fStack_2c8 = fStack_1c8 + (*pfVar1 - *(float *)(iVar3 + 0xdc));
        fStack_2c4 = fStack_1c4 + fStack_2ac;
        *pfVar1 = fStack_2c8;
        fStack_2c0 = fStack_1c0 + fStack_2a8;
        param_2[0x152] = (int)fStack_2c4;
        param_2[0x153] = (int)fStack_2c0;
        param_1 = *(int *)(piVar6[1] + 0x208);
        FUN_100b5b90(&DAT_101323a8,*(int *)(piVar6[1] + 4),*(int *)(DAT_10122044 + 0xc));
        FUN_100b1190();
        goto LAB_100191a3;
      }
    }
    FUN_100b1190();
  }
  FUN_100b1190();
  return 0;
}

