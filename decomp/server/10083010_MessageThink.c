
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CRevertSaved::MessageThink(void) */

void __thiscall CRevertSaved::MessageThink(CRevertSaved *this)

{
                    /* 0x83010  148  ?MessageThink@CRevertSaved@@QAEXXZ */
  FUN_100afbd0(*(int *)(*(int *)(this + 4) + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
  if (_DAT_100dd5f8 < *(float *)(this + 0xbc) - *(float *)(this + 0xb8)) {
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xbc) - *(float *)(this + 0xb8));
    *(code **)(this + 0x74) = LoadThink;
    return;
  }
  LoadThink(this);
  return;
}

