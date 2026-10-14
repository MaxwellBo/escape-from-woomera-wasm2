
undefined4 __fastcall FUN_1003bb30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))();
      return 8;
    }
    return 8;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))();
    return 0;
  }
  return 0;
}

