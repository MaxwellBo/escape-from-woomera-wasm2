
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10026090(void)

{
  byte *pbVar1;
  
  if (DAT_100aab0c < DAT_100aab08 + 1) {
    _DAT_100aab10 = 1;
    return 0xffffffff;
  }
  pbVar1 = (byte *)(DAT_100aa304 + DAT_100aab08);
  DAT_100aab08 = DAT_100aab08 + 1;
  return (uint)*pbVar1;
}

