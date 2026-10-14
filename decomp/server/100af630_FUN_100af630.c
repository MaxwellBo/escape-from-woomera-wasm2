
void FUN_100af630(void)

{
  int *piVar1;
  int iVar2;
  undefined2 local_c [6];
  
  FUN_100af520(local_c);
  iVar2 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar1 = (int *)FUN_100af1c0(iVar2);
      FUN_100af590(local_c,piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

