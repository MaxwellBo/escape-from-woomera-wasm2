
/* public: void __thiscall CBasePlayerAmmo::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerAmmo::DefaultTouch(CBasePlayerAmmo *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0xb44b0  61  ?DefaultTouch@CBasePlayerAmmo@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x118))(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*DAT_10121db8 + 0xa8))(this);
      if (iVar1 == 3) {
        (**(code **)(*(int *)this + 0xec))();
        return;
      }
      *(undefined4 *)(this + 0x78) = 0;
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    if (DAT_10124850 != 0) {
      *(undefined4 *)(this + 0x78) = 0;
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
    }
  }
  return;
}

