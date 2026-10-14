
uint FUN_100d5646(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  void *this_00;
  void *this_01;
  byte local_7c [120];
  
  iVar1 = FUN_100d5c37(param_1);
  iVar2 = (*DAT_10134bf0)(iVar1,(-(uint)(DAT_10134bd4 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_10134be8 = 0;
    return 1;
  }
  uVar3 = FUN_100d8b20(this,DAT_10134be4,local_7c);
  if (uVar3 == 0) {
    iVar2 = (*DAT_10134bf0)(iVar1,(-(uint)(DAT_10134bdc != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_10134be8 = 0;
      return 1;
    }
    uVar3 = FUN_100d8b20(this_00,DAT_10134be0,local_7c);
    if (uVar3 == 0) {
      DAT_10134be8 = DAT_10134be8 | 0x304;
      DAT_10134bec = iVar1;
LAB_100d56ec:
      DAT_10134bd0 = iVar1;
    }
    else if ((DAT_10134be8 & 2) == 0) {
      if ((DAT_10134bd8 == (void *)0x0) ||
         (iVar2 = FUN_100d8bf0(DAT_10134be0,(char *)local_7c,DAT_10134bd8), iVar2 != 0)) {
        if (((DAT_10134be8 & 1) == 0) && (iVar2 = FUN_100d5a9a((short)iVar1), iVar2 != 0)) {
          DAT_10134be8 = DAT_10134be8 | 1;
          DAT_10134bec = iVar1;
        }
      }
      else {
        DAT_10134be8 = DAT_10134be8 | 2;
        DAT_10134bec = iVar1;
        pvVar4 = (void *)_strlen((char *)DAT_10134be0);
        if (pvVar4 == DAT_10134bd8) goto LAB_100d56ec;
      }
    }
  }
  if ((DAT_10134be8 & 0x300) == 0x300) goto LAB_100d5836;
  iVar2 = (*DAT_10134bf0)(iVar1,(-(uint)(DAT_10134bdc != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_10134be8 = 0;
    return 1;
  }
  uVar3 = FUN_100d8b20(this_01,DAT_10134be0,local_7c);
  if (uVar3 == 0) {
    DAT_10134be8 = DAT_10134be8 | 0x200;
    if (((DAT_10134bdc == 0) && (DAT_10134bd8 != (void *)0x0)) &&
       (pvVar4 = (void *)_strlen((char *)DAT_10134be0), pvVar4 == DAT_10134bd8)) {
      iVar2 = 1;
      goto LAB_100d5815;
    }
  }
  else {
    if (((DAT_10134bdc != 0) || (DAT_10134bd8 == (void *)0x0)) ||
       (iVar2 = FUN_100d8bf0(DAT_10134be0,(char *)local_7c,DAT_10134bd8), iVar2 != 0))
    goto LAB_100d5836;
    iVar2 = 0;
LAB_100d5815:
    iVar2 = FUN_100d5ab9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_100d5836;
  }
  DAT_10134be8 = DAT_10134be8 | 0x100;
  if (DAT_10134bd0 == 0) {
    DAT_10134bd0 = iVar1;
  }
LAB_100d5836:
  return ~DAT_10134be8 >> 2 & 1;
}

