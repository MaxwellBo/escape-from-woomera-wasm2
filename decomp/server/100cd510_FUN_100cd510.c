
uint __thiscall FUN_100cd510(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_1011e234 < 2) {
    uVar1 = (byte)PTR_DAT_1011e028[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_100c939e(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

