
/* public: void __thiscall CBaseToggle::AngularMoveDoneNow(void) */

void __thiscall CBaseToggle::AngularMoveDoneNow(CBaseToggle *this)

{
                    /* 0x997b0  5  ?AngularMoveDoneNow@CBaseToggle@@QAEXXZ */
  FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  FUN_100635b0((int)this);
  FUN_10019680((int)this);
  if (*(code **)(this + 0x130) != (code *)0x0) {
    (**(code **)(this + 0x130))();
  }
  return;
}

