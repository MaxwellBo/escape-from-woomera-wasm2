
uint FUN_100ae410(void)

{
  DAT_10131b5c = DAT_10131b5c * 0x10dcd + 1 +
                 *(int *)(&DAT_1011a420 + (DAT_10131b5c * 0x10dcd & 0xff) * 4);
  return DAT_10131b5c & 0xfffffff;
}

