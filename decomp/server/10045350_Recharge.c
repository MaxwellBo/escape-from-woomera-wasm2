
/* public: void __thiscall CRecharge::Recharge(void) */

void __thiscall CRecharge::Recharge(CRecharge *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x45350  173  ?Recharge@CRecharge@@QAEXXZ */
  lVar2 = __ftol();
  *(int *)(this + 0x164) = (int)lVar2;
  *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  iVar1 = *(int *)(this + 0x60);
  if (0x1f < iVar1) {
    (*DAT_10121eb4)(iVar1,&DAT_10103c18);
    *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
    return;
  }
  if (iVar1 < -0x1f) {
    (*DAT_10121eb4)(-iVar1,&DAT_10103c14);
  }
  *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
  return;
}

