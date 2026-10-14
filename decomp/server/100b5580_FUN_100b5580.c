
void __thiscall FUN_100b5580(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_texture_10108094;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100b55b8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100b55bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100b55b8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100b55bd:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121eb8)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = uVar4;
    if (*(int *)(*(int *)((int)param_1 + 4) + 0x110) < 0) {
      (*DAT_10121efc)(1,s_Can_t_find_decal__s_1011beec,*(undefined4 *)(param_2 + 8));
      return;
    }
  }
  else {
    pcVar7 = s_movewith_10101364;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100b562e:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100b5633;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100b562e;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100b5633:
    if (iVar3 == 0) {
      uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
      *(undefined4 *)((int)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_skill_1010135c;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100b5680:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100b5685;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100b5680;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100b5685:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)((int)param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_style_10101354;
    do {
      bVar1 = *pbVar5;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100b56d1:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100b56d6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100b56d1;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100b56d6:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)((int)param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

