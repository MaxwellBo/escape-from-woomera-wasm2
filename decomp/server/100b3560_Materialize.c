
/* public: void __thiscall CBasePlayerItem::Materialize(void) */

void __thiscall CBasePlayerItem::Materialize(CBasePlayerItem *this)

{
                    /* 0xb3560  146  ?Materialize@CBasePlayerItem@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x118) & 0x80) != 0) {
    FUN_10094b20(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                 s_items_suitchargeok1_wav_1010d4a8,0x3f800000,0x3f4ccccd,0,0x96);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 1;
  FUN_100afe10((int)this,*(int *)(this + 4) + 8);
  *(code **)(this + 0x78) = DefaultTouch;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

