
void __cdecl FUN_100af8f0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar1 = (int *)FUN_100af1c0(iVar2);
      if (piVar1 != (int *)0x0) {
        FUN_100af6e0(piVar1,param_1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

