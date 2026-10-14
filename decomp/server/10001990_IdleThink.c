
/* public: void __thiscall CFlockingFlyer::IdleThink(void) */

void __thiscall CFlockingFlyer::IdleThink(CFlockingFlyer *this)

{
  int iVar1;
  
                    /* 0x1990  128  ?IdleThink@CFlockingFlyer@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  iVar1 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  if (iVar1 != 0) {
    iVar1 = (*DAT_10121f20)(iVar1);
    if (iVar1 != 0) {
      *(code **)(this + 0x74) = Start;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
    }
  }
  return;
}

