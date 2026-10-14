
/* public: void __thiscall CTriggerEndSection::EndSectionTouch(class CBaseEntity *) */

void __thiscall CTriggerEndSection::EndSectionTouch(CTriggerEndSection *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0xa7070  87  ?EndSectionTouch@CTriggerEndSection@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x78) = 0;
    if (*(int *)(*(int *)(this + 4) + 0x1d4) != 0) {
      (*DAT_10121f8c)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1d4));
    }
    FUN_100b0ef0((int)this);
  }
  return;
}

