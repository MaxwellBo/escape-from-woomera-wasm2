
void __thiscall FUN_10019420(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x208);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 4);
      return;
    }
  }
  return;
}

