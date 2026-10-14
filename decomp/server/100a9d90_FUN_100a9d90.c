
void __thiscall FUN_100a9d90(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  undefined3 uVar7;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pbVar8 = &DAT_1011376c;
  pbVar2 = pbVar5;
  puVar6 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_100a9dc8:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100a9dcd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_100a9dc8;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a9dcd:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xe0) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_moveto_10119e54;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100a9e1c:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100a9e21;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100a9e1c;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a9e21:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xdc) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_acceleration_10119e44;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100a9e71:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100a9e76;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100a9e71;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a9e76:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xf8) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_deceleration_10119e34;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100a9ec5:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100a9eca;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100a9ec5;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a9eca:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xfc) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar9 = s_m_iszViewEntity_10118ae8;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100a9f19:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100a9f1e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100a9f19;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a9f1e:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x104) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_10098a10(param_1,param_2);
  return;
}

