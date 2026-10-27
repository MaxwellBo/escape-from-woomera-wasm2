
void __fastcall FUN_1000d4a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_security_mdl_101031cc;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e0c)(s_barney_ba_attack1_wav_10103268);
  (*DAT_10121e0c)(s_barney_ba_attack2_wav_101030b0);
  (*DAT_10121e0c)(s_barney_ba_pain1_wav_10103254);
  (*DAT_10121e0c)(s_barney_ba_pain2_wav_10103240);
  (*DAT_10121e0c)(s_barney_ba_pain3_wav_1010322c);
  (*DAT_10121e0c)(s_barney_ba_die1_wav_10103218);
  (*DAT_10121e0c)(s_barney_ba_die2_wav_10103204);
  (*DAT_10121e0c)(s_barney_ba_die3_wav_101031f0);
  FUN_1000d540(param_1);
  FUN_1009c1f0(param_1);
  return;
}

