
/* public: void __thiscall CBasePlayerAmmo::Materialize(void) */

void __thiscall CBasePlayerAmmo::Materialize(CBasePlayerAmmo *this)

{
                    /* 0xb4450  145  ?Materialize@CBasePlayerAmmo@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x118) & 0x80) != 0) {
    FUN_10094b20(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                 s_items_suitchargeok1_wav_1010d4a8,0x3f800000,0x3f4ccccd,0,0x96);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(code **)(this + 0x78) = DefaultTouch;
  return;
}

