
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10088eb0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_10084210(param_1);
  fVar1 = fVar1 - (fVar1 * (float10)_DAT_100dd648 + (float10)_DAT_100de4a0) *
                  (float10)*(float *)(DAT_10126a38 + 0x10);
  if (fVar1 <= (float10)_DAT_100de1e8) {
    fVar1 = (float10)_DAT_100de1e8;
  }
  FUN_10084280(param_1,(float)fVar1,param_1);
  return;
}

