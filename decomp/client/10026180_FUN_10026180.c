
undefined1 * FUN_10026180(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  DAT_100aa308 = 0;
  if (DAT_100aab08 + 1 <= DAT_100aab0c) {
    while( true ) {
      iVar1 = FUN_10026050();
      if ((iVar1 == -1) || (iVar1 == 0)) break;
      (&DAT_100aa308)[uVar2] = (char)iVar1;
      uVar2 = uVar2 + 1;
      if ((0x7fe < uVar2) || (DAT_100aab0c < DAT_100aab08 + 1)) break;
    }
  }
  (&DAT_100aa308)[uVar2] = 0;
  return &DAT_100aa308;
}

