
void __fastcall FUN_10051870(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_icky_mdl_1010f81c;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_ichy_ichy_idle1_wav_1010f520;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_ichy_ichy_alert2_wav_1010f530);
  ppuVar3 = &PTR_s_ichy_ichy_alert2_wav_1010f530;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_ichy_ichy_attack1_wav_1010f538);
  ppuVar3 = &PTR_s_ichy_ichy_attack1_wav_1010f538;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_ichy_ichy_bite1_wav_1010f540);
  ppuVar3 = &PTR_s_ichy_ichy_bite1_wav_1010f540;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_ichy_ichy_pain2_wav_1010f548);
  ppuVar3 = &PTR_s_ichy_ichy_die2_wav_1010f554;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_1010f55c);
  ppuVar3 = &PTR_s_ichy_ichy_pain2_wav_1010f548;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_ichy_ichy_die2_wav_1010f554);
  return;
}

