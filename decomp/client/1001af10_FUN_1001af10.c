
void __thiscall FUN_1001af10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  *(uint *)((int)this + 0x14) = uVar1 << 2;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

