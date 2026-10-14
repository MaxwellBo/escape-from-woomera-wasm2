
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10026050(void)

{
  char *pcVar1;
  
  if (DAT_100aab0c < DAT_100aab08 + 1) {
    _DAT_100aab10 = 1;
    return -1;
  }
  pcVar1 = (char *)(DAT_100aa304 + DAT_100aab08);
  DAT_100aab08 = DAT_100aab08 + 1;
  return (int)*pcVar1;
}

