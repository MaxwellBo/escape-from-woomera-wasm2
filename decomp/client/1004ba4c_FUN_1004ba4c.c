
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004ba4c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100bca04 = GetVersion();
    iVar1 = FUN_10050042(1);
    if (iVar1 != 0) {
      _DAT_100bca10 = DAT_100bca04 >> 8 & 0xff;
      _DAT_100bca0c = DAT_100bca04 & 0xff;
      DAT_100bca04 = DAT_100bca04 >> 0x10;
      _DAT_100bca08 = _DAT_100bca0c * 0x100 + _DAT_100bca10;
      iVar1 = FUN_1004d76c();
      if (iVar1 != 0) {
        DAT_100be184 = GetCommandLineA();
        DAT_100bca64 = FUN_10052b9a();
        FUN_1004ddd6();
        FUN_1005294d();
        FUN_10052894();
        FUN_10049a7e();
        DAT_100bca60 = DAT_100bca60 + 1;
        goto LAB_1004bb1f;
      }
      FUN_1005009f();
    }
LAB_1004baac:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100bca60 < 1) goto LAB_1004baac;
      DAT_100bca60 = DAT_100bca60 + -1;
      if (DAT_100bca3c == 0) {
        FUN_10049acd();
      }
      FUN_1004df92();
      FUN_1004d7c0();
      FUN_1005009f();
    }
    else if (param_2 == 3) {
      FUN_1004d858((undefined *)0x0);
    }
LAB_1004bb1f:
    uVar2 = 1;
  }
  return uVar2;
}

