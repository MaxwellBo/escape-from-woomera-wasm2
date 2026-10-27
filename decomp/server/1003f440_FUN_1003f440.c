
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003f440(void *param_1)

{
  if ((*(byte *)((int)param_1 + 0x15c) & 0x10) == 0) {
    *(float *)((int)param_1 + 800) = *DAT_10122044 + _DAT_100dd5d8;
    FUN_1003e710((int)param_1);
    FUN_1003e720((int)param_1);
    return;
  }
  FUN_1003e700(param_1,200);
  FUN_1003e720((int)param_1);
  return;
}

