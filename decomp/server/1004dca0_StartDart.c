
/* public: void __thiscall CHornet::StartDart(void) */

void __thiscall CHornet::StartDart(CHornet *this)

{
                    /* 0x4dca0  220  ?StartDart@CHornet@@QAEXXZ */
  FUN_1004dcd0((int)this);
  *(code **)(this + 0x78) = DartTouch;
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x40800000);
  return;
}

