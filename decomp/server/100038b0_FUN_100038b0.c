
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100038b0(int param_1)

{
  if (*DAT_10122044 < *(float *)(param_1 + 0x34c)) {
    return 0;
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) && (*(int *)(param_1 + 0x1d8) != 2)) {
    *(float *)(param_1 + 0x34c) = *DAT_10122044 + _DAT_100ddad4;
    return 0;
  }
  return 1;
}

