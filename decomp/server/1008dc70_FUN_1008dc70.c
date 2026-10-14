
void __fastcall FUN_1008dc70(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_scientist_mdl_10105858;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e0c)(s_scientist_sci_pain1_wav_10115b04);
  (*DAT_10121e0c)(s_scientist_sci_pain2_wav_10115aec);
  (*DAT_10121e0c)(s_scientist_sci_pain3_wav_10115ad4);
  (*DAT_10121e0c)(s_scientist_sci_pain4_wav_10115abc);
  (*DAT_10121e0c)(s_scientist_sci_pain5_wav_10115aa4);
  FUN_1008dcf0(param_1);
  FUN_1009c1f0(param_1);
  return;
}

