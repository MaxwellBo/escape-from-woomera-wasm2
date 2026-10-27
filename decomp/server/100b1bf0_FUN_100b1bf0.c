
undefined4 FUN_100b1bf0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(iVar1 + param_1) != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 1;
}

