
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMomentaryRotButton::Off(void) */

void __thiscall CMomentaryRotButton::Off(CMomentaryRotButton *this)

{
  int iVar1;
  
                    /* 0x18170  161  ?Off@CMomentaryRotButton@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  *(undefined4 *)(this + 0x15c) = 0;
  if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x10) != 0) &&
     (_DAT_100dd5f8 < *(float *)(this + 0x164))) {
    *(code **)(this + 0x74) = Return;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    return;
  }
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

