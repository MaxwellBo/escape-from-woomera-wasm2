
void FUN_100b25a0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*DAT_10121f24)(param_1);
  iVar2 = iVar2 + -1;
  (&DAT_10131c6c)[iVar2 >> 5] = (&DAT_10131c6c)[iVar2 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  iVar4 = 0;
  do {
    bVar1 = (byte)iVar4;
    iVar3 = iVar4 >> 5;
    iVar4 = iVar4 + 1;
    (&DAT_10131bec)[iVar2 + iVar3] = (&DAT_10131bec)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  iVar4 = 0;
  do {
    iVar3 = iVar4 >> 5;
    bVar1 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    (&DAT_10131c70)[iVar2 + iVar3] = (&DAT_10131c70)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  return;
}

