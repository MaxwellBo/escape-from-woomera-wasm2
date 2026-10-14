
void __cdecl FUN_100761b0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_100761e0(*param_1);
  *param_1 = (float)fVar1;
  fVar1 = FUN_100761e0(param_1[1]);
  param_1[1] = (float)fVar1;
  fVar1 = FUN_100761e0(param_1[2]);
  param_1[2] = (float)fVar1;
  return;
}

