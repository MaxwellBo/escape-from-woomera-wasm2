
undefined4 __thiscall
FUN_1003e820(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  *(uint *)((int)this + 0x894) = uVar1;
  FUN_1003cb10((int)this);
  if (*(int **)((int)this + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xaa4) + 0x210))();
  }
  return 1;
}

