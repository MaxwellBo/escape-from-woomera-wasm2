
void __thiscall FUN_1005b180(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *this_00;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_8;
  undefined1 local_4;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_channel_10110630;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b1bb:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b1c0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b1bb;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b1c0:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0xe0) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_101083cc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1005b212:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b217;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1005b212;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b217:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xbc) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1011062c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1005b269:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b26e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1005b269;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b26e:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xc0) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_effect_10110624;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b2c0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b2c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b2c0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b2c5:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0xc4) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_color_10108354;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b317:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b31c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b317;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b31c:
  if (iVar3 == 0) {
    FUN_100b0a20((undefined4 *)local_10,4,*(char **)(param_1 + 8));
    *(undefined1 *)((int)this + 200) = local_10[0];
    *(undefined1 *)((int)this + 0xc9) = local_c;
    *(undefined1 *)((int)this + 0xca) = local_8;
    *(undefined1 *)((int)this + 0xcb) = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_color2_1011061c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b397:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b39c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b397;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b39c:
  if (iVar3 == 0) {
    FUN_100b0a20((undefined4 *)local_10,4,*(char **)(param_1 + 8));
    *(undefined1 *)((int)this + 0xcc) = local_10[0];
    *(undefined1 *)((int)this + 0xcd) = local_c;
    *(undefined1 *)((int)this + 0xce) = local_8;
    *(undefined1 *)((int)this + 0xcf) = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fadein_1010856c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b417:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b41c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b417;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b41c:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xd0) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fadeout_10108564;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b46e:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b473;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b46e;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b473:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xd4) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_holdtime_10108374;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005b4c5:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b4ca;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005b4c5;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b4ca:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xd8) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_10110614;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_1005b51c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1005b521;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_1005b51c;
    pbVar5 = pbVar5 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b521:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)((int)this + 0xdc) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1005acd0(this,param_1);
  return;
}

