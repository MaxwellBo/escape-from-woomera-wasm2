
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10046680(int *param_1)

{
  float10 fVar1;
  
  *(int *)(*(int *)(param_1[0x37] + 4) + 0xbc) = param_1[0x48];
  fVar1 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100dd628);
  (**(code **)(*param_1 + 0x17c))(0,1,0);
  param_1[0x43] = 0;
  return 1;
}

