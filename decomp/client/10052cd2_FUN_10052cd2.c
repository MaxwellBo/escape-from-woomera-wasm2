
void FUN_10052cd2(void)

{
  if ((DAT_100bca6c == 1) || ((DAT_100bca6c == 0 && (DAT_100bca70 == 1)))) {
    FUN_10052d0b(0xfc);
    if (DAT_100bcc2c != (code *)0x0) {
      (*DAT_100bcc2c)();
    }
    FUN_10052d0b(0xff);
  }
  return;
}

