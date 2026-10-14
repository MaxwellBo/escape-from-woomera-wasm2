
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10025390(float param_1,float param_2,float param_3,float param_4)

{
  if (param_4 < _DAT_10059a18) {
    return (float10)_DAT_10059a18;
  }
  if (param_4 < param_1) {
    return (float10)_DAT_10059eb0 - ((float10)param_1 - (float10)param_4) / (float10)param_1;
  }
  if (param_4 <= param_1 + param_3) {
    return (float10)_DAT_10059eb0;
  }
  if (_DAT_10059a18 < param_2) {
    return (float10)_DAT_10059eb0 -
           ((float10)param_4 - (float10)(param_1 + param_3)) / (float10)param_2;
  }
  return (float10)_DAT_10059a18;
}

