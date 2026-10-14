
void __thiscall FUN_10036460(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  void *this_00;
  void *this_01;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  undefined3 uVar7;
  
  pbVar6 = *(byte **)(param_1 + 4);
  pcVar8 = s_explosion_10108c70;
  pbVar2 = pbVar6;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003649a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1003649f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003649a;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003649f:
  if (iVar3 == 0) {
    uVar4 = FUN_100d8b20(this_00,*(byte **)(param_1 + 8),(byte *)s_directed_10108c64);
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0xcc) = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    uVar4 = FUN_100d8b20(this_01,*(byte **)(param_1 + 8),(byte *)s_random_10108c5c);
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_material_10108c50;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10036541:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10036546;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10036541;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10036546:
  if (iVar3 == 0) {
    iVar3 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    if ((-1 < iVar3) && (iVar3 < 10)) {
      *(int *)((int)this + 200) = iVar3;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)((int)this + 200) = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_deadmodel_10108c44;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100365b7:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100365bc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100365b7;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100365bc:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_shards_10108c3c;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100365f9:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100365fe;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100365f9;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100365fe:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_gibmodel_10108c30;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003663b:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10036640;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003663b;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10036640:
  if (iVar3 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)((int)this + 0xd8) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_spawnobject_10108c24;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10036694:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10036699;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10036694;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10036699:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    if ((0 < (int)uVar4) && (uVar4 < 0x16)) {
      *(int *)((int)this + 0xdc) =
           *(int *)(&DAT_10108768 + uVar4 * 4) - *(int *)(DAT_10122044 + 0x98);
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_explodemagnitude_10108c10;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003670a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1003670f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003670a;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003670f:
  if (iVar3 == 0) {
    uVar5 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)(*(int *)((int)this + 4) + 0x184) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar9 = &DAT_10108c0c;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_10036765:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1003676a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_10036765;
    pbVar2 = pbVar2 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003676a:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_respawn_10108c04;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100367a7:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100367ac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100367a7;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100367ac:
  if (iVar3 == 0) {
    uVar5 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0xe0) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_whenhit_10108bfc;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100367ff:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10036804;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100367ff;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10036804:
  if (iVar3 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)((int)this + 0xf4) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iClass_10108bf0;
  do {
    bVar1 = *pbVar6;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10036858:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1003685d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    this_00 = (void *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10036858;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003685d:
  if (iVar3 == 0) {
    uVar5 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0xf0) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10098a10(this,param_1);
  return;
}

