
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10012e90(void *this,char param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int aiStack_b10 [4];
  char acStack_b00 [512];
  undefined1 auStack_900 [256];
  char acStack_800 [2048];
  
  pcVar3 = (char *)(*DAT_100a5118)();
  if (*pcVar3 == '\0') {
    fVar10 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
    if (fVar10 != (float10)_DAT_10059a18) {
      (*DAT_100a5068)(s_CVoiceStatus__UpdateServerState__10077bf8);
      return;
    }
  }
  else {
    fVar10 = (float10)(*DAT_100a502c)(s_voice_modenable_100779f4);
    if ((param_1 != '\0') ||
       (*(uint *)((int)this + 0x1c) != (uint)(fVar10 != (float10)_DAT_10059a18))) {
      *(uint *)((int)this + 0x1c) = (uint)(fVar10 != (float10)_DAT_10059a18);
      FUN_1004a4b6(auStack_900,0x100,(byte *)s_VModEnable__d_10077be8);
      (*DAT_100a503c)(auStack_900);
      fVar10 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
      if (fVar10 != (float10)_DAT_10059a18) {
        puVar13 = auStack_900;
        pcVar3 = acStack_b00;
        pcVar11 = s_CVoiceStatus__UpdateServerState__10077bb8;
        FUN_100499f0(pcVar3,(byte *)s_CVoiceStatus__UpdateServerState__10077bb8);
        (*DAT_100a5068)(acStack_b00,pcVar3,pcVar11,puVar13);
      }
    }
    FUN_100499f0(acStack_800,&DAT_10077bb0);
    uVar8 = 0;
    uVar9 = 0;
    uVar6 = 0;
    do {
      uVar7 = uVar6 + 1;
      iVar4 = (*DAT_100a5168)(uVar7,aiStack_b10);
      if (iVar4 != 0) {
        bVar2 = FUN_10011fa0((void *)((int)this + 0x177f8),aiStack_b10);
        bVar5 = (byte)uVar6;
        if (bVar2) {
          uVar9 = uVar9 | 1 << (bVar5 & 0x1f);
        }
        if ((*(uint *)((int)this + ((int)uVar6 >> 5) * 4 + 0x30) & 1 << (bVar5 & 0x1f)) != 0) {
          uVar8 = uVar8 | 1 << (bVar5 & 0x1f);
        }
      }
      uVar6 = uVar7;
    } while (uVar7 < 0x20);
    FUN_100499f0(acStack_b00,&DAT_10077bac);
    uVar6 = 0xffffffff;
    pcVar3 = acStack_b00;
    do {
      pcVar11 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar3 = acStack_800;
    do {
      pcVar12 = pcVar3;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if ((uVar8 == uVar9) && (param_1 == '\0')) {
      fVar10 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
      if (fVar10 != (float10)_DAT_10059a18) {
        (*DAT_100a5068)(s_CVoiceStatus__UpdateServerState__10077b80);
      }
    }
    else {
      fVar10 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
      if (fVar10 != (float10)_DAT_10059a18) {
        pcVar11 = acStack_800;
        pcVar3 = acStack_b00;
        pcVar12 = s_CVoiceStatus__UpdateServerState__10077bb8;
        FUN_100499f0(pcVar3,(byte *)s_CVoiceStatus__UpdateServerState__10077bb8);
        (*DAT_100a5068)(acStack_b00,pcVar3,pcVar12,pcVar11);
      }
      (*DAT_100a5174)(acStack_800);
    }
    fVar10 = (float10)(*DAT_100a50c8)();
    *(float *)((int)this + 0x18) = (float)fVar10;
  }
  return;
}

