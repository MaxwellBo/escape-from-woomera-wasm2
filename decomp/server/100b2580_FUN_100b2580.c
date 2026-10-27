
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b2580(void *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 + *(double *)((int)this + 0x18);
  *(double *)((int)this + 0x18) = dVar1;
  if (_DAT_100e0eb8 <= dVar1) {
    FUN_100b2860((int)this);
  }
  return;
}

