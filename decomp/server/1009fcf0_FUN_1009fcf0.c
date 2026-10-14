
void __thiscall FUN_1009fcf0(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  undefined1 auStack_80 [128];
  undefined3 uVar7;
  
  pbVar2 = *(byte **)(param_2 + 4);
  pbVar8 = &DAT_1011376c;
  pbVar3 = pbVar2;
  puVar6 = param_1;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1009fd31:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fd36;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1009fd31;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fd36:
  if (iVar4 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0x148) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_10119114;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1009fd8b:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fd90;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1009fd8b;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fd90:
  if (iVar4 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0x14c) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_master_10104684;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1009fde5:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fdea;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1009fde5;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fdea:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x150) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_m_iszThreadName_10118e14;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1009fe40:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fe45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1009fe40;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fe45:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x158) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_m_iszLocusThread_10118e00;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1009fe9b:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fea0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1009fe9b;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fea0:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x15c) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1011910c;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1009fef6:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009fefb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1009fef6;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009fefb:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(puVar6,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x154) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_triggerstate_10110638;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1009ff50:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009ff55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1009ff50;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1009ff55:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(puVar6,*(byte **)(param_2 + 8));
    switch(uVar5) {
    case 1:
      *(undefined4 *)(param_1 + 0x168) = 1;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x168) = 0;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x168) = 4;
      break;
    case 4:
      *(uint *)(*(int *)(param_1 + 4) + 0x1a0) =
           *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 0x40000000;
      break;
    default:
      *(undefined4 *)(param_1 + 0x168) = 3;
    }
    *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 0x20000000
    ;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  if (0xf < *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    return;
  }
  FUN_100b1090((char *)pbVar2,auStack_80);
  uVar5 = (*DAT_10121f14)(auStack_80);
  puVar6 = *(undefined1 **)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + (int)puVar6 * 4 + 200) = uVar5;
  fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
  *(float *)(param_1 + *(int *)(param_1 + 0xbc) * 4 + 0x108) = (float)fVar11;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

