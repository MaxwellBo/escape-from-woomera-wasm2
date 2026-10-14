
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncRotating::WaitForStart(void) */

void __thiscall CFuncRotating::WaitForStart(CFuncRotating *this)

{
                    /* 0x11ef0  274  ?WaitForStart@CFuncRotating@@QAEXXZ */
  if (_DAT_100dd618 < *DAT_10122044) {
    (**(code **)(*(int *)this + 0xe4))(this,this,3,0);
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

