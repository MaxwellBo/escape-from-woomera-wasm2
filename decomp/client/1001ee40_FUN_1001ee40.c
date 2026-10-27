
void __thiscall FUN_1001ee40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *(int *)((int)this + 0x41c) = *(int *)((int)this + 0x41c) + 1;
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
      return;
    }
    iVar2 = FUN_1001edc0((int)param_2,(int)piVar1);
    if (iVar2 != 0) {
      *param_2 = *param_1;
      *param_1 = param_2;
      return;
    }
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      iVar2 = FUN_1001edc0((int)param_2,iVar2);
      if (iVar2 != 0) {
        *param_2 = *(undefined4 *)*piVar1;
        *piVar1 = (int)param_2;
        return;
      }
      piVar1 = (int *)*piVar1;
      iVar2 = *piVar1;
    }
    *param_2 = 0;
    *piVar1 = (int)param_2;
  }
  return;
}

