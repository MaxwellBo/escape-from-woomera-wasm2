
/* public: void __thiscall CTriggerEndSection::EndSectionUse(class CBaseEntity *,class CBaseEntity
   *,enum USE_TYPE,float) */

void __thiscall
CTriggerEndSection::EndSectionUse
          (CTriggerEndSection *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0xa6fd0  88
                       ?EndSectionUse@CTriggerEndSection@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar1 == 0)) {
    return;
  }
  *(undefined4 *)(this + 0x7c) = 0;
  if (*(int *)(*(int *)(this + 4) + 0x1d4) != 0) {
    (*DAT_10121f8c)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1d4));
  }
  FUN_100b0ef0((int)this);
  return;
}

