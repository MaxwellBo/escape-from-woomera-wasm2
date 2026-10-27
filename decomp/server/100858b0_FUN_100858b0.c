
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100858b0(void)

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
       fVar1 * **(float **)(DAT_10126a38 + 0x4f4f0) * *(float *)(DAT_10126a38 + 0x10) *
       (float)_DAT_100dd648;
  *(float *)(DAT_10126a38 + 100) =
       *(float *)(DAT_10126a38 + 0x7c) * *(float *)(DAT_10126a38 + 0x10) +
       *(float *)(DAT_10126a38 + 100);
  *(undefined4 *)(DAT_10126a38 + 0x7c) = 0;
  FUN_10085720();
  return;
}

