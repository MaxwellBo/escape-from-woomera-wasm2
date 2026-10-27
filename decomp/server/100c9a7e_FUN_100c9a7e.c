
byte FUN_100c9a7e(void)

{
  byte bVar1;
  byte unaff_BL;
  int unaff_ESI;
  
  bVar1 = func_0x9a98100c();
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | unaff_BL;
  return bVar1 | 0x10;
}

