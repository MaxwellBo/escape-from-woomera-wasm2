
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100260d0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (DAT_100aab0c < DAT_100aab08 + 2) {
    _DAT_100aab10 = 1;
    return -1;
  }
  pbVar2 = (byte *)(DAT_100aa304 + 1 + DAT_100aab08);
  pbVar1 = (byte *)(DAT_100aa304 + DAT_100aab08);
  DAT_100aab08 = DAT_100aab08 + 2;
  return (int)(short)((ushort)*pbVar2 * 0x100 + (ushort)*pbVar1);
}

