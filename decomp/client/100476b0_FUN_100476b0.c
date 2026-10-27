
void FUN_100476b0(void)

{
  undefined1 *p;
  int i;

  // FUN_1004b7bf walks this array, then an SEH epilogue reads unaff_EBP.
  p = (undefined1 *)&DAT_100bc4c0;
  i = 0;
  while (i < 0x53) {
    FUN_10047700(p);
    p = p + 0x10;
    i = i + 1;
  }
  return;
}

