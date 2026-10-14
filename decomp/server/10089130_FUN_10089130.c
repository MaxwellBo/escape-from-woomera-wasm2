
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089130(void)

{
  if (0 < *(int *)(DAT_10126a38 + 0x94)) {
    *(uint *)(DAT_10126a38 + 0x94) =
         *(int *)(DAT_10126a38 + 0x94) - (uint)*(byte *)(DAT_10126a38 + 0x4545a);
    if (*(int *)(DAT_10126a38 + 0x94) < 0) {
      *(undefined4 *)(DAT_10126a38 + 0x94) = 0;
    }
  }
  if (_DAT_100dd5f8 < *(float *)(DAT_10126a38 + 0x8c)) {
    *(float *)(DAT_10126a38 + 0x8c) =
         *(float *)(DAT_10126a38 + 0x8c) - (float)*(byte *)(DAT_10126a38 + 0x4545a);
    if (*(float *)(DAT_10126a38 + 0x8c) < _DAT_100dd5f8) {
      *(undefined4 *)(DAT_10126a38 + 0x8c) = 0;
    }
  }
  if (_DAT_100dd5f8 < *(float *)(DAT_10126a38 + 0xac)) {
    *(float *)(DAT_10126a38 + 0xac) =
         *(float *)(DAT_10126a38 + 0xac) - (float)*(byte *)(DAT_10126a38 + 0x4545a);
    if (*(float *)(DAT_10126a38 + 0xac) < _DAT_100dd5f8) {
      *(undefined4 *)(DAT_10126a38 + 0xac) = 0;
    }
  }
  return;
}

