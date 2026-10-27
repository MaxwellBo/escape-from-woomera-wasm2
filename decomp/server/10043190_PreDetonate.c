
/* public: void __thiscall CGrenade::PreDetonate(void) */

void __thiscall CGrenade::PreDetonate(CGrenade *this)

{
                    /* 0x43190  170  ?PreDetonate@CGrenade@@QAEXXZ */
  FUN_10095d30(0x20,(undefined4 *)(*(int *)(this + 4) + 8),400,0.3);
  *(code **)(this + 0x74) = Detonate;
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

