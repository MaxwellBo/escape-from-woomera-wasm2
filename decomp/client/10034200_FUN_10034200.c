
void __thiscall FUN_10034200(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xdc) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc4)) {
    do {
      *(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd4) + param_1 * 4) +
                      *(int *)((int)this + 0xcc);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc4));
  }
  return;
}

