
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100ae770(float param_1)

{
  longlong lVar1;
  
  if (param_1 < _DAT_100dd5f8) {
    lVar1 = __ftol();
    return (float10)((1 - (int)lVar1) * 0x168) + (float10)param_1;
  }
  if (_DAT_100ddae8 <= param_1) {
    lVar1 = __ftol();
    return (float10)param_1 - (float10)((int)lVar1 * 0x168);
  }
  return (float10)param_1;
}

