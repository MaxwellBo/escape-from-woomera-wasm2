
uint FUN_1004ac80(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_1004d7f1();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

