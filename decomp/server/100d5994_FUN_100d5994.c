
uint FUN_100d5994(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte local_7c [120];
  
  iVar1 = FUN_100d5c37(param_1);
  iVar2 = (*DAT_10134bf0)(iVar1,(-(uint)(DAT_10134bd4 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_10134be8 = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_100d8b20(this,DAT_10134be4,local_7c);
    if (uVar3 == 0) {
      iVar2 = FUN_100d5a9a((short)iVar1);
      if (iVar2 != 0) {
        DAT_10134be8 = DAT_10134be8 | 4;
        DAT_10134bd0 = iVar1;
        DAT_10134bec = iVar1;
      }
    }
    uVar3 = ~DAT_10134be8 >> 2 & 1;
  }
  return uVar3;
}

