
void __thiscall FUN_1001eed0(void *this,double param_1)

{
  int iVar1;
  
  *(double *)((int)this + 0x428) = param_1 + *(double *)((int)this + 0x428);
  if ((*(int *)((int)this + 0x400) != 0) && (*(int *)((int)this + 0x424) != 0)) {
    FUN_1001ef30((int)this);
    iVar1 = FUN_1001eff0((int)this);
    if (iVar1 < 1) {
      *(undefined4 *)((int)this + 0x408) = 0;
      *(undefined4 *)((int)this + 0x40c) = 0;
      *(undefined4 *)((int)this + 0x400) = 0;
      *(undefined4 *)((int)this + 0x404) = 0;
      *(undefined4 *)((int)this + 0x424) = 0;
      *(undefined4 *)((int)this + 0x420) = 0;
    }
  }
  return;
}

