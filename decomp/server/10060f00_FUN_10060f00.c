
void __thiscall FUN_10060f00(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this_00;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_TriggerTarget_1011158c;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10060f38:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10060f3d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10060f38;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10060f3d:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)((int)this + 0x2e8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_TriggerCondition_10111578;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10060f8d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10060f92;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10060f8d;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10060f92:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x2e4) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iClass_10108bf0;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10060fe1:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10060fe6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10060fe1;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10060fe6:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x300) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iPlayerReact_1011117c;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10061035:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1006103a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10061035;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1006103a:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x304) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100991d0(this,param_1);
  return;
}

