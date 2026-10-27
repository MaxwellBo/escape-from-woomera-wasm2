
void __thiscall FUN_10074050(void *this,int param_1)

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
  longlong lVar12;
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
LAB_10074088:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1007408d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10074088;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1007408d:
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
LAB_100740dc:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100740e1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_100740dc;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100740e1:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xe8) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_height_101048dc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10074130:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10074135;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10074130;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10074135:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 300) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_rotation_10113c88;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10074184:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10074189;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10074184;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10074189:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0x148) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_movesnd_10107534;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100741d8:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100741dd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100741d8;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100741dd:
  if (iVar3 == 0) {
    FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    lVar12 = __ftol();
    *(char *)((int)this + 0x15c) = (char)lVar12;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_stopsnd_1010752c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10074231:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10074236;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10074231;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10074236:
  if (iVar3 == 0) {
    FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    lVar12 = __ftol();
    *(char *)((int)this + 0x15d) = (char)lVar12;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_custommovesnd_10113c78;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1007428a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1007428f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1007428a;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1007428f:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(*(int *)((int)this + 4) + 0x1e8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_customstopsnd_10113c68;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100742e2:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100742e7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100742e2;
    pbVar2 = pbVar2 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100742e7:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(*(int *)((int)this + 4) + 0x1ec) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar9 = s_volume_10113c60;
  do {
    bVar1 = *pbVar5;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1007433a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1007433f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1007433a;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1007433f:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(puVar6,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0x160) = (float)fVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100991d0(this,param_1);
  return;
}

