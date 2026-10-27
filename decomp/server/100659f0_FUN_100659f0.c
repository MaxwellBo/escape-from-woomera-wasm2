
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100659f0(int param_1)

{
  if ((_DAT_100dd5f8 < _DAT_101096a4) &&
     ((*(byte *)(&DAT_10131e3c + *(int *)(param_1 + 0xe4) * 0xb) & 8) == 0)) {
    return (float10)*DAT_10122044;
  }
  return (float10)*DAT_10122044 + (float10)_DAT_100ddacc;
}

