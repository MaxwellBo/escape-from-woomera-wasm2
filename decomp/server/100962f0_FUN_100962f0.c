
void __thiscall FUN_100962f0(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this_00;
  
  FUN_10096290((int)this);
  bVar1 = FUN_10019450((uint *)((int)this + 0x308));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    this_00 = (void *)FUN_10019410((uint *)((int)this + 0x308));
    if (this_00 == (void *)0x0) {
      this_00 = this;
    }
    FUN_10096340(this_00,(int)this);
  }
  FUN_1001ec30(this,param_1,param_2);
  return;
}

