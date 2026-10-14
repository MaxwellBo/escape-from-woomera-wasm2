
/* public: void __thiscall CBaseToggle::AngularMoveDone(void) */

void __thiscall CBaseToggle::AngularMoveDone(CBaseToggle *this)

{
                    /* 0x997a0  4  ?AngularMoveDone@CBaseToggle@@QAEXXZ */
  *(code **)(this + 0x74) = AngularMoveDoneNow;
  FUN_10063370((int *)this);
  return;
}

