
/* public: void __thiscall CBaseToggle::LinearMoveDoneNow(void) */

void __thiscall CBaseToggle::LinearMoveDoneNow(CBaseToggle *this)

{
                    /* 0x994d0  138  ?LinearMoveDoneNow@CBaseToggle@@QAEXXZ */
  FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  FUN_10063390((int)this);
  FUN_10019680((int)this);
  if (*(code **)(this + 0x130) != (code *)0x0) {
    (**(code **)(this + 0x130))();
  }
  return;
}

