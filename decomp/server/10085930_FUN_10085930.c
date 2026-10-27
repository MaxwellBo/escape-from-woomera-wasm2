
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085930(void)

{
  float fVar1;
  
  if (*(float *)(DAT_10126a38 + 0xcc) != _DAT_100dd5f8) {
    return;
  }
  fVar1 = _DAT_100dd618;
  if (*(float *)(DAT_10126a38 + 0xc0) != _DAT_100dd5f8) {
    fVar1 = *(float *)(DAT_10126a38 + 0xc0);
  }
  *(float *)(DAT_10126a38 + 100) =
       *(float *)(DAT_10126a38 + 100) -
       **(float **)(DAT_10126a38 + 0x4f4f0) * *(float *)(DAT_10126a38 + 0x10) * fVar1 *
       (float)_DAT_100dd648;
  FUN_10085720();
  return;
}

