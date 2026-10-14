
/* public: void __thiscall CWallHealth::Off(void) */

void __thiscall CWallHealth::Off(CWallHealth *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x49d20  163  ?Off@CWallHealth@@QAEXXZ */
  if (1 < *(int *)(this + 0x168)) {
    FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),6,
                 s_items_medcharge4_wav_1010df48,0,0,0x20,100);
  }
  *(undefined4 *)(this + 0x168) = 0;
  if (*(int *)(this + 0x164) == 0) {
    (**(code **)(*DAT_10121db8 + 0xb4))();
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

