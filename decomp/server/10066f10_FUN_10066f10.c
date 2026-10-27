
void __fastcall FUN_10066f10(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_nihilanth_mdl_10112414;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e08)(s_sprites_lgtning_spr_10102c0c);
  FUN_100b0f60(0x10112448);
  FUN_100b0f60(0x1011242c);
  FUN_100b0f60(0x1010f98c);
  ppuVar3 = &PTR_s_X_x_attack1_wav_10112130;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_X_x_ballattack1_wav_1011213c);
  (*DAT_10121e0c)(PTR_s_X_x_ballattack1_wav_1011213c);
  (*DAT_10121e0c)(PTR_s_X_x_shoot1_wav_10112140);
  ppuVar3 = &PTR_s_X_x_recharge1_wav_10112144;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_X_x_laugh1_wav_10112150);
  ppuVar3 = &PTR_s_X_x_laugh1_wav_10112150;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_X_x_pain1_wav_10112158);
  ppuVar3 = &PTR_s_X_x_pain1_wav_10112158;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_X_x_die1_wav_10112160);
  (*DAT_10121e0c)(PTR_s_X_x_die1_wav_10112160);
  (*DAT_10121e0c)(s_debris_beamstart7_wav_10108454);
  return;
}

