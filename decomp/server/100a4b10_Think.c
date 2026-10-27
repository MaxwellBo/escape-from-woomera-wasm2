
/* public: virtual void __thiscall CTriggerInOut::Think(void) */

void __thiscall CTriggerInOut::Think(CTriggerInOut *this)

{
  int *piVar1;
  
                    /* 0xa4b10  247  ?Think@CTriggerInOut@@UAEXXZ */
  piVar1 = FUN_100a4790(*(int **)(this + 0x164));
  *(int **)(this + 0x164) = piVar1;
  if (piVar1[0x2f] == 0) {
    FUN_10019680((int)this);
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

