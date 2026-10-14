
uint FUN_100647e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (DAT_10121dbc != 0) {
    uVar1 = (**(code **)(*DAT_10121db8 + 200))(param_1,param_2);
    if (uVar1 != 1) {
      return uVar1 & 0xffffff00;
    }
  }
  return 1;
}

