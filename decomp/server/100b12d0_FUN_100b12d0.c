
void __thiscall FUN_100b12d0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) < param_1) {
      param_1 = *(int *)(iVar1 + 8);
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - param_1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) - param_1;
  }
  return;
}

