
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d7e0(int *param_1)

{
  float10 fVar1;
  
  param_1[0x46] = 0;
  fVar1 = FUN_10018f40();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100599f0);
  (**(code **)(*param_1 + 0x17c))(4,1,0);
  return;
}

