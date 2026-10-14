
/* public: void __thiscall CBaseMonster::CorpseFallThink(void) */

void __thiscall CBaseMonster::CorpseFallThink(CBaseMonster *this)

{
                    /* 0x618d0  50  ?CorpseFallThink@CBaseMonster@@QAEXXZ */
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(this + 0x74) = 0;
    FUN_100085d0(this);
    FUN_100afe10((int)this,*(int *)(this + 4) + 8);
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

