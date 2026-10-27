
/* public: void __thiscall CTentacle::Test(void) */

void __thiscall CTentacle::Test(CTentacle *this)

{
                    /* 0x9d8d0  242  ?Test@CTentacle@@QAEXXZ */
  *(undefined4 *)(*(int *)(this + 4) + 0x128) = 7;
  *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

