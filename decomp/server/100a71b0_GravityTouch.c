
/* public: void __thiscall CTriggerGravity::GravityTouch(class CBaseEntity *) */

void __thiscall CTriggerGravity::GravityTouch(CTriggerGravity *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0xa71b0  117  ?GravityTouch@CTriggerGravity@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = *(undefined4 *)(*(int *)(this + 4) + 0x11c);
  }
  return;
}

