
undefined4 __thiscall FUN_10039070(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    piVar2 = (int *)((int)this + 200);
    do {
      if (*(int *)(*piVar2 + 0xf4) == param_1) {
        return *(undefined4 *)((int)this + iVar1 * 4 + 200);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 600));
  }
  return 0;
}

