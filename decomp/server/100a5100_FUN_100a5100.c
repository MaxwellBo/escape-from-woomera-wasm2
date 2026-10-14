
void __thiscall FUN_100a5100(undefined1 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  undefined3 uVar10;
  
  pbVar6 = *(byte **)(param_2 + 4);
  pbVar11 = &DAT_10119970;
  pbVar3 = pbVar6;
  puVar7 = param_1;
  do {
    bVar2 = *pbVar3;
    uVar10 = (undefined3)((uint)puVar7 >> 8);
    puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_100a5138:
      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_100a513d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_100a5138;
    pbVar3 = pbVar3 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_100a513d:
  if (iVar4 != 0) {
    pcVar13 = s_landmark_10119940;
    pbVar3 = pbVar6;
    do {
      bVar2 = *pbVar3;
      uVar10 = (undefined3)((uint)puVar7 >> 8);
      puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
      bVar15 = bVar2 < (byte)*pcVar13;
      if (bVar2 != *pcVar13) {
LAB_100a51e1:
        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_100a51e6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
      bVar15 = bVar2 < (byte)pcVar13[1];
      if (bVar2 != pcVar13[1]) goto LAB_100a51e1;
      pbVar3 = pbVar3 + 2;
      pcVar13 = pcVar13 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_100a51e6:
    if (iVar4 != 0) {
      pcVar13 = s_changetarget_10104b1c;
      pbVar3 = pbVar6;
      do {
        bVar2 = *pbVar3;
        uVar10 = (undefined3)((uint)puVar7 >> 8);
        puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
        bVar15 = bVar2 < (byte)*pcVar13;
        if (bVar2 != *pcVar13) {
LAB_100a526c:
          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_100a5271;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
        bVar15 = bVar2 < (byte)pcVar13[1];
        if (bVar2 != pcVar13[1]) goto LAB_100a526c;
        pbVar3 = pbVar3 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_100a5271:
      if (iVar4 == 0) {
        uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x19c) = uVar5;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar13 = s_changedelay_1011990c;
      do {
        bVar2 = *pbVar6;
        uVar10 = (undefined3)((uint)puVar7 >> 8);
        puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
        bVar15 = bVar2 < (byte)*pcVar13;
        if (bVar2 != *pcVar13) {
LAB_100a52c1:
          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_100a52c6;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        puVar7 = (undefined1 *)CONCAT31(uVar10,bVar2);
        bVar15 = bVar2 < (byte)pcVar13[1];
        if (bVar2 != pcVar13[1]) goto LAB_100a52c1;
        pbVar6 = pbVar6 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_100a52c6:
      if (iVar4 == 0) {
        fVar16 = FUN_100c82a6(puVar7,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0x1a0) = (float)fVar16;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      FUN_100991d0(param_1,param_2);
      return;
    }
    uVar8 = 0xffffffff;
    pcVar13 = *(char **)(param_2 + 8);
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    if (0x1f < ~uVar8 - 1) {
      (*DAT_10121efc)(4,s_Landmark_name___s__too_long__32_c_10119918,*(char **)(param_2 + 8));
    }
    uVar8 = 0xffffffff;
    pcVar13 = *(char **)(param_2 + 8);
    do {
      pcVar12 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar13 = pcVar12 + -uVar8;
    pcVar12 = param_1 + 0x17c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar12 = pcVar12 + 1;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  uVar8 = 0xffffffff;
  pcVar13 = *(char **)(param_2 + 8);
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (0x1f < ~uVar8 - 1) {
    (*DAT_10121efc)(4,s_Map_name___s__too_long__32_chars_1011994c,*(char **)(param_2 + 8));
  }
  uVar8 = 0xffffffff;
  pcVar13 = param_1 + 0x15c;
  pcVar12 = *(char **)(param_2 + 8);
  do {
    pcVar14 = pcVar12;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar12 = pcVar14 + -uVar8;
  pcVar14 = pcVar13;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  cVar1 = *pcVar13;
  while (cVar1 != '\0') {
    uVar8 = FUN_100c94bf((int)cVar1);
    *pcVar13 = (char)uVar8;
    pcVar12 = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
    cVar1 = *pcVar12;
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

