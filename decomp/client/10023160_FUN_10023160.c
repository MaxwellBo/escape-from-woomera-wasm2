
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023160(void)

{
  float10 fVar1;
  
  FUN_10022c90((int *)&DAT_100a9878);
  if (((DAT_100a9880 & 1) == 0) && (*(float *)(DAT_100a9858 + 0xc) != _DAT_10059a18)) {
    fVar1 = (float10)(*DAT_100a50c8)();
    if ((fVar1 != (float10)_DAT_100b6fb0) &&
       ((DAT_100b6fa4 != 0 || (_DAT_100b6fa0 == _DAT_10059a18)))) {
      _DAT_100b6fa0 = *(float *)(DAT_100b6ff4 + 0xc);
      DAT_100b6fa4 = 0;
      _DAT_100b6fa8 = 0;
    }
    return;
  }
  return;
}

