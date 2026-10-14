
void __thiscall FUN_100991d0(void *this,int param_1)

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
  
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar8 = &DAT_10108c0c;
  pbVar2 = pbVar5;
  puVar6 = this;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_10099208:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009920d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10099208;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1009920d:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xec) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1011376c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1009925c:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10099261;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1009925c;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10099261:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xe8) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_master_10104684;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100992b0:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100992b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100992b0;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100992b5:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)((int)this + 0x158) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_distance_10103ce8;
  do {
    bVar1 = *pbVar5;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10099305:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1009930a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10099305;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1009930a:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xe4) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10098a10(this,param_1);
  return;
}

