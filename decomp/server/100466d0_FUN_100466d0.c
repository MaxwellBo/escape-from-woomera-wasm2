
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100466d0(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_100ae400();
  *(float *)(*(int *)(param_1 + 0xdc) + 700) = (float)(fVar1 + (float10)_DAT_100dd648);
  return;
}

