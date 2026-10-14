
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a420(void)

{
  if (_DAT_10060260 < *(float *)(DAT_100acc38 + 0xcc)) {
    *(undefined4 *)(DAT_100acc38 + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_100acc38 + 0xcc) != _DAT_10059a18) {
    *(float *)(DAT_100acc38 + 0xcc) =
         *(float *)(DAT_100acc38 + 0xcc) - (float)*(byte *)(DAT_100acc38 + 0x4545a);
    if ((*(float *)(DAT_100acc38 + 0xcc) < _DAT_10059a18) || (*(int *)(DAT_100acc38 + 0xe4) == 0)) {
      *(undefined4 *)(DAT_100acc38 + 0xcc) = 0;
      *(uint *)(DAT_100acc38 + 0xb8) = *(uint *)(DAT_100acc38 + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_100acc38 + 0x5c) = *(undefined4 *)(DAT_100acc38 + 0x68);
    *(undefined4 *)(DAT_100acc38 + 0x60) = *(undefined4 *)(DAT_100acc38 + 0x6c);
  }
  return;
}

