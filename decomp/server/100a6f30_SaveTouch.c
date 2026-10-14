
/* public: void __thiscall CTriggerSave::SaveTouch(class CBaseEntity *) */

void __thiscall CTriggerSave::SaveTouch(CTriggerSave *this,CBaseEntity *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
                    /* 0xa6f30  195  ?SaveTouch@CTriggerSave@@QAEXPAVCBaseEntity@@@Z */
  bVar1 = FUN_100b0030(*(int *)(this + 0x158),param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xcc))();
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x78) = 0;
      FUN_100b0ef0((int)this);
      (*DAT_10121ea4)(s_autosave_10119ad8);
    }
  }
  return;
}

