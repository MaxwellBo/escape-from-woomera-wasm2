
void __thiscall FUN_10030c80(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *this;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  undefined3 uVar7;
  
  pbVar6 = *(byte **)(param_2 + 4);
  pcVar8 = s_m_dripSize_10107d44;
  pbVar2 = pbVar6;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030cb8:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030cbd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030cb8;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030cbd:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_burstSize_10107d18;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030d0c:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030d11;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030d0c;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030d11:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_dripSpeed_10108410;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030d60:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030d65;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030d60;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030d65:
  if (iVar3 == 0) {
    iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    iVar5 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    *(int *)(param_1 + 0xcc) = iVar5 + iVar3;
    *(int *)(param_1 + 200) = iVar3 - iVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_brightness_10107f80;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030dca:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030dcf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030dca;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030dcf:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flUpdateTime_10107d08;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030e1e:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030e23;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030e1e;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030e23:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xdc) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flMaxUpdateTime_10107cf4;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030e72:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030e77;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030e72;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030e77:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xe0) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_pitch_10108408;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030ec6:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030ecb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030ec6;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030ecb:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_texture_10108094;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030f1a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030f1f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030f1a;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030f1f:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar9 = &DAT_10107cec;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_10030f6f:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030f74;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_10030f6f;
    pbVar2 = pbVar2 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030f74:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iExtent_10107ce0;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10030fc3:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10030fc8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10030fc3;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030fc8:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_fLifeTime_10107cd4;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10031017:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1003101c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10031017;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003101c:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xec) = (float)fVar11;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_iNoise_10107cc8;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003106b:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10031070;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003106b;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10031070:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xf0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movewith_10101364;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100310bf:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100310c4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100310bf;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100310c4:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_skill_1010135c;
  pbVar2 = pbVar6;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10031111:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10031116;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10031111;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10031116:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_style_10101354;
  do {
    bVar1 = *pbVar6;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10031162:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10031167;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10031162;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10031167:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

