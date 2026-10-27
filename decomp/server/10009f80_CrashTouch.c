
/* private: void __thiscall CApache::CrashTouch(class CBaseEntity *) */

void __thiscall CApache::CrashTouch(CApache *this,CBaseEntity *param_1)

{
                    /* 0x9f80  52  ?CrashTouch@CApache@@AAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == 4) {
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x310) = *DAT_10122044;
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}

