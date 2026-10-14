
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a70(void)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_100c5b60();
  fVar2 = fVar1 - (float10)_DAT_1013486c;
  if (fVar2 < (float10)_DAT_100dd5f8) {
    _DAT_10134874 = _DAT_100dd5f8;
    _DAT_1013486c = (float)fVar1;
    return;
  }
  if ((float10)_DAT_100e1140 < fVar2) {
    fVar2 = (float10)_DAT_100e1140;
  }
  _DAT_10134874 = (float)fVar2;
  _DAT_1013486c = (float)fVar1;
  return;
}

