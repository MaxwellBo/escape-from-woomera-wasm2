
void __thiscall FUN_10073190(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *this;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pbVar7 = &DAT_1011376c;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100731c8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100731cd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100731c8;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100731cd:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xb8) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_turnspeed_10113760;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1007321c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10073221;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1007321c;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10073221:
  if (iVar3 == 0) {
    if (**(char **)(param_2 + 8) != '\0') {
      *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 0x800000
      ;
      FUN_100b0880((float *)(*(int *)(param_1 + 4) + 0x5c),*(char **)(param_2 + 8));
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movewith_10101364;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1007328e:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10073293;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1007328e;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10073293:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_skill_1010135c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100732e0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100732e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100732e0;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100732e5:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_style_10101354;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10073331:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10073336;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10073331;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10073336:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

