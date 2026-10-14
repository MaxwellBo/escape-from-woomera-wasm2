
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1001af50(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  float fStack_108;
  int iStack_104;
  undefined1 auStack_100 [256];
  
  iVar5 = *(int *)(param_1 + 0x14);
  if (999 < iVar5) {
    return 1;
  }
  if (iVar5 < 1) {
    return 1;
  }
  if (800 < iVar5) {
    uVar4 = 0;
    goto LAB_1001b07c;
  }
  if (iVar5 < 0x259) {
    if (iVar5 < 0x1f5) {
      if (400 < iVar5) {
        uVar4 = 8;
        fStack_108 = 0.6;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (300 < iVar5) {
        uVar4 = 8;
        fStack_108 = 0.7;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (200 < iVar5) {
        uVar4 = 0x1c;
        fStack_108 = 0.78;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (0x96 < iVar5) {
        uVar4 = 0x28;
        fStack_108 = 0.8;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (100 < iVar5) {
        uVar4 = 0x3c;
        fStack_108 = 0.85;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (0x4b < iVar5) {
        uVar4 = 0x50;
        fStack_108 = 0.9;
        iStack_104 = 3;
        goto LAB_1001b07c;
      }
      if (iVar5 < 0x33) {
        uVar4 = 0x5f;
        fStack_108 = 1.0;
      }
      else {
        uVar4 = 0x5a;
        fStack_108 = 0.95;
      }
    }
    else {
      uVar4 = 4;
      fStack_108 = 0.5;
    }
  }
  else {
    uVar4 = 2;
    fStack_108 = 0.4;
  }
  iStack_104 = 2;
LAB_1001b07c:
  uVar3 = FUN_1004ac80();
  fVar1 = (float)(uVar3 & 0x7f) * fStack_108 * _DAT_1005fa50;
  fVar2 = (float)_DAT_10059cf0;
  uVar3 = FUN_1004ac80();
  if ((uVar4 <= (uVar3 & 0x7f)) && (uVar3 = FUN_1004ac80(), uVar4 <= (uVar3 & 0x7f))) {
    return 1;
  }
  uVar4 = FUN_1004ac80();
  uVar4 = uVar4 & 1;
  if (2 < iStack_104) {
    uVar3 = FUN_1004ac80();
    uVar4 = uVar4 + (uVar3 & 1);
  }
  iVar5 = uVar4 + 1;
  puVar6 = auStack_100;
  pcVar7 = s_player_geiger_d_wav_10078584;
  FUN_100499f0(puVar6,(byte *)s_player_geiger_d_wav_10078584);
  (*DAT_100a5048)(auStack_100,fVar1 + fVar2,puVar6,pcVar7,iVar5);
  return 1;
}

