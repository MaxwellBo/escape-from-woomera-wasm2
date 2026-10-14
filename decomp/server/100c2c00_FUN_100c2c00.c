
undefined4 * __cdecl FUN_100c2c00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_10132c70) {
    piVar2 = &DAT_10132470;
    do {
      if (*piVar2 == param_1) {
        return &DAT_10132470 + iVar1 * 2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < DAT_10132c70);
  }
  return (undefined4 *)0x0;
}

