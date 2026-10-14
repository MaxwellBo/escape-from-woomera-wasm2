
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d8e0(int param_1)

{
  float10 fVar1;
  
  *(uint *)(param_1 + 0x124) = (uint)(*(int *)(param_1 + 0x124) == 0);
  fVar1 = FUN_10018f40();
  *(float *)(param_1 + 0xfc) = (float)(fVar1 + (float10)_DAT_1005acd0);
  return;
}

