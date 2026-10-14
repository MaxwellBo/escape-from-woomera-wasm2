
undefined4 FUN_100cedca(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  if (uVar1 < 0x781) {
    DAT_101204cc = uVar1;
    return 1;
  }
  return 0;
}

