
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a4e0(void)

{
  float fVar1;
  
  fVar1 = _DAT_10059eb0;
  if (*(float *)(DAT_100acc38 + 0xc0) != _DAT_10059a18) {
    fVar1 = *(float *)(DAT_100acc38 + 0xc0);
  }
  *(float *)(DAT_100acc38 + 100) =
       *(float *)(DAT_100acc38 + 100) -
       **(float **)(DAT_100acc38 + 0x4f4f0) * *(float *)(DAT_100acc38 + 0x10) * fVar1;
  *(float *)(DAT_100acc38 + 100) =
       *(float *)(DAT_100acc38 + 0x7c) * *(float *)(DAT_100acc38 + 0x10) +
       *(float *)(DAT_100acc38 + 100);
  *(undefined4 *)(DAT_100acc38 + 0x7c) = 0;
  FUN_10027820();
  return;
}

