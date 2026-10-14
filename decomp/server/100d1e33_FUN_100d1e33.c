
void FUN_100d1e33(void)

{
  if ((DAT_101349c8 == 1) || ((DAT_101349c8 == 0 && (DAT_101349cc == 1)))) {
    FUN_100d1e6c(0xfc);
    if (DAT_10134b88 != (code *)0x0) {
      (*DAT_10134b88)();
    }
    FUN_100d1e6c(0xff);
  }
  return;
}

