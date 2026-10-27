
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023ea0(void)

{
  int iVar1;
  
  iVar1 = (*DAT_100a50ac)(s__nomouse_1007930c,0);
  if (iVar1 == 0) {
    DAT_100a9998 = 1;
    DAT_100a9a04 = SystemParametersInfoA(3,0,&DAT_100a9a2c,0);
    if (DAT_100a9a04 != 0) {
      iVar1 = (*DAT_100a50ac)(s__noforcemspd_100792fc,0);
      if (iVar1 != 0) {
        _DAT_100792bc = DAT_100a9a34;
      }
      iVar1 = (*DAT_100a50ac)(s__noforcemaccel_100792ec,0);
      if (iVar1 != 0) {
        _DAT_100792b4 = DAT_100a9a2c;
        _DAT_100792b8 = DAT_100a9a30;
      }
      iVar1 = (*DAT_100a50ac)(s__noforcemparms_100792dc,0);
      if (iVar1 != 0) {
        _DAT_100792b4 = DAT_100a9a2c;
        _DAT_100792b8 = DAT_100a9a30;
        _DAT_100792bc = DAT_100a9a34;
      }
    }
    DAT_100a9ab4 = 5;
  }
  return;
}

