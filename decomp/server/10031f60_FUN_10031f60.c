
void __thiscall FUN_10031f60(void *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  void *this;
  char *pcVar8;
  bool bVar9;
  undefined3 uVar7;
  
  pbVar6 = *(byte **)(param_2 + 4);
  pcVar8 = s_m_iTime_10107cb4;
  pbVar3 = pbVar6;
  this = param_1;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10031f98:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10031f9d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10031f98;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10031f9d:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xb8) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iRadius_10107ca8;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10031fec:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10031ff1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10031fec;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10031ff1:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xbc) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iHeight_10107cbc;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032040:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10032045;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032040;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10032045:
  if (iVar4 == 0) {
    iVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(int *)((int)param_1 + 0xc0) = iVar4 / 2;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iScrollRate_10107c98;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032099:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003209e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032099;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003209e:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xc4) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iNoise_10107cc8;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100320ed:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100320f2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100320ed;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100320f2:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 200) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iFrameRate_10107c88;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032141:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10032146;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032141;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10032146:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xcc) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iStartFrame_10107c78;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032195:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003219a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032195;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003219a:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xd0) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iszPosition_10107dd4;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100321e9:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100321ee;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100321e9;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100321ee:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xdc) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_cType_10107c5c;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003223e:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10032243;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003223e;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10032243:
  if (iVar4 == 0) {
    uVar2 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined1 *)((int)param_1 + 0xd8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movewith_10101364;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032292:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10032297;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032292;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10032297:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_skill_1010135c;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100322e4:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100322e9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100322e4;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100322e9:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_style_10101354;
  do {
    bVar1 = *pbVar6;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10032335:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003233a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    this = (void *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10032335;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003233a:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x60) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

