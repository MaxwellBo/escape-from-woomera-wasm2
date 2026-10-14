
char * FUN_10030c40(char *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 == (char *)0x0) {
    return s_;
  }
  if (*param_1 == '#') {
    piVar1 = (int *)(*DAT_100a5054)(param_1 + 1);
    if ((piVar1 != (int *)0x0) && (piVar1[10] != 0)) {
      if ((param_2 != (int *)0x0) && (*piVar1 < 0)) {
        *param_2 = -*piVar1;
      }
      return (char *)piVar1[10];
    }
  }
  return param_1;
}

