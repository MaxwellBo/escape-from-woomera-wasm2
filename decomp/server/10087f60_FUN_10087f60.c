
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087f60(void)

{
  if (_DAT_100ef368 < *(float *)(DAT_10126a38 + 0xcc)) {
    *(undefined4 *)(DAT_10126a38 + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_10126a38 + 0xcc) != _DAT_100dd5f8) {
    *(float *)(DAT_10126a38 + 0xcc) =
         *(float *)(DAT_10126a38 + 0xcc) - (float)*(byte *)(DAT_10126a38 + 0x4545a);
    if ((*(float *)(DAT_10126a38 + 0xcc) < _DAT_100dd5f8) || (*(int *)(DAT_10126a38 + 0xe4) == 0)) {
      *(undefined4 *)(DAT_10126a38 + 0xcc) = 0;
      *(uint *)(DAT_10126a38 + 0xb8) = *(uint *)(DAT_10126a38 + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_10126a38 + 0x5c) = *(undefined4 *)(DAT_10126a38 + 0x68);
    *(undefined4 *)(DAT_10126a38 + 0x60) = *(undefined4 *)(DAT_10126a38 + 0x6c);
  }
  return;
}

