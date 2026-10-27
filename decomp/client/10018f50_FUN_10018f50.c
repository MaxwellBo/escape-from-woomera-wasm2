
uint FUN_10018f50(void)

{
  DAT_100a5188 = DAT_100a5188 * 0x10dcd + 1 +
                 *(int *)(&DAT_10078010 + (DAT_100a5188 * 0x10dcd & 0xff) * 4);
  return DAT_100a5188 & 0xfffffff;
}

