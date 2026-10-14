
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842c0(float *param_1,float *param_2,float *param_3)

{
  float afStack_c [3];
  
  if ((*param_1 == _DAT_100dd5f8) && (param_1[1] == _DAT_100dd5f8)) {
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_3 = -param_1[2];
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    return;
  }
  afStack_c[0] = 0.0;
  afStack_c[1] = 0.0;
  afStack_c[2] = 1.0;
  FUN_100841a0(param_1,afStack_c,param_2);
  FUN_10084210(param_2);
  FUN_100841a0(param_2,param_1,param_3);
  FUN_10084210(param_3);
  return;
}

