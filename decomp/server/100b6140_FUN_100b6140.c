
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b6140(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *this;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  undefined3 uVar7;
  
  pbVar6 = *(byte **)(param_2 + 4);
  pcVar8 = s_skyname_1011c0e8;
  pbVar3 = pbVar6;
  this = param_1;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6178:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b617d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6178;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b617d:
  if (iVar4 == 0) {
    uVar2 = FUN_100c5b80();
    if (CONCAT31(extraout_var,uVar2) == 1) {
      pcVar8 = s_evening256_1011c0dc;
    }
    else {
      pcVar8 = s_day256_1011c0d4;
    }
    (*DAT_10121ef8)(s_sv_skyname_1011c0c8,pcVar8);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_sounds_10103c4c;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b61de:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b61e3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b61de;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b61e3:
  if (iVar4 == 0) {
    uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(DAT_10122044 + 0x8c) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_WaveHeight_101074ec;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6238:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b623d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6238;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b623d:
  if (iVar4 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x144) = (float)(fVar10 * (float10)_DAT_100e1b30);
    *(undefined4 *)(param_2 + 0xc) = 1;
    (*DAT_10121ef4)(s_sv_wateramp_1011c0bc,*(undefined4 *)(*(int *)(param_1 + 4) + 0x144));
    return;
  }
  pcVar8 = s_MaxRange_1011c0b0;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b62aa:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b62af;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b62aa;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b62af:
  if (iVar4 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_chaptertitle_1011c0a0;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6301:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b6306;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6301;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b6306:
  if (iVar4 == 0) {
    uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_startdark_1011c094;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6359:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b635e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6359;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b635e:
  if (iVar4 == 0) {
    iVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (iVar4 == 0) {
      return;
    }
    *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 1;
    return;
  }
  pcVar8 = s_newunit_1011c08c;
  pbVar3 = pbVar6;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b63c1:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100b63c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    this = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b63c1;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100b63c6:
  if (iVar4 == 0) {
    iVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    if (iVar4 == 0) goto LAB_100b63ed;
    fVar11 = 1.0;
    pcVar8 = s_sv_newunit_1011c080;
  }
  else {
    pcVar8 = s_gametitle_1011c074;
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      uVar7 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100b6426:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100b642b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100b6426;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b642b:
    if (iVar4 == 0) {
      iVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      if (iVar4 != 0) {
        *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 2;
      }
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar8 = s_mapteams_1011c068;
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      uVar7 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100b6482:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100b6487;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100b6482;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b6487:
    if (iVar4 == 0) {
      uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1ac) = uVar5;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar8 = s_defaultteam_1011c05c;
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      uVar7 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100b64da:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100b64df;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100b64da;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b64df:
    if (iVar4 == 0) {
      iVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      if (iVar4 != 0) {
        *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 4;
      }
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar8 = s_startsuit_1011c050;
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      uVar7 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100b6536:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100b653b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100b6536;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b653b:
    if (iVar4 == 0) {
      DAT_101323b0 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar8 = s_allowmonsters_1011c040;
    pbVar3 = pbVar6;
    do {
      bVar1 = *pbVar3;
      uVar7 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100b6589:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100b658e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      this = (undefined1 *)CONCAT31(uVar7,bVar1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100b6589;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100b658e:
    if (iVar4 != 0) {
      pcVar8 = s_movewith_10101364;
      pbVar3 = pbVar6;
      do {
        bVar1 = *pbVar3;
        uVar7 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100b65d3:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100b65d8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100b65d3;
        pbVar3 = pbVar3 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100b65d8:
      if (iVar4 == 0) {
        uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar8 = s_skill_1010135c;
      pbVar3 = pbVar6;
      do {
        bVar1 = *pbVar3;
        uVar7 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100b6625:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100b662a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100b6625;
        pbVar3 = pbVar3 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100b662a:
      if (iVar4 == 0) {
        uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x5c) = uVar5;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar8 = s_style_10101354;
      do {
        bVar1 = *pbVar6;
        uVar7 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100b6676:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100b667b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        this = (undefined1 *)CONCAT31(uVar7,bVar1);
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100b6676;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100b667b:
      if (iVar4 != 0) {
        *(undefined4 *)(param_2 + 0xc) = 0;
        return;
      }
      uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x60) = uVar5;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    fVar11 = (float)fVar10;
    pcVar8 = s_mp_allowmonsters_1010c3d0;
  }
  (*DAT_10121ef4)(pcVar8,fVar11);
LAB_100b63ed:
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

