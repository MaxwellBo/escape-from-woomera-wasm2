
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ca521(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1013497c = GetVersion();
    iVar1 = FUN_100cdca6(1);
    if (iVar1 != 0) {
      _DAT_10134988 = DAT_1013497c >> 8 & 0xff;
      _DAT_10134984 = DAT_1013497c & 0xff;
      DAT_1013497c = DAT_1013497c >> 0x10;
      _DAT_10134980 = _DAT_10134984 * 0x100 + _DAT_10134988;
      iVar1 = FUN_100caca3();
      if (iVar1 != 0) {
        DAT_1013620c = GetCommandLineA();
        DAT_101349c0 = FUN_100d1d01();
        FUN_100d17eb();
        FUN_100d1ab4();
        FUN_100d19fb();
        FUN_100c9f7a();
        DAT_101349bc = DAT_101349bc + 1;
        goto LAB_100ca5f4;
      }
      FUN_100cdd03();
    }
LAB_100ca581:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_101349bc < 1) goto LAB_100ca581;
      DAT_101349bc = DAT_101349bc + -1;
      if (DAT_101349b4 == 0) {
        FUN_100c9fc9();
      }
      FUN_100d19a7();
      FUN_100cacf7();
      FUN_100cdd03();
    }
    else if (param_2 == 3) {
      FUN_100cad8f((undefined *)0x0);
    }
LAB_100ca5f4:
    uVar2 = 1;
  }
  return uVar2;
}

