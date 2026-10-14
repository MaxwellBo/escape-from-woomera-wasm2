
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100ae860(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_c;
  
  FUN_100ae8d0(&local_18,param_2,param_3);
  fVar1 = (float10)FUN_100c9630();
  local_c = (float)(fVar1 * (float10)_DAT_100f60d8);
  fVar1 = (float10)FUN_100c9190();
  fVar1 = fVar1 * (float10)_DAT_100e4918;
  if (local_14 < _DAT_100dd5f8) {
    fVar1 = -fVar1;
  }
  *param_1 = local_c;
  param_1[2] = 0.0;
  param_1[1] = (float)fVar1;
  return;
}

