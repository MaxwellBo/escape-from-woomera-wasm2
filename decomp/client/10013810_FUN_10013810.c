
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10013810(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  int aiStack_110 [4];
  undefined1 auStack_100 [256];
  
  fVar3 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
  if (fVar3 != (float10)_DAT_10059a18) {
    (*DAT_100a5068)(s_CVoiceStatus__SetPlayerBlockedSt_10077d30);
  }
  iVar2 = (*DAT_100a5168)(param_1,aiStack_110);
  if (iVar2 != 0) {
    fVar3 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
    if (fVar3 != (float10)_DAT_10059a18) {
      (*DAT_100a5068)(s_CVoiceStatus__SetPlayerBlockedSt_10077d04);
    }
    if ((*(uint *)((int)this + (param_1 + -1 >> 5) * 4 + 0x28) & 1 << ((byte)(param_1 + -1) & 0x1f))
        != 0) {
      fVar3 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
      if (fVar3 != (float10)_DAT_10059a18) {
        bVar1 = FUN_10011fa0((void *)((int)this + 0x177f8),aiStack_110);
        uVar6 = (uint)!bVar1;
        puVar4 = auStack_100;
        pcVar5 = s_CVoiceStatus__SetPlayerBlockedSt_10077cc0;
        FUN_100499f0(puVar4,(byte *)s_CVoiceStatus__SetPlayerBlockedSt_10077cc0);
        (*DAT_100a5068)(auStack_100,puVar4,pcVar5,param_1,uVar6);
      }
      bVar1 = FUN_10011fa0((void *)((int)this + 0x177f8),aiStack_110);
      FUN_10011fc0((void *)((int)this + 0x177f8),aiStack_110,!bVar1);
      FUN_10012e90(this,'\0');
    }
  }
  return;
}

