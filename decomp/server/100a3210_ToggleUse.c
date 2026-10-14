
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTrigger::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseTrigger::ToggleUse
          (CBaseTrigger *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0xa3210  251  ?ToggleUse@CBaseTrigger@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  iVar1 = *(int *)(this + 4);
  if (*(int *)(iVar1 + 0x10c) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 1;
    *(float *)(DAT_10122044 + 8) = *(float *)(DAT_10122044 + 8) + _DAT_100dd618;
    FUN_100afe10((int)this,*(int *)(this + 4) + 8);
    return;
  }
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  FUN_100afe10((int)this,*(int *)(this + 4) + 8);
  return;
}

