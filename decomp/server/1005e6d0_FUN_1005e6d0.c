
undefined4 FUN_1005e6d0(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    return 1;
  }
  if ((param_1 & 2) != 0) {
    return 2;
  }
  if ((param_1 & 0x10) != 0) {
    return 0x10;
  }
  if ((param_1 & 0x20) != 0) {
    return 0x20;
  }
  if ((param_1 & 0x40) != 0) {
    uVar1 = 0x40;
  }
  return uVar1;
}

