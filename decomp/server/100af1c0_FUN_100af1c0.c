
int __cdecl FUN_100af1c0(int param_1)

{
  int *piVar1;
  
  if ((0 < param_1) && (param_1 <= *(int *)(DAT_10122044 + 0x90))) {
    piVar1 = (int *)(*DAT_10121f28)(param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      return piVar1[0x1f];
    }
  }
  return 0;
}

