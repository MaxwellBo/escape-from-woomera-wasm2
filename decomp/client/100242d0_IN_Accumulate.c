
void IN_Accumulate(void)

{
  int iVar1;
  
                    /* 0x242d0  504  IN_Accumulate */
  if (((DAT_100a97b4 == 0) && (DAT_100a9ad0 == 0)) && (DAT_100a9abc != 0)) {
    GetCursorPos((LPPOINT)&DAT_100a9a60);
    iVar1 = (*DAT_100a5070)();
    DAT_100a9ac8 = DAT_100a9ac8 + (DAT_100a9a60 - iVar1);
    iVar1 = (*DAT_100a5074)();
    DAT_100a9a00 = DAT_100a9a00 + (DAT_100a9a64 - iVar1);
    FUN_10023f80();
    return;
  }
  return;
}

