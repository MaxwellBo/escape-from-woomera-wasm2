
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10024e50(int *param_1)

{
  float10 fVar1;
  
  param_1[0x46] = 0;
  if (param_1[0x48] != 0) {
    (**(code **)(*param_1 + 0x188))();
  }
  fVar1 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar1 + (float10)_DAT_100dd648);
  if (param_1[0x43] != 0) {
    (**(code **)(*param_1 + 0x17c))(10,1,0);
    return;
  }
  (**(code **)(*param_1 + 0x17c))(0xb,1,0);
  return;
}

