
bool __thiscall FUN_10096de0(void *this,float *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10019450((uint *)((int)this + 0x308));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return true;
  }
  iVar2 = FUN_10096eb0(this,param_1,128.0);
  return (bool)('\x01' - (iVar2 != 0));
}

