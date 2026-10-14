
void FUN_10054852(void)

{
  if (DAT_100bccf0 == 0) {
    FUN_1004ca8b(0xb);
    if (DAT_100bccf0 == 0) {
      FUN_10054880();
      DAT_100bccf0 = DAT_100bccf0 + 1;
    }
    FUN_1004caec(0xb);
  }
  return;
}

