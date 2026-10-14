
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1004a210(int param_1)

{
  if (*DAT_10122044 <= _DAT_10131064) {
    return 0;
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) && (*(int *)(param_1 + 0x1d8) != 2)) {
    return 0;
  }
  return 1;
}

