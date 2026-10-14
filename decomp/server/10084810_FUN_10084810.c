
undefined1 __cdecl FUN_10084810(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_10126a3c + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar2) / 2;
      iVar1 = FUN_100d8bf0(param_1,(char *)((int)&DAT_10124e34 + iVar3 * 0xd),(void *)0xc);
      if (iVar1 == 0) {
        return (&DAT_10126834)[iVar3];
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          iVar4 = iVar3 + -1;
        }
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 <= iVar4);
  }
  return 0x43;
}

