
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008bec0(int *param_1)

{
  float10 fVar1;
  
  param_1[0x46] = 0;
  fVar1 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100dd648);
  (**(code **)(*param_1 + 0x17c))(4,1,0);
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 0x68))(0,1);
    param_1[0x48] = 0;
  }
  return;
}

