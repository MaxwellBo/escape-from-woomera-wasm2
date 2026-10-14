
void FUN_10057565(void)

{
  if ((DAT_100bcdfc & 1) == 0) {
    DAT_100bcdfc = DAT_100bcdfc | 1;
  }
  FUN_1005758f();
  if ((DAT_100be19c & 1) == 0) {
    DAT_100be19c = DAT_100be19c | 1;
  }
  FUN_1005759b();
  return;
}

