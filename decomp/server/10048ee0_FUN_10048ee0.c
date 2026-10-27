
void __fastcall FUN_10048ee0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_headcrab_hc_idle1_wav_1010dd04;
  do {
    (*DAT_10121e0c)(*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < &PTR_s_headcrab_hc_alert1_wav_1010dd10);
  (*DAT_10121e0c)(PTR_s_headcrab_hc_alert1_wav_1010dd10);
  ppuVar2 = &PTR_s_headcrab_hc_pain1_wav_1010dd14;
  do {
    (*DAT_10121e0c)(*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < &PTR_s_headcrab_hc_attack1_wav_1010dd20);
  ppuVar2 = &PTR_s_headcrab_hc_attack1_wav_1010dd20;
  do {
    (*DAT_10121e0c)(*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < &PTR_s_headcrab_hc_die1_wav_1010dd2c);
  ppuVar2 = &PTR_s_headcrab_hc_die1_wav_1010dd2c;
  do {
    (*DAT_10121e0c)(*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < &PTR_s_headcrab_hc_headbite_wav_1010dd34);
  (*DAT_10121e0c)(PTR_s_headcrab_hc_headbite_wav_1010dd34);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 != 0) {
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    return;
  }
  (*DAT_10121e08)(s_models_headcrab_mdl_1010de90);
  return;
}

