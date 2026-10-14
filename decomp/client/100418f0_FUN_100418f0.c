
undefined4 FUN_100418f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  if (uVar1 == 1) {
    uVar1 = 0;
    do {
      uVar2 = FUN_10026090();
      (&DAT_100bc498)[uVar1] = (char)uVar2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x24);
    return 1;
  }
  return 1;
}

