
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bf50(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x7c);
  }
  FUN_100c6970(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x234))();
  }
  _DAT_10121cd8 = _DAT_10121cd8 + 1;
  FUN_100c6b60();
  return;
}

