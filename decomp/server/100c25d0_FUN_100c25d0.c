
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c25d0(void)

{
  char cVar1;
  
  if (DAT_10132454 != 0) {
    cVar1 = *(char *)(DAT_10132454 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6((undefined *)(DAT_10132454 + -1));
    }
    else {
      *(char *)(DAT_10132454 + -1) = cVar1 + -1;
    }
  }
  DAT_10132454 = 0;
  _DAT_10132458 = 0;
  DAT_1013245c = 0;
  return;
}

