
undefined4 __thiscall FUN_100c8742(void *param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_1011e234 < 2) {
    uVar1 = *(ushort *)(PTR_DAT_1011e028 + param_2 * 2) & 0x103;
  }
  else {
    uVar1 = FUN_100c939e(param_1,param_2,0x103);
  }
  if ((uVar1 == 0) && (param_2 != 0x5f)) {
    return 0;
  }
  return 1;
}

