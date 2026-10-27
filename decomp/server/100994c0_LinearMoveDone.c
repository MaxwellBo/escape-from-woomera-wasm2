
/* public: void __thiscall CBaseToggle::LinearMoveDone(void) */

void __thiscall CBaseToggle::LinearMoveDone(CBaseToggle *this)

{
                    /* 0x994c0  137  ?LinearMoveDone@CBaseToggle@@QAEXXZ */
  *(code **)(this + 0x74) = LinearMoveDoneNow;
  FUN_10063370((int *)this);
  return;
}

