
void __thiscall FUN_1002d530(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *this_00;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar7 = &DAT_10107e44;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1002d568:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002d56d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1002d568;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002d56d:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0xcc) = uVar4;
    *(undefined4 *)((int)this + 200) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flVelocity_101082b0;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002d5c2:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002d5c7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002d5c2;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002d5c7:
  if (iVar3 != 0) {
    pcVar8 = s_m_flVariance_10107e00;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d617:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d61c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d617;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d61c:
    if (iVar3 == 0) {
      fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
      *(float *)((int)this + 0xd8) = (float)fVar10;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = s_m_flGibLife_10107df4;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d66b:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d670;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d66b;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d670:
    if (iVar3 == 0) {
      fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
      *(float *)((int)this + 0xdc) = (float)fVar10;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = s_m_iszTargetName_101082a0;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d6bf:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d6c4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d6bf;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d6c4:
    if (iVar3 == 0) {
      uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)((int)this + 0xe0) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = s_m_iszPosition_10107dd4;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d714:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d719;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d714;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d719:
    if (iVar3 == 0) {
      uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)((int)this + 0xe4) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = s_m_iszVelocity_10107dc4;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d769:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d76e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d769;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d76e:
    if (iVar3 == 0) {
      uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)((int)this + 0xe8) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = s_m_iszVelFactor_10107db4;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this_00 >> 8);
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1002d7be:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1002d7c3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1002d7be;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d7c3:
    if (iVar3 != 0) {
      pcVar8 = s_m_iszSpawnTarget_10107da0;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this_00 >> 8);
        this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1002d7f6:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_1002d7fb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1002d7f6;
        pbVar2 = pbVar2 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1002d7fb:
      if (iVar3 == 0) {
        uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
        *(undefined4 *)((int)this + 0xf0) = uVar4;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      pcVar8 = s_m_iBloodColor_10107d90;
      do {
        bVar1 = *pbVar5;
        uVar6 = (undefined3)((uint)this_00 >> 8);
        this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1002d84b:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_1002d850;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1002d84b;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1002d850:
      if (iVar3 == 0) {
        uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
        *(undefined4 *)((int)this + 0xf4) = uVar4;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      FUN_10098a10(this,param_1);
      return;
    }
  }
  uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)((int)this + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

