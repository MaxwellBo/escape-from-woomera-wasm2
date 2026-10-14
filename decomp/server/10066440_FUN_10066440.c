
void FUN_10066440(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *this;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  int *piVar15;
  int *piVar16;
  char *pcVar17;
  int iStack_c04;
  char acStack_bf8 [32];
  char acStack_bd8 [32];
  char acStack_bb8 [1500];
  char acStack_5dc [1500];
  
  uVar8 = 0xffffffff;
  iVar11 = 0;
  pcVar13 = &DAT_10111edc;
  do {
    pcVar17 = pcVar13;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar17 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar17;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar13 = pcVar17 + -uVar8;
  pcVar17 = acStack_bd8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar17 = pcVar17 + 4;
  }
  iStack_c04 = 0;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar17 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar17 = pcVar17 + 1;
  }
  pbVar5 = (byte *)(*DAT_10121ef0)(s_mapcyclefile_10111ecc);
  acStack_5dc[0] = '\0';
  acStack_bb8[0] = '\0';
  iVar6 = FUN_100662d0();
  uVar8 = FUN_100d8b20(this,pbVar5,(byte *)&DAT_10122078);
  if (uVar8 == 0) {
    if (DAT_10122068 == 0) goto LAB_10066629;
  }
  else {
    uVar8 = 0xffffffff;
    pbVar12 = pbVar5;
    do {
      pbVar14 = pbVar12;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar14 = pbVar12 + 1;
      bVar2 = *pbVar12;
      pbVar12 = pbVar14;
    } while (bVar2 != 0);
    uVar8 = ~uVar8;
    pbVar12 = pbVar14 + -uVar8;
    pbVar14 = (byte *)&DAT_10122078;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    }
    FUN_10065e80(&DAT_10122068);
    iVar7 = FUN_10066000(pbVar5,&DAT_10122068);
    if ((iVar7 == 0) || (DAT_10122068 == 0)) {
      (*DAT_10121efc)(1,s_Unable_to_load_map_cycle_file__s_10111ea8,pbVar5);
      goto LAB_10066629;
    }
  }
  iVar7 = DAT_10122044;
  bVar4 = false;
  uVar8 = 0xffffffff;
  pcVar13 = (char *)(*(int *)(DAT_10122044 + 0xc) + *(int *)(DAT_10122044 + 0x98));
  do {
    pcVar17 = pcVar13;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar17 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar17;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar13 = pcVar17 + -uVar8;
  pcVar17 = acStack_bf8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar17 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar13 = (char *)(*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x98));
  do {
    pcVar17 = pcVar13;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar17 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar17;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar13 = pcVar17 + -uVar8;
  pcVar17 = acStack_bd8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar17 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar17 = pcVar17 + 1;
  }
  piVar10 = DAT_1012206c;
  if ((int *)*DAT_1012206c == DAT_1012206c) {
LAB_100665c6:
    piVar10 = DAT_1012206c;
  }
  else {
    do {
      iVar7 = piVar10[9];
      bVar3 = false;
      if (iVar7 != 0) {
        if (iVar6 < iVar7) {
          bVar3 = true;
        }
        else {
          bVar4 = true;
          iVar11 = iVar7;
        }
      }
      iVar7 = piVar10[10];
      if (iVar7 == 0) {
LAB_100665b8:
        if (!bVar3) goto LAB_100665c8;
      }
      else if (iVar6 <= iVar7) {
        bVar4 = true;
        iStack_c04 = iVar7;
        goto LAB_100665b8;
      }
      piVar10 = (int *)*piVar10;
    } while ((int *)*piVar10 != DAT_1012206c);
    if (!bVar4) goto LAB_100665c6;
  }
LAB_100665c8:
  DAT_1012206c = (int *)*piVar10;
  uVar8 = 0xffffffff;
  piVar16 = piVar10 + 1;
  do {
    piVar15 = piVar16;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    piVar15 = (int *)((int)piVar16 + 1);
    iVar7 = *piVar16;
    piVar16 = piVar15;
  } while ((char)iVar7 != '\0');
  uVar8 = ~uVar8;
  pcVar13 = (char *)((int)piVar15 - uVar8);
  pcVar17 = acStack_bf8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar17 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar17 = pcVar17 + 1;
  }
  FUN_10066310((char *)(piVar10 + 0xb),acStack_5dc);
  uVar8 = 0xffffffff;
  piVar10 = piVar10 + 0xb;
  do {
    piVar16 = piVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    piVar16 = (int *)((int)piVar10 + 1);
    iVar7 = *piVar10;
    piVar10 = piVar16;
  } while ((char)iVar7 != '\0');
  uVar8 = ~uVar8;
  pcVar13 = (char *)((int)piVar16 - uVar8);
  pcVar17 = acStack_bb8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar17 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar17 = pcVar17 + 1;
  }
LAB_10066629:
  iVar7 = (*DAT_10121fc0)(acStack_bf8);
  if (iVar7 == 0) {
    uVar8 = 0xffffffff;
    pcVar13 = acStack_bd8;
    do {
      pcVar17 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar17 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar17;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar13 = pcVar17 + -uVar8;
    pcVar17 = acStack_bf8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar17 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  DAT_10121dd0 = 1;
  (*DAT_10121efc)(1,s_CHANGE_LEVEL___s_10111e94,acStack_bf8);
  if ((iVar11 != 0) || (iStack_c04 != 0)) {
    (*DAT_10121efc)(1,s_PLAYER_COUNT__min__i_max__i_curr_10111e68,iVar11,iStack_c04,iVar6);
  }
  iVar11 = -1;
  pcVar13 = acStack_bb8;
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (iVar11 != -2) {
    (*DAT_10121efc)(1,s_RULES___s_10111e5c,acStack_bb8);
  }
  (*DAT_10121e20)(acStack_bf8,0);
  iVar11 = -1;
  pcVar13 = acStack_5dc;
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (iVar11 != -2) {
    (*DAT_10121ea4)(acStack_5dc);
  }
  return;
}

