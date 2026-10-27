
void __thiscall FUN_1003e870(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xc0);
  if (*(int *)((int)this + 0xc0) != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc0);
    } while (iVar1 != 0);
    *(undefined4 *)(iVar2 + 0xc0) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}

