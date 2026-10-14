
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10027a30(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100acc38 + 0xcc) != _DAT_10059a18) {
    return;
  }
  fVar1 = _DAT_10059eb0;
  if (*(float *)(DAT_100acc38 + 0xc0) != _DAT_10059a18) {
    fVar1 = *(float *)(DAT_100acc38 + 0xc0);
  }
  *(float *)(DAT_100acc38 + 100) =
       *(float *)(DAT_100acc38 + 100) -
       **(float **)(DAT_100acc38 + 0x4f4f0) * *(float *)(DAT_100acc38 + 0x10) * fVar1 *
       (float)_DAT_100599f0;
  FUN_10027820();
  return;
}

