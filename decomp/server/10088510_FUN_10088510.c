
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088510(void)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(DAT_10126a38 + 500) * _DAT_100ef36c;
  if ((_DAT_100dd5f8 < fVar1) &&
     (fVar2 = FUN_100841e0((float *)(DAT_10126a38 + 0x5c)), (float10)fVar1 < fVar2)) {
    FUN_10084280((float *)(DAT_10126a38 + 0x5c),
                 (float)(((float10)fVar1 / fVar2) * (float10)_DAT_100e8450),
                 (float *)(DAT_10126a38 + 0x5c));
    return;
  }
  return;
}

