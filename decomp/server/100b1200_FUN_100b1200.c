
int __thiscall FUN_100b1200(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x28) + 4);
      do {
        if (*piVar3 == param_1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x20));
    }
  }
  return -1;
}

