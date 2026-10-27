
uint __thiscall FUN_100c86a9(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1011e234) {
    uVar1 = FUN_100c939e(this,param_1,0x157);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1011e028 + param_1 * 2) & 0x157;
}

