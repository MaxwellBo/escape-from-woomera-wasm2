
void __fastcall FUN_10004460(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_agrunt_mdl_10101a84;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_zombie_claw_strike1_wav_101013d0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_claw_miss1_wav_101013dc);
  ppuVar3 = &PTR_s_zombie_claw_miss1_wav_101013dc;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_agrunt_ag_attack1_wav_101013e4);
  ppuVar3 = &PTR_s_agrunt_ag_idle1_wav_10101410;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_agrunt_ag_alert1_wav_10101420);
  ppuVar3 = &PTR_s_agrunt_ag_die1_wav_101013f0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_agrunt_ag_pain1_wav_101013fc);
  ppuVar3 = &PTR_s_agrunt_ag_pain1_wav_101013fc;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_agrunt_ag_idle1_wav_10101410);
  ppuVar3 = &PTR_s_agrunt_ag_attack1_wav_101013e4;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_agrunt_ag_die1_wav_101013f0);
  ppuVar3 = &PTR_s_agrunt_ag_alert1_wav_10101420;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_10101430);
  (*DAT_10121e0c)(s_hassault_hw_shoot1_wav_10101aac);
  DAT_10121c3c = (*DAT_10121e08)(s_sprites_muz4_spr_10101a98);
  FUN_100b0f60(0x10101a7c);
  return;
}

