
void FUN_100c7d30(void)

{
  int iVar1;
  
  iVar1 = FUN_100c6980();
  (*DAT_10121ec0)(1,DAT_10124904,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208));
  (*DAT_10121ec8)(DAT_10134940);
  iVar1 = 0;
  if (0 < DAT_10134940 * 0x30) {
    do {
      (*DAT_10121ec8)((int)(char)(&DAT_101348b0)[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10134940 * 0x30);
  }
  (*DAT_10121ec4)();
  return;
}

