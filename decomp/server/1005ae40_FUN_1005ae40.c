
bool __thiscall FUN_1005ae40(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0xb8) != 0)) {
    bVar1 = FUN_100b0030(*(int *)((int)this + 0xb8),param_1);
    return CONCAT31(extraout_var,bVar1) != 0;
  }
  return true;
}

