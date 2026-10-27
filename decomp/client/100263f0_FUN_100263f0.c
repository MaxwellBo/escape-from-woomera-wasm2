
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100263f0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = FUN_100264c0(param_1);
  fVar2 = FUN_100264c0(param_2);
  if (((float)fVar1 != _DAT_10059a18) && ((float)fVar2 != _DAT_10059a18)) {
    fVar3 = (float10)FUN_1004b4c0();
    return (fVar3 / ((float10)(float)fVar2 * (float10)(float)fVar1)) * (float10)_DAT_100601f4 *
           (float10)_DAT_100601f8;
  }
  return (float10)_DAT_10059a18;
}

