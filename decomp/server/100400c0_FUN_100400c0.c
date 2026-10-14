
undefined ** __thiscall FUN_100400c0(void *this,int param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)((int)this + 0x30c) != 0) {
    FUN_1003f3e0((int)this);
  }
  if (param_1 != 0x16) {
    if (param_1 != 0x17) {
      ppuVar1 = FUN_10026300(this,param_1);
      return ppuVar1;
    }
    return &PTR_DAT_1010cd28;
  }
  return &PTR_DAT_1010cd58;
}

