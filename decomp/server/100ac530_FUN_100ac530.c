
void __fastcall FUN_100ac530(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_100ac130();
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_miniturret_mdl_1011a3f4;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e0c)(s_weapons_hks1_wav_10111a78);
  (*DAT_10121e0c)(s_weapons_hks2_wav_10111a64);
  (*DAT_10121e0c)(s_weapons_hks3_wav_10111a50);
  return;
}

