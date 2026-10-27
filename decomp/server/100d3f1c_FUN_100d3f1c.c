
void __cdecl FUN_100d3f1c(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_100d3f98();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10120b18;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_100d3f8f();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10120b1c);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_10120c80);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_100d3f8f();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_100d3f8f();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_100d3f8f();
  *pDVar1 = 0x16;
  return;
}

