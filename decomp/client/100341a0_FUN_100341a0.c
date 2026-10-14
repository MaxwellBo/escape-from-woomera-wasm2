
void __thiscall FUN_100341a0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 200);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd8) + -4 + param_1 * 4) +
                    *(int *)(*(int *)((int)this + 0xd0) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc0)) {
    do {
      *(int *)(*(int *)((int)this + 0xd8) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd0) + param_1 * 4) + *(int *)((int)this + 200)
      ;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc0));
  }
  return;
}

