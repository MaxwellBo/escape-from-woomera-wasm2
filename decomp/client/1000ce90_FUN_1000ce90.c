
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000ce90(int *param_1)

{
  float10 fVar1;
  
  param_1[0x46] = 0;
  if (param_1[0x49] != 0) {
    (**(code **)(*param_1 + 0x188))();
  }
  fVar1 = FUN_10018f40();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_10059a10);
  fVar1 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  param_1[0x40] = (int)(float)fVar1;
  (**(code **)(*param_1 + 0x17c))(4,1,0);
  return;
}

