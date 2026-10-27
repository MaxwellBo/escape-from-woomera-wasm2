
void FUN_100d5f86(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10134fa0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10134e80 = 0;
  DAT_10134e9c = 0;
  DAT_101350a4 = 0;
  DAT_10134e90 = 0;
  DAT_10134e94 = 0;
  DAT_10134e98 = 0;
  return;
}

