
/* public: void __thiscall CBasePlayerItem::FallThink(void) */

void __thiscall CBasePlayerItem::FallThink(CBasePlayerItem *this)

{
  int iVar1;
  
                    /* 0xb34d0  99  ?FallThink@CBasePlayerItem@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    iVar1 = *(int *)(*(int *)(this + 4) + 0x198);
    if (iVar1 != 0) {
      iVar1 = (*DAT_10121f20)(iVar1);
      if (iVar1 != 0) {
        iVar1 = (*DAT_10121f70)(0,0x1d);
        FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
                     s_items_weapondrop1_wav_1011b8c4,0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f);
      }
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    Materialize(this);
  }
  return;
}

