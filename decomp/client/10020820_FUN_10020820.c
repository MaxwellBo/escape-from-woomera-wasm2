
undefined4 FUN_10020820(int *param_1)

{
  int *piVar1;
  
  if (((param_1 != (int *)0x0) && (param_1[1] != 0)) && (*(short *)((int)param_1 + 0x2ea) != 0)) {
    piVar1 = (int *)(*DAT_100a50bc)();
    if ((param_1 != piVar1) && (*(int *)(&DAT_100b59f0 + *param_1 * 0x14) != 0)) {
      return 1;
    }
  }
  return 0;
}

