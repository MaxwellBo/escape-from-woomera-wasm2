
int FUN_100662d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      iVar1 = FUN_100af1c0(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10122044 + 0x90));
  }
  return iVar3;
}

