
int __thiscall FUN_1009bda0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if ((iVar1 != 0) && ((*(byte *)((int)this + 0x2a0) & 1) != 0)) {
    return 2;
  }
  iVar1 = FUN_1005fbb0(this,param_1);
  return iVar1;
}

