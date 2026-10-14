
void __thiscall FUN_10062000(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (param_1 == 1) {
    bVar1 = FUN_10019450((uint *)((int)this + 0x160));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_10019420((uint *)((int)this + 0x160),0);
      (*DAT_10121efc)(2,s_Stripped_10111654);
    }
  }
  *(int *)((int)this + 0x1d8) = param_1;
  *(int *)((int)this + 0x1dc) = param_1;
  return;
}

