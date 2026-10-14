
void __thiscall FUN_10035d80(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x40)) {
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0x40) <= iVar2)) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 0x48) + iVar2 * 4);
      }
      (**(code **)(*piVar1 + 0xc))(param_1,this);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x40));
  }
  return;
}

