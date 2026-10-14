
void __thiscall FUN_100a1fc0(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_m_iVisible_10118d44;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a1ff8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a1ffd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a1ff8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a1ffd:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iSolid_10118d38;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a204c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a2051;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a204c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a2051:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_10118d6c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_100a20a0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a20a5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_100a20a0;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a20a5:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xbc) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_voicePitch_1010e8f8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a20f5:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a20fa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a20f5;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a20fa:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xdc) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iPrisoner_10118d60;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a2149:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a214e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a2149;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a214e:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 200) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iMonsterClip_10118d50;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a219d:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a21a2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a219d;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a21a2:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iClass_10108bf0;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a21f1:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a21f6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a21f1;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a21f6:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iPlayerReact_1011117c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a2245:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a224a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a2245;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a224a:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_flRadius_10115f74;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a2299:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a229e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a2299;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a229e:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xb8) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_iProvoked_10118d2c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a22ed:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a22f2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a22ed;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a22f2:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_m_bloodColor_1010d220;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100a2341:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100a2346;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100a2341;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a2346:
  if (iVar3 != 0) {
    pcVar7 = s_m_iBloodColor_10107d90;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100a2379:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100a237e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100a2379;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100a237e:
    if (iVar3 != 0) {
      pcVar7 = s_m_fFramerate_10118d1c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a23b1:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a23b6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a23b1;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a23b6:
      if (iVar3 == 0) {
        fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0xe4) = (float)fVar10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_m_fController0_10118d0c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a2405:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a240a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a2405;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a240a:
      if (iVar3 == 0) {
        fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0xe8) = (float)fVar10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_m_fController1_10118cfc;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a2459:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a245e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a2459;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a245e:
      if (iVar3 == 0) {
        fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0xec) = (float)fVar10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_m_fController2_10118cec;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a24ad:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a24b2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a24ad;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a24b2:
      if (iVar3 == 0) {
        fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0xf0) = (float)fVar10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_m_fController3_10118cdc;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a2501:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a2506;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a2501;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a2506:
      if (iVar3 == 0) {
        fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(param_1 + 0xf4) = (float)fVar10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_movewith_10101364;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a2555:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a255a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a2555;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a255a:
      if (iVar3 == 0) {
        uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x14) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_skill_1010135c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a25a7:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a25ac;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a25a7;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a25ac:
      if (iVar3 == 0) {
        uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_style_10101354;
      do {
        bVar1 = *pbVar5;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100a25f8:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a25fd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100a25f8;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100a25fd:
      if (iVar3 == 0) {
        uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x60) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      return;
    }
  }
  uVar4 = FUN_100c8388(*(void **)(param_2 + 8),*(void **)(param_2 + 8));
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

