
void __fastcall FUN_1002b3b0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_1[0x30] == 0) {
    if ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0) {
LAB_1002b51f:
      param_1[0x2e] = 0;
    }
    else {
      piVar5 = FUN_1002ca80(0x10108000,(undefined4 *)(param_1[1] + 8),1);
      param_1[0x2e] = (int)piVar5;
    }
  }
  else {
    iVar4 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x30]));
    if (iVar4 == 0) {
      piVar5 = FUN_1002ca80(*(int *)(DAT_10122044 + 0x98) + param_1[0x30],
                            (undefined4 *)(param_1[1] + 8),1);
      param_1[0x2e] = (int)piVar5;
      if (piVar5 != (int *)0x0) {
        uVar2 = *(undefined4 *)(param_1[1] + 0x15c);
        lVar12 = __ftol();
        lVar13 = __ftol();
        lVar14 = __ftol();
        lVar15 = __ftol();
        *(undefined4 *)(piVar5[1] + 0x148) = 3;
        *(float *)(piVar5[1] + 0x150) = (float)(int)lVar15;
        *(float *)(piVar5[1] + 0x154) = (float)(int)lVar14;
        *(float *)(piVar5[1] + 0x158) = (float)(int)lVar13;
        *(float *)(piVar5[1] + 0x14c) = (float)(int)lVar12;
        *(undefined4 *)(piVar5[1] + 0x15c) = uVar2;
      }
    }
    else {
      pcVar10 = s_env_sprite_101081c0;
      iVar3 = *(int *)(DAT_10122044 + 0x98);
      pbVar8 = (byte *)(**(int **)(iVar4 + 4) + iVar3);
      do {
        bVar1 = *pbVar8;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_1002b4eb:
          iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_1002b4f0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_1002b4eb;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar9 = 0;
LAB_1002b4f0:
      if (iVar9 != 0) {
        (*DAT_10121efc)(4,s_env_laser___s__found_startsprite_10108178,
                        *(int *)(param_1[1] + 0x1cc) + iVar3,iVar3 + param_1[0x30]);
        goto LAB_1002b51f;
      }
      param_1[0x2e] = iVar4;
      *(undefined4 *)(*(int *)(iVar4 + 4) + 0x108) = 8;
    }
  }
  if (param_1[0x31] == 0) {
    if ((*(uint *)(param_1[1] + 0x1a0) & 0x400) != 0) {
      piVar5 = FUN_1002ca80(0x10108000,(undefined4 *)(param_1[1] + 8),1);
      param_1[0x2f] = (int)piVar5;
      goto LAB_1002b6e4;
    }
  }
  else {
    iVar4 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x31]));
    if (iVar4 == 0) {
      piVar5 = FUN_1002ca80(*(int *)(DAT_10122044 + 0x98) + param_1[0x31],
                            (undefined4 *)(param_1[1] + 8),1);
      param_1[0x2f] = (int)piVar5;
      if (piVar5 != (int *)0x0) {
        uVar2 = *(undefined4 *)(param_1[1] + 0x15c);
        lVar12 = __ftol();
        lVar13 = __ftol();
        lVar14 = __ftol();
        lVar15 = __ftol();
        *(undefined4 *)(piVar5[1] + 0x148) = 3;
        *(float *)(piVar5[1] + 0x150) = (float)(int)lVar15;
        *(float *)(piVar5[1] + 0x154) = (float)(int)lVar14;
        *(float *)(piVar5[1] + 0x158) = (float)(int)lVar13;
        *(float *)(piVar5[1] + 0x14c) = (float)(int)lVar12;
        *(undefined4 *)(piVar5[1] + 0x15c) = uVar2;
      }
      goto LAB_1002b6e4;
    }
    pcVar10 = s_env_sprite_101081c0;
    iVar3 = *(int *)(DAT_10122044 + 0x98);
    pbVar8 = (byte *)(**(int **)(iVar4 + 4) + iVar3);
    do {
      bVar1 = *pbVar8;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_1002b6a6:
        iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1002b6ab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_1002b6a6;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar9 = 0;
LAB_1002b6ab:
    if (iVar9 == 0) {
      param_1[0x2f] = iVar4;
      *(undefined4 *)(*(int *)(iVar4 + 4) + 0x108) = 8;
      goto LAB_1002b6e4;
    }
    (*DAT_10121efc)(4,s_env_laser___s__found_endsprite___10108130,
                    *(int *)(param_1[1] + 0x1cc) + iVar3,iVar3 + param_1[0x31]);
  }
  param_1[0x2f] = 0;
LAB_1002b6e4:
  if (((param_1[0x2e] == 0) || (param_1[0x2f] == 0)) ||
     ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0)) {
    FUN_10029700(param_1,(undefined4 *)(param_1[1] + 8),(undefined4 *)(param_1[1] + 8));
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1[0x2f] + 4) + 0x208);
    uVar6 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1[0x2e] + 4) + 0x208));
    uVar7 = (*DAT_10121f24)(uVar2);
    FUN_10029880(param_1,uVar6,uVar7);
  }
  if ((*(int *)(param_1[1] + 0x1cc) != 0) && ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0)) {
    FUN_1002bed0((int)param_1);
    return;
  }
  FUN_1002bf70(param_1);
  return;
}

