
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10089c00(int *param_1)

{
  float10 fVar1;
  
  param_1[0x46] = 0;
  if (param_1[0x49] != 0) {
    (**(code **)(*param_1 + 0x188))();
  }
  fVar1 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100dd628);
  fVar1 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  param_1[0x40] = (int)(float)fVar1;
  (**(code **)(*param_1 + 0x17c))(4,1,0);
  return;
}

