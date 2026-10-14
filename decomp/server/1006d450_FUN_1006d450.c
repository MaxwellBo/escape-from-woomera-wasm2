
void __thiscall FUN_1006d450(void *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  void *this;
  void *extraout_ECX;
  char *pcVar8;
  bool bVar9;
  undefined3 uVar7;
  
  pbVar3 = *(byte **)(param_2 + 4);
  pcVar8 = s_hinttype_10112cd4;
  this = param_1;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1006d48f:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1006d494;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1006d48f;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1006d494:
  if (iVar4 == 0) {
    uVar2 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined2 *)((int)param_1 + 0xb8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = 1;
    this = extraout_ECX;
  }
  pbVar3 = *(byte **)(param_2 + 4);
  pcVar8 = s_activity_10112cc8;
  pbVar5 = pbVar3;
  do {
    bVar1 = *pbVar5;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1006d4e1:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1006d4e6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1006d4e1;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1006d4e6:
  if (iVar4 == 0) {
    uVar2 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined2 *)((int)param_1 + 0xba) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movewith_10101364;
  pbVar5 = pbVar3;
  do {
    bVar1 = *pbVar5;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1006d537:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1006d53c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1006d537;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1006d53c:
  if (iVar4 == 0) {
    uVar6 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_skill_1010135c;
  pbVar5 = pbVar3;
  do {
    bVar1 = *pbVar5;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1006d58a:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1006d58f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1006d58a;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1006d58f:
  if (iVar4 == 0) {
    uVar6 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x5c) = uVar6;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_style_10101354;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1006d5dc:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1006d5e1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1006d5dc;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1006d5e1:
  if (iVar4 == 0) {
    uVar6 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x60) = uVar6;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

