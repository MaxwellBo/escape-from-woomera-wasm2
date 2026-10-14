
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100132a0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_100 [256];
  
  FUN_10026030(param_2,param_1);
  iVar1 = FUN_10026120();
  *(int *)((int)this + 0x28) = iVar1;
  iVar1 = FUN_10026120();
  *(int *)((int)this + 0x30) = iVar1;
  fVar3 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
  if (fVar3 != (float10)_DAT_10059a18) {
    (*DAT_100a5068)(s_CVoiceStatus__HandleVoiceMaskMsg_10077c78);
    uVar7 = *(undefined4 *)((int)this + 0x28);
    puVar4 = auStack_100;
    uVar6 = 0;
    pcVar5 = s___m_AudiblePlayers__d_____lu_10077c54;
    FUN_100499f0(puVar4,(byte *)s___m_AudiblePlayers__d_____lu_10077c54);
    (*DAT_100a5068)(auStack_100,puVar4,pcVar5,uVar6,uVar7);
    uVar7 = *(undefined4 *)((int)this + 0x30);
    puVar4 = auStack_100;
    uVar6 = 0;
    pcVar5 = s___m_ServerBannedPlayers__d_____l_10077c2c;
    FUN_100499f0(puVar4,(byte *)s___m_ServerBannedPlayers__d_____l_10077c2c);
    (*DAT_100a5068)(auStack_100,puVar4,pcVar5,uVar6,uVar7);
  }
  uVar2 = FUN_10026090();
  *(uint *)((int)this + 0x1c) = uVar2;
  return;
}

