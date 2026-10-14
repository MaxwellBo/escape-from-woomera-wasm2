
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10065180(int param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  if ((int)lVar2 != 1) {
    return (float10)_DAT_100dd63c;
  }
  fVar1 = (float10)*(float *)(param_1 + 0x344) - (float10)_DAT_100ece14;
  *(float *)(param_1 + 0x344) = (float)fVar1;
  return fVar1 * (float10)_DAT_100ece10;
}

