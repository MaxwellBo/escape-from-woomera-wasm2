
void __thiscall FUN_10093160(void *param_1,int param_2)

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
  pcVar7 = s_channel_10110630;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1009319a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1009319f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1009319a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1009319f:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 300) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_preset_10116f80;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100931f2:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100931f7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100931f2;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100931f7:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xbc) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitch_10108408;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1009324a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1009324f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1009324a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1009324f:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (0xff < *(int *)((int)param_1 + 0xc0)) {
      *(undefined4 *)((int)param_1 + 0xc0) = 0xff;
    }
    if (*(int *)((int)param_1 + 0xc0) < 0) {
      *(undefined4 *)((int)param_1 + 0xc0) = 0;
      return;
    }
  }
  else {
    pcVar7 = s_pitchstart_10116f74;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100932c9:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100932ce;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100932c9;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100932ce:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)((int)param_1 + 0xc4) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      if (0xff < *(int *)((int)param_1 + 0xc4)) {
        *(undefined4 *)((int)param_1 + 0xc4) = 0xff;
      }
      if (*(int *)((int)param_1 + 0xc4) < 0) {
        *(undefined4 *)((int)param_1 + 0xc4) = 0;
        return;
      }
    }
    else {
      pcVar7 = s_spinup_10116f6c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10093348:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1009334d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093348;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1009334d:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 200) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 200) = 100;
        }
        if (*(int *)((int)param_1 + 200) < 0) {
          *(undefined4 *)((int)param_1 + 200) = 0;
        }
        if (0 < *(int *)((int)param_1 + 200)) {
          *(int *)((int)param_1 + 200) = (0x65 - *(int *)((int)param_1 + 200)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0xfc) = *(undefined4 *)((int)param_1 + 200);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_spindown_10116f60;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100933e3:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100933e8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100933e3;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100933e8:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xcc) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xcc) = 100;
        }
        if (*(int *)((int)param_1 + 0xcc) < 0) {
          *(undefined4 *)((int)param_1 + 0xcc) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0xcc)) {
          *(int *)((int)param_1 + 0xcc) = (0x65 - *(int *)((int)param_1 + 0xcc)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0x100) = *(undefined4 *)((int)param_1 + 0xcc);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_volstart_10116f54;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1009347e:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10093483;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1009347e;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10093483:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xd4) = iVar3;
        if (10 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xd4) = 10;
        }
        if (*(int *)((int)param_1 + 0xd4) < 0) {
          *(undefined4 *)((int)param_1 + 0xd4) = 0;
        }
        *(int *)((int)param_1 + 0xd4) = *(int *)((int)param_1 + 0xd4) * 10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_fadein_1010856c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10093504:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10093509;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093504;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10093509:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xd8) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xd8) = 100;
        }
        if (*(int *)((int)param_1 + 0xd8) < 0) {
          *(undefined4 *)((int)param_1 + 0xd8) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0xd8)) {
          *(int *)((int)param_1 + 0xd8) = (0x65 - *(int *)((int)param_1 + 0xd8)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0x10c) = *(undefined4 *)((int)param_1 + 0xd8);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_fadeout_10108564;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1009359f:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100935a4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1009359f;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100935a4:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xdc) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xdc) = 100;
        }
        if (*(int *)((int)param_1 + 0xdc) < 0) {
          *(undefined4 *)((int)param_1 + 0xdc) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0xdc)) {
          *(int *)((int)param_1 + 0xdc) = (0x65 - *(int *)((int)param_1 + 0xdc)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0x110) = *(undefined4 *)((int)param_1 + 0xdc);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfotype_10116f4c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1009363a:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1009363f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1009363a;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1009363f:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xe0) = iVar3;
        if (4 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xe0) = 2;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lforate_10116f44;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100936a1:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100936a6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100936a1;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100936a6:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xe4) = iVar3;
        if (1000 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xe4) = 1000;
        }
        if (*(int *)((int)param_1 + 0xe4) < 0) {
          *(undefined4 *)((int)param_1 + 0xe4) = 0;
        }
        *(int *)((int)param_1 + 0xe4) = *(int *)((int)param_1 + 0xe4) << 8;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfomodpitch_10116f38;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10093727:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1009372c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093727;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1009372c:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xe8) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xe8) = 100;
        }
        if (*(int *)((int)param_1 + 0xe8) < 0) {
          *(undefined4 *)((int)param_1 + 0xe8) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfomodvol_10116f2c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1009379c:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100937a1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1009379c;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100937a1:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xec) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xec) = 100;
        }
        if (*(int *)((int)param_1 + 0xec) < 0) {
          *(undefined4 *)((int)param_1 + 0xec) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_cspinup_10116f24;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10093811:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10093816;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093811;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10093816:
      if (iVar3 == 0) {
        iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(int *)((int)param_1 + 0xf0) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0xf0) = 100;
        }
        if (*(int *)((int)param_1 + 0xf0) < 0) {
          *(undefined4 *)((int)param_1 + 0xf0) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_movewith_10101364;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10093886:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1009388b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093886;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1009388b:
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
LAB_100938dc:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100938e1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100938dc;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100938e1:
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
LAB_10093931:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10093936;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10093931;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10093936:
      if (iVar3 == 0) {
        uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(undefined4 *)((int)param_1 + 0x60) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  return;
}

