
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002b370(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_100264f0(param_1);
  fVar1 = fVar1 - (fVar1 * (float10)_DAT_100599f0 + (float10)_DAT_1005acb8) *
                  (float10)*(float *)(DAT_100acc38 + 0x10);
  if (fVar1 <= (float10)_DAT_1005d2a8) {
    fVar1 = (float10)_DAT_1005d2a8;
  }
  FUN_10031290(param_1,(float)fVar1,param_1);
  return;
}

