
undefined4 __cdecl FUN_1005143c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100bcaec != (code *)0x0) {
    iVar1 = (*DAT_100bcaec)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

