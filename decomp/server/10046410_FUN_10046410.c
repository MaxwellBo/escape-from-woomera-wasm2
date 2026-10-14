
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10046410(int *param_1)

{
  if ((param_1[0x2e] != 0) && ((float)_DAT_100dd628 < (float)param_1[0x30])) {
    FUN_100464e0(param_1,(*DAT_10122044 - (float)param_1[0x2f]) * *(float *)(param_1[1] + 0x138));
  }
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0x2f] = (int)*DAT_10122044;
  return;
}

