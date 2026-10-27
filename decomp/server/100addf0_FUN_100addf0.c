
void __fastcall FUN_100addf0(int param_1)

{
  int iVar1;
  
  FUN_100ac130();
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 != 0) {
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    return;
  }
  (*DAT_10121e08)(s_models_sentry_mdl_1011a40c);
  return;
}

