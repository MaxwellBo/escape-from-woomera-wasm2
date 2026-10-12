
undefined4 * __cdecl FUN_10043f70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_100bb720) {
    piVar2 = &DAT_100baf20;
    do {
      if (*piVar2 == param_1) {
        return &DAT_100baf20 + iVar1 * 2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < DAT_100bb720);
  }
  return (undefined4 *)0x0;
}

