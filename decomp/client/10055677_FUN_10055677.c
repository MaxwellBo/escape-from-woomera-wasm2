
void FUN_10055677(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100bcf20;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100bce00 = 0;
  DAT_100bce1c = 0;
  DAT_100bd024 = 0;
  DAT_100bce10 = 0;
  DAT_100bce14 = 0;
  DAT_100bce18 = 0;
  return;
}

