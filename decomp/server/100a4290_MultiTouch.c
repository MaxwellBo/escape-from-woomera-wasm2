
/* public: void __thiscall CTriggerMultiple::MultiTouch(class CBaseEntity *) */

void __thiscall CTriggerMultiple::MultiTouch(CTriggerMultiple *this,CBaseEntity *param_1)

{
  uint uVar1;
  
                    /* 0xa4290  154  ?MultiTouch@CTriggerMultiple@@QAEXPAVCBaseEntity@@@Z */
  uVar1 = FUN_100a30c0(this,*(int **)(param_1 + 4));
  if (uVar1 != 0) {
    FUN_100a42c0(this,(int *)param_1);
  }
  return;
}

