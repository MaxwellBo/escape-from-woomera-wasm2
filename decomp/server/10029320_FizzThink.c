
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBubbling::FizzThink(void) */

void __thiscall CBubbling::FizzThink(CBubbling *this)

{
  short sVar1;
  undefined4 uVar2;
  float local_c [3];
  
                    /* 0x29320  106  ?FizzThink@CBubbling@@QAEXXZ */
  uVar2 = FUN_10010f30(local_c,*(int *)(this + 4));
  (*DAT_10121ec0)(5,0x17,uVar2,0);
  (*DAT_10121ec8)(0x69);
  sVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)((int)sVar1);
  (*DAT_10121ed0)((int)*(short *)(this + 0xc0));
  (*DAT_10121ec8)(*(undefined4 *)(this + 0xb8));
  (*DAT_10121ec4)();
  if (0x13 < *(int *)(this + 0xbc)) {
    (**(code **)(*(int *)this + 8))(0x3f000000);
    return;
  }
  (**(code **)(*(int *)this + 8))
            ((float)_DAT_100e0ed8 - (float)*(int *)(this + 0xbc) * (float)_DAT_100dfb80);
  return;
}

