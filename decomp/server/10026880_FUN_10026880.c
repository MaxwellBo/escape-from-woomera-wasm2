
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10026880(void *this,int param_1)

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
  longlong lVar11;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar7 = &DAT_10103c1c;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100268b8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100268bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100268b8;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100268bd:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(int *)(*(int *)((int)this + 4) + 0x110) = (int)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movesnd_10107534;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026914:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026919;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026914;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026919:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x15d) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_stopsnd_1010752c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002696d:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026972;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002696d;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026972:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x15e) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_healthvalue_10107520;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100269c6:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100269cb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100269c6;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100269cb:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x15c) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_locked_sound_10104b0c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026a1f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026a24;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026a1f;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026a24:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x184) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_locked_sentence_10104afc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026a78:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026a7d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026a78;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026a7d:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x185) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_unlocked_sound_10104aec;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026ad1:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026ad6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026ad1;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026ad6:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x186) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_unlocked_sentence_10104ad8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026b2a:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026b2f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026b2a;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026b2f:
  if (iVar3 == 0) {
    FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    lVar11 = __ftol();
    *(char *)((int)this + 0x187) = (char)lVar11;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_immediatemode_10107510;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026b83:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026b88;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026b83;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026b88:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x18c) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_onoffmode_10107504;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026bd7:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026bdc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026bd7;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026bdc:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x188) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_directuse_101074f8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026c2b:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026c30;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026c2b;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026c30:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 400) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_WaveHeight_101074ec;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10026c7f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10026c84;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10026c7f;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026c84:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this_00,*(byte **)(param_1 + 8));
    *(float *)(*(int *)((int)this + 4) + 0x144) = (float)(fVar10 * (float10)_DAT_100e1b30);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100991d0(this,param_1);
  return;
}

