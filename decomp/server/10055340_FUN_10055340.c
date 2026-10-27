
void __fastcall FUN_10055340(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_w_battery_mdl_1010faa0;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  if (iVar1 != 0) {
    (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    return;
  }
  (*DAT_10121e0c)(s_items_gunpickup2_wav_1010fab8);
  return;
}

