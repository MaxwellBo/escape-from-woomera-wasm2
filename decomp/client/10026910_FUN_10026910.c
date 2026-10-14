
undefined1 __cdecl FUN_10026910(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_100acc3c + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar2) / 2;
      iVar1 = FUN_100569e0(param_1,(char *)((int)&DAT_100ab034 + iVar3 * 0xd),(void *)0xc);
      if (iVar1 == 0) {
        return (&DAT_100aca34)[iVar3];
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

