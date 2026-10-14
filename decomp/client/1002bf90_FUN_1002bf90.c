
int FUN_1002bf90(void)

{
  int iVar1;
  
  (*DAT_100a5068)(&DAT_100acc4c);
  DAT_100ad14c = 0;
  FUN_1004a710(&DAT_100acc4c,(undefined4 *)&DAT_100acd4c,0x500);
  FUN_1004a710(&DAT_100ad2a4,&DAT_100ad2a8,0x14);
  FUN_1004a710(&DAT_100ad28c,&DAT_100ad290,0x14);
  DAT_100ad04c = 0;
  if ((char)DAT_100acc4c == ' ') {
    DAT_100acc4c._0_1_ = 2;
    iVar1 = FUN_1002bf90();
    return iVar1 + 1;
  }
  return 1;
}

