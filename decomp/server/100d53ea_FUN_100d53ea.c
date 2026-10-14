
undefined4 __thiscall FUN_100d53ea(void *this,char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (DAT_10134bf0 == (code *)0x0) {
    iVar1 = FUN_100d5b1b();
    this = extraout_ECX;
    if (iVar1 == 0) {
      DAT_10134bf0 = FUN_100d5b51;
    }
    else {
      DAT_10134bf0 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_10134be0 = param_1;
    if (*param_1 != '\0') {
      FUN_100d5567(this,0x101211f0,0x40,(byte *)&DAT_10134be0);
      this = extraout_ECX_00;
    }
    DAT_10134be4 = param_1 + 0x40;
    if ((DAT_10134be4 != (char *)0x0) && (*DAT_10134be4 != '\0')) {
      FUN_100d5567(this,0x10121138,0x16,(byte *)&DAT_10134be4);
    }
    DAT_10134be8 = 0;
    if ((DAT_10134be0 != (char *)0x0) && (*DAT_10134be0 != '\0')) {
      if ((DAT_10134be4 == (char *)0x0) || (*DAT_10134be4 == '\0')) {
        FUN_100d584a();
      }
      else {
        FUN_100d55bf();
      }
      goto LAB_100d54a7;
    }
    if ((DAT_10134be4 != (char *)0x0) && (*DAT_10134be4 != '\0')) {
      FUN_100d595d();
      goto LAB_100d54a7;
    }
  }
  FUN_100d5a1a();
LAB_100d54a7:
  if ((((DAT_10134be8 == 0) || (uVar2 = FUN_100d5a34((byte *)(param_1 + 0x80)), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_10134bd0,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_10134bd0;
    param_2[1] = (undefined2)DAT_10134bec;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_10134bf0)(DAT_10134bd0,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_10134bf0)(DAT_10134bec,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_100d8971(uVar2,(char *)(param_3 + 0x80),10);
  }
  return 1;
}

