
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001f80(int *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10018f40();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100599f0);
  (**(code **)(*param_1 + 0x17c))(2,1,0);
  return;
}

