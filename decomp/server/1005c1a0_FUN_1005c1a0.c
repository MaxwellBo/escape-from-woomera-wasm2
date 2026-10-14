
void __thiscall FUN_1005c1a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if ((iVar1 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x13c);
    do {
      if (piVar2[-0x20] == 0) {
        return;
      }
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          FUN_1007f800(param_1,*(int *)(DAT_10122044 + 0x98) + piVar2[-0x20]);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x20);
  }
  return;
}

