
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b5f0(void)

{
  if (0 < *(int *)(DAT_100acc38 + 0x94)) {
    *(uint *)(DAT_100acc38 + 0x94) =
         *(int *)(DAT_100acc38 + 0x94) - (uint)*(byte *)(DAT_100acc38 + 0x4545a);
    if (*(int *)(DAT_100acc38 + 0x94) < 0) {
      *(undefined4 *)(DAT_100acc38 + 0x94) = 0;
    }
  }
  if (_DAT_10059a18 < *(float *)(DAT_100acc38 + 0x8c)) {
    *(float *)(DAT_100acc38 + 0x8c) =
         *(float *)(DAT_100acc38 + 0x8c) - (float)*(byte *)(DAT_100acc38 + 0x4545a);
    if (*(float *)(DAT_100acc38 + 0x8c) < _DAT_10059a18) {
      *(undefined4 *)(DAT_100acc38 + 0x8c) = 0;
    }
  }
  if (_DAT_10059a18 < *(float *)(DAT_100acc38 + 0xac)) {
    *(float *)(DAT_100acc38 + 0xac) =
         *(float *)(DAT_100acc38 + 0xac) - (float)*(byte *)(DAT_100acc38 + 0x4545a);
    if (*(float *)(DAT_100acc38 + 0xac) < _DAT_10059a18) {
      *(undefined4 *)(DAT_100acc38 + 0xac) = 0;
    }
  }
  return;
}

