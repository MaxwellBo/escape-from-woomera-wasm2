
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10026120(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_100aab0c < DAT_100aab08 + 4) {
    _DAT_100aab10 = 1;
    return -1;
  }
  pbVar2 = (byte *)(DAT_100aa304 + 3 + DAT_100aab08);
  pbVar3 = (byte *)(DAT_100aa304 + 2 + DAT_100aab08);
  pbVar4 = (byte *)(DAT_100aa304 + 1 + DAT_100aab08);
  pbVar1 = (byte *)(DAT_100aa304 + DAT_100aab08);
  DAT_100aab08 = DAT_100aab08 + 4;
  return (((uint)*pbVar2 * 0x100 + (uint)*pbVar3) * 0x100 + (uint)*pbVar4) * 0x100 + (uint)*pbVar1;
}

