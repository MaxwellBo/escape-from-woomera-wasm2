
undefined1 __cdecl FUN_10094f80(byte *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_10131054) {
    pcVar2 = (char *)&DAT_1012f448;
    do {
      iVar1 = FUN_100d8bf0(param_1,pcVar2,(void *)0xc);
      if (iVar1 == 0) {
        return (&DAT_10130e48)[iVar3];
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0xd;
    } while (iVar3 < DAT_10131054);
  }
  return 0x43;
}

