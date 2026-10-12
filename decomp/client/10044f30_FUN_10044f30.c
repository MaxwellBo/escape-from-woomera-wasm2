
int __cdecl FUN_10044f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = (&DAT_100a37a8)[iVar3 + iVar2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) == param_1)) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      iVar2 = 0;
      iVar3 = iVar3 + 0xb;
    }
  } while (iVar3 < 0x37);
  return 0;
}

