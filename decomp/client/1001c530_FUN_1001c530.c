
void __thiscall FUN_1001c530(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (piVar3 = _malloc(8), piVar3 != (int *)0x0)) {
    *piVar3 = 0;
    piVar3[1] = 0;
    *piVar3 = param_1;
    iVar1 = *(int *)this;
    if (iVar1 == 0) {
      *(int **)this = piVar3;
      return;
    }
    for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar2;
    }
    *(int **)(iVar1 + 4) = piVar3;
  }
  return;
}

