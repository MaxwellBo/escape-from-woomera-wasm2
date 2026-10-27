
undefined4 FUN_100d1fbf(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_101209a0;
  do {
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_10120a30);
  if (param_1 == (&DAT_101209a0)[iVar2 * 2]) {
    return *(undefined4 *)(iVar2 * 8 + 0x101209a4);
  }
  return 0;
}

