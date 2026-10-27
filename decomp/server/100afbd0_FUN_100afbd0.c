
void __cdecl FUN_100afbd0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar1 = (int *)FUN_100af1c0(iVar2);
      if (piVar1 != (int *)0x0) {
        FUN_100afb80(param_1,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

