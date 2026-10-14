
void FUN_10043650(void)

{
  char cVar1;
  
  if (DAT_100baf04 != 0) {
    cVar1 = *(char *)(DAT_100baf04 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_10049a73((undefined *)(DAT_100baf04 + -1));
    }
    else {
      *(char *)(DAT_100baf04 + -1) = cVar1 + -1;
    }
  }
  DAT_100baf04 = 0;
  DAT_100baf08 = 0;
  DAT_100baf0c = 0;
  return;
}

