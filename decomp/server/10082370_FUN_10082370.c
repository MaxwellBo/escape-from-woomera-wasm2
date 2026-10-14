
undefined4 __thiscall FUN_10082370(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x128))();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10081e70((int)this);
  if (*(int **)((int)this + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x528) + 0x134))(0);
  }
  *(int **)((int)this + 0x528) = param_1;
  (**(code **)(*param_1 + 300))();
  return 1;
}

