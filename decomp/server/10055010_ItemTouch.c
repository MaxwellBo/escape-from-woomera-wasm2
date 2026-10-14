
/* public: void __thiscall CItem::ItemTouch(class CBaseEntity *) */

void __thiscall CItem::ItemTouch(CItem *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x55010  134  ?ItemTouch@CItem@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*DAT_10121db8 + 0x8c))(param_1,this), iVar1 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x118))(param_1);
    if (iVar1 == 0) {
      if (DAT_10124850 == 0) {
        return;
      }
    }
    else {
      FUN_10098bd0(this,(int *)param_1,3,0);
      *(undefined4 *)(this + 0x78) = 0;
      (**(code **)(*DAT_10121db8 + 0x90))(param_1,this);
      iVar1 = (**(code **)(*DAT_10121db8 + 0x94))(this);
      if (iVar1 == 5) {
        (**(code **)(*(int *)this + 0xec))();
        return;
      }
    }
    FUN_100b0ef0((int)this);
  }
  return;
}

