
/* public: void __thiscall CNihilanth::CrashTouch(class CBaseEntity *) */

void __thiscall CNihilanth::CrashTouch(CNihilanth *this,CBaseEntity *param_1)

{
                    /* 0x67980  53  ?CrashTouch@CNihilanth@@QAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == 4) {
    *(undefined4 *)(this + 0x78) = 0;
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}

