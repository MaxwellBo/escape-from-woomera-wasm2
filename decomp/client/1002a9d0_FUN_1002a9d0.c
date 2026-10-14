
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a9d0(void)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(DAT_100acc38 + 500) * _DAT_10060270;
  if ((_DAT_10059a18 < fVar1) &&
     (fVar2 = FUN_100264c0((float *)(DAT_100acc38 + 0x5c)), (float10)fVar1 < fVar2)) {
    FUN_10031290((float *)(DAT_100acc38 + 0x5c),
                 (float)(((float10)fVar1 / fVar2) * (float10)_DAT_10060268),
                 (float *)(DAT_100acc38 + 0x5c));
    return;
  }
  return;
}

