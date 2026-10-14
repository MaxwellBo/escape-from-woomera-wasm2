
uint * FUN_100d0806(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_10120924 == (uint *)0x0) {
    DAT_10120924 = _malloc(0x351);
  }
  *(undefined1 *)DAT_10120924 = 0;
  FUN_100d09da(DAT_10120924,3);
  ppuVar3 = &PTR_DAT_10120930;
  do {
    FUN_100d2d20(DAT_10120924,(uint *)&DAT_10118090);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_100d09da(DAT_10120924,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x10120960);
  if (!bVar1) {
    return DAT_10120924;
  }
  FUN_100c8cf1((undefined *)DAT_10120924);
  DAT_10120924 = (uint *)0x0;
  return (uint *)PTR_DAT_1012093c;
}

