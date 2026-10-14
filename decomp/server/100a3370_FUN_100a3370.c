
void __thiscall FUN_100a3370(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_damage_10108078;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a33a8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100a33ad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a33a8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a33ad:
  if (iVar3 == 0) {
    fVar9 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1e0) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_damagetype_101197b4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a33ff:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100a3404;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a33ff;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a3404:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_cangib_101197ac;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a345b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100a3460;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a345b;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a3460:
  if (iVar3 != 0) {
    FUN_100991d0(param_1,param_2);
    return;
  }
  iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
  if (iVar3 == 1) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x2000;
  }
  else if (iVar3 != 2) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x1000;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

