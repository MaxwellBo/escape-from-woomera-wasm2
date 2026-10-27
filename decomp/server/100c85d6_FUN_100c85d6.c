
uint __thiscall FUN_100c85d6(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1011e234) {
    uVar1 = FUN_100c939e(this,param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_1011e028[param_1 * 2] & 4;
}

