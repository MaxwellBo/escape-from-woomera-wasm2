
uint __thiscall FUN_100c8586(void *param_1,int param_2)

{
  uint uVar1;
  
  if (1 < DAT_1011e234) {
    uVar1 = FUN_100c939e(param_1,param_2,1);
    return uVar1;
  }
  return (byte)PTR_DAT_1011e028[param_2 * 2] & 1;
}

