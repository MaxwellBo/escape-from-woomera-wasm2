
void FUN_100c6dd0(void)

{
  uint uVar1;
  
  (*DAT_10121ec0)(2,DAT_101248fc,0,0);
  (*DAT_10121ec8)(1);
  uVar1 = 0;
  do {
    (*DAT_10121ec8)((int)(char)(&DAT_10134948)[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x24);
  (*DAT_10121ec4)();
  return;
}

