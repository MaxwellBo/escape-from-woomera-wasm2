
/* public: void __thiscall CFlockingFlyer::Start(void) */

void __thiscall CFlockingFlyer::Start(CFlockingFlyer *this)

{
                    /* 0x19e0  217  ?Start@CFlockingFlyer@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(CFlockingFlyer **)(this + 0x308) == this) {
    *(code **)(this + 0x74) = FlockLeaderThink;
  }
  else {
    *(code **)(this + 0x74) = FlockFollowerThink;
  }
  (**(code **)(*(int *)this + 0x1a8))(5);
  FUN_10008190((int)this);
  FUN_100018e0((int)this);
  *(undefined4 *)(*(int *)(this + 4) + 0x1f8) = 0x42fa0000;
  return;
}

