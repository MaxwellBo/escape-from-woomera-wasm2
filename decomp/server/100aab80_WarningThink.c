
/* private: void __thiscall CTripmineGrenade::WarningThink(void) */

void __thiscall CTripmineGrenade::WarningThink(CTripmineGrenade *this)

{
                    /* 0xaab80  278  ?WarningThink@CTripmineGrenade@@AAEXXZ */
  *(code **)(this + 0x74) = PowerupThink;
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

