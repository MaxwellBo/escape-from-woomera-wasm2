
undefined4 FUN_1003e7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  sVar2 = (short)uVar1;
  if ((0 < sVar2) && (sVar2 < 0x41)) {
    uVar1 = FUN_10026090();
    *(uint *)(&DAT_100b5f04 + sVar2 * 4) = uVar1;
  }
  return 1;
}

