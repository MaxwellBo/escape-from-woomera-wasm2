
/* public: void __thiscall COsprey::CrashTouch(class CBaseEntity *) */

void __thiscall COsprey::CrashTouch(COsprey *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x72650  54  ?CrashTouch@COsprey@@QAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == 4) {
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x354) = *DAT_10122044;
    (**(code **)(*(int *)this + 8))(0);
    iVar1 = *(int *)(this + 4);
    *(undefined4 *)(this + 0x35c) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(this + 0x360) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(this + 0x364) = *(undefined4 *)(iVar1 + 0x28);
  }
  return;
}

