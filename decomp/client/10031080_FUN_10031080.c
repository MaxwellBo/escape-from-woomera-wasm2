
undefined4 __thiscall
FUN_10031080(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  *(uint *)((int)this + 0x18) = uVar1;
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  return 1;
}

