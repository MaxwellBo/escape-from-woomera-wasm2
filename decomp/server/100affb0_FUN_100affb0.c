
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100affb0(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)param_2;
  fVar2 = fVar1 * fVar1 * fVar1;
  return fVar1 * fVar1 * (float10)_DAT_100ddad4 - (fVar2 + fVar2);
}

