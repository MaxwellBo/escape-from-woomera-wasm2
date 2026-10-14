
/* public: void __thiscall CRecharge::Off(void) */

void __thiscall CRecharge::Off(CRecharge *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x453b0  162  ?Off@CRecharge@@QAEXXZ */
  if (1 < *(int *)(this + 0x168)) {
    FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),6,
                 s_items_suitcharge1_wav_1010d4d8,0,0,0x20,100);
  }
  *(undefined4 *)(this + 0x168) = 0;
  if (*(int *)(this + 0x164) == 0) {
    (**(code **)(*DAT_10121db8 + 0xb8))();
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    *(int *)(this + 0x160) = iVar1;
    if (0 < iVar1) {
      (**(code **)(*(int *)this + 8))((float)iVar1);
      *(code **)(this + 0x74) = Recharge;
      return;
    }
  }
  *(code **)(this + 0x74) = CBaseEntity::SUB_DoNothing;
  return;
}

