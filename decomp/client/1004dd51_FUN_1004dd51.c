
void __cdecl FUN_1004dd51(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1004ddcd();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1007c098;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1004ddc4();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1007c09c);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_1007c200);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1004ddc4();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1004ddc4();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1004ddc4();
  *pDVar1 = 0x16;
  return;
}

