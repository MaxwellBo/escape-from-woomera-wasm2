
undefined4 * __thiscall FUN_100dbf36(undefined4 *param_1,int param_2,int param_3)

{
  param_1[3] = 0xffffffff;
  *param_1 = &PTR_FUN_100fa610;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  param_1[5] = param_2 + param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    param_1[2] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[0xc] = 0xffffffff;
  FUN_100db53a((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}

