
/* public: void __thiscall CSentry::SentryTouch(class CBaseEntity *) */

void __thiscall CSentry::SentryTouch(CSentry *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0xae120  198  ?SentryTouch@CSentry@@QAEXPAVCBaseEntity@@@Z */
  if (param_1 != (CBaseEntity *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
    if ((iVar1 != 0) || ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 0x20) != 0)) {
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),0,0);
    }
  }
  return;
}

