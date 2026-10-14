
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10039a00(int *param_1)

{
  FUN_10039a50(param_1);
  if ((ABS(*(float *)(param_1[1] + 0x5c)) <= (float)_DAT_100dd628) &&
     (ABS(*(float *)(param_1[1] + 0x60)) <= (float)_DAT_100dd628)) {
    FUN_1003afb0((int)param_1);
    return;
  }
  FUN_1003af50((int)param_1);
  return;
}

