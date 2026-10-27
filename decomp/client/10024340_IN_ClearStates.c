
void IN_ClearStates(void)

{
                    /* 0x24340  506  IN_ClearStates */
  if (DAT_100a9abc != 0) {
    DAT_100a9ac8 = 0;
    DAT_100a9a00 = 0;
    DAT_100a9ab0 = 0;
  }
  return;
}

