
undefined4 __thiscall
FUN_10018880(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_10026030(param_3,param_2);
  iVar1 = FUN_100260d0();
  if (iVar1 != *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x28) = 0x42c80000;
    *(int *)((int)this + 0x24) = iVar1;
  }
  return 1;
}

