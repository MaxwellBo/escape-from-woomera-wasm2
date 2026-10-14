
undefined4 __cdecl FUN_10066000(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *this;
  void *this_00;
  char *pcVar12;
  char *pcVar13;
  char *pcStack_42c;
  int local_428;
  char *pcStack_424;
  char acStack_420 [32];
  char acStack_400 [1024];
  
  pcStack_42c = (char *)(*DAT_10121f84)(param_1,&local_428);
  if ((pcStack_42c != (char *)0x0) && (pcStack_424 = pcStack_42c, local_428 != 0)) {
LAB_10066040:
    pcVar13 = acStack_400;
    for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13 = pcVar13 + 4;
    }
    bVar3 = false;
    pcStack_42c = FUN_10065ec0(pcStack_42c);
    iVar9 = -1;
    pcVar13 = &DAT_10122178;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    if (iVar9 != -2) {
      uVar10 = 0xffffffff;
      pcVar13 = &DAT_10122178;
      do {
        pcVar7 = pcVar13;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar7 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar13 = pcVar7 + -uVar10;
      pcVar7 = acStack_420;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar7 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar9 = FUN_10065fb0((void *)0x0,pcStack_42c);
      if (iVar9 != 0) {
        pcStack_42c = FUN_10065ec0(pcStack_42c);
        iVar9 = -1;
        pcVar13 = &DAT_10122178;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          uVar10 = 0xffffffff;
          pcVar13 = &DAT_10122178;
          do {
            pcVar7 = pcVar13;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar7 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar7;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          bVar3 = true;
          pcVar13 = pcVar7 + -uVar10;
          pcVar7 = acStack_400;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar7 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
      }
      iVar9 = (*DAT_10121fc0)(acStack_420);
      if (iVar9 == 0) {
        (*DAT_10121efc)(1,s_Skipping__s_from_mapcycle__not_a_10111e14,acStack_420);
      }
      else {
        pcVar7 = operator_new(0x42c);
        uVar10 = 0xffffffff;
        pcVar13 = acStack_420;
        do {
          pcVar12 = pcVar13;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar12;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar12 = pcVar12 + -uVar10;
        pcVar13 = pcVar7;
        for (uVar11 = uVar10 >> 2; pcVar13 = pcVar13 + 4, uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar7[0x24] = '\0';
        pcVar7[0x25] = '\0';
        pcVar7[0x26] = '\0';
        pcVar7[0x27] = '\0';
        pcVar7[0x28] = '\0';
        pcVar7[0x29] = '\0';
        pcVar7[0x2a] = '\0';
        pcVar7[0x2b] = '\0';
        pcVar13 = pcVar7 + 0x2c;
        for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
          pcVar13[0] = '\0';
          pcVar13[1] = '\0';
          pcVar13[2] = '\0';
          pcVar13[3] = '\0';
          pcVar13 = pcVar13 + 4;
        }
        if (bVar3) {
          pbVar8 = (byte *)(*DAT_10121fb4)(acStack_400,s_minplayers_10111e4c);
          if ((pbVar8 != (byte *)0x0) && (*pbVar8 != 0)) {
            uVar10 = FUN_100c8388(this,pbVar8);
            *(uint *)(pcVar7 + 0x24) = uVar10;
            uVar10 = uVar10 & ((int)uVar10 < 1) - 1;
            *(uint *)(pcVar7 + 0x24) = uVar10;
            if ((int)*(uint *)(DAT_10122044 + 0x90) <= (int)uVar10) {
              uVar10 = *(uint *)(DAT_10122044 + 0x90);
            }
            *(uint *)(pcVar7 + 0x24) = uVar10;
          }
          pbVar8 = (byte *)(*DAT_10121fb4)(acStack_400,s_maxplayers_10111e40);
          if ((pbVar8 != (byte *)0x0) && (*pbVar8 != 0)) {
            uVar10 = FUN_100c8388(this_00,pbVar8);
            *(uint *)(pcVar7 + 0x28) = uVar10;
            uVar10 = uVar10 & ((int)uVar10 < 1) - 1;
            *(uint *)(pcVar7 + 0x28) = uVar10;
            if ((int)*(uint *)(DAT_10122044 + 0x90) <= (int)uVar10) {
              uVar10 = *(uint *)(DAT_10122044 + 0x90);
            }
            *(uint *)(pcVar7 + 0x28) = uVar10;
          }
          (*DAT_10121fe0)(acStack_400,s_minplayers_10111e4c);
          (*DAT_10121fe0)(acStack_400,s_maxplayers_10111e40);
          uVar10 = 0xffffffff;
          pcVar13 = acStack_400;
          do {
            pcVar12 = pcVar13;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar12 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar12;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar13 = pcVar12 + -uVar10;
          pcVar12 = pcVar7 + 0x2c;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar12 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        *(undefined4 *)pcVar7 = *param_2;
        *param_2 = pcVar7;
      }
      goto LAB_10066040;
    }
    (*DAT_10121f88)(pcStack_424);
  }
  puVar2 = (undefined4 *)*param_2;
  puVar4 = (undefined4 *)0x0;
  while (puVar6 = puVar2, puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar6;
    *puVar6 = puVar4;
    puVar4 = puVar6;
  }
  *param_2 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = (undefined4 *)*puVar4;
  puVar2 = puVar4;
  while (puVar5 = puVar6, puVar5 != (undefined4 *)0x0) {
    puVar2 = puVar5;
    puVar6 = (undefined4 *)*puVar5;
  }
  *puVar2 = puVar4;
  param_2[1] = puVar4;
  return 1;
}

