
/* public: void __thiscall CWallHealth::Recharge(void) */

void __thiscall CWallHealth::Recharge(CWallHealth *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x49c90  174  ?Recharge@CWallHealth@@QAEXXZ */
  FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),3,
               s_items_medshot4_wav_1010df78,0x3f800000,0x3f4ccccd,0,100);
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

