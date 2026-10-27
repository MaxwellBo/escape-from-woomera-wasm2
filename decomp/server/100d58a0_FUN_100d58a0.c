
uint FUN_100d58a0(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte local_7c [120];
  
  iVar1 = FUN_100d5c37(param_1);
  iVar2 = (*DAT_10134bf0)(iVar1,(-(uint)(DAT_10134bdc != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_10134be8 = 0;
    return 1;
  }
  uVar3 = FUN_100d8b20(this,DAT_10134be0,local_7c);
  if (uVar3 == 0) {
    if (DAT_10134bdc == 0) {
      iVar2 = 1;
      goto LAB_100d592c;
    }
  }
  else {
    if (((DAT_10134bdc != 0) || (DAT_10134bd8 == (void *)0x0)) ||
       (iVar2 = FUN_100d8bf0(DAT_10134be0,(char *)local_7c,DAT_10134bd8), iVar2 != 0))
    goto LAB_100d594b;
    iVar2 = 0;
LAB_100d592c:
    iVar2 = FUN_100d5ab9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_100d594b;
  }
  DAT_10134be8 = DAT_10134be8 | 4;
  DAT_10134bd0 = iVar1;
  DAT_10134bec = iVar1;
LAB_100d594b:
  return ~DAT_10134be8 >> 2 & 1;
}

