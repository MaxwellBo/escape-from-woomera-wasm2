
void FUN_1001a4c0(int param_1)

{
  int iVar1;
  int *this;
  
  param_1 = param_1 + 0x80;
  if (param_1 == 0) {
    iVar1 = (*DAT_10121e5c)();
    if (iVar1 != 0) {
      param_1 = iVar1 + 0x80;
    }
  }
  iVar1 = *(int *)(param_1 + 0x208);
  if ((iVar1 == 0) || (this = *(int **)(iVar1 + 0x7c), this == (int *)0x0)) {
    this = (int *)(*DAT_10121f04)(iVar1,0x69c);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      FUN_10002f30(this);
      *this = (int)&PTR_FUN_100e0904;
    }
    this[1] = param_1;
  }
  FUN_10081f00(this,-1);
  (**(code **)(*this + 0x28))();
  FUN_100c6970(this);
  FUN_100c6780();
  *(uint *)(this[1] + 0x118) = *(uint *)(this[1] + 0x118) | 0x20;
  return;
}

