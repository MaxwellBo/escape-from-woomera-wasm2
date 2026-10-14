
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLegacyCineMonster::CineThink(void) */

void __thiscall CLegacyCineMonster::CineThink(CLegacyCineMonster *this)

{
                    /* 0x45940  45  ?CineThink@CLegacyCineMonster@@QAEXXZ */
  if (*(float *)(*(int *)(this + 4) + 0x134) == _DAT_100dd5f8) {
    FUN_10008190((int)this);
  }
  (**(code **)(*(int *)this + 8))(0x3f800000);
  if ((*(int *)(*(int *)(this + 4) + 0x1a0) != 0) && (*(int *)(this + 0xd4) != 0)) {
    FUN_10045900((int)this);
    return;
  }
  FUN_10007fc0((int)this,0.0);
  return;
}

