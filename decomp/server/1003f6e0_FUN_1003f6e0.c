
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003f6e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_garg_mdl_1010d098;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e08)(s_sprites_gargeye1_spr_1010d03c);
  (*DAT_10121e08)(s_sprites_xbeam3_spr_1010d084);
  (*DAT_10121e08)(s_sprites_xbeam3_spr_1010d084);
  _DAT_10121dc0 = (*DAT_10121e08)(s_sprites_gargeye1_spr_1010d03c);
  DAT_10121dc4 = (*DAT_10121e08)(s_models_metalplategibs_mdl_10108d1c);
  (*DAT_10121e0c)(s_weapons_mine_charge_wav_1010d054);
  ppuVar3 = &PTR_s_zombie_claw_strike1_wav_1010cc78;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_flameoff1_wav_1010cc84);
  ppuVar3 = &PTR_s_garg_gar_flameoff1_wav_1010cc84;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_claw_miss1_wav_1010cc90);
  ppuVar3 = &PTR_s_zombie_claw_miss1_wav_1010cc90;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_debris_metal4_wav_1010cc98);
  ppuVar3 = &PTR_s_debris_metal4_wav_1010cc98;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_step1_wav_1010cca8);
  ppuVar3 = &PTR_s_garg_gar_step1_wav_1010cca8;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_idle1_wav_1010ccb0);
  ppuVar3 = &PTR_s_garg_gar_idle1_wav_1010ccb0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_attack1_wav_1010ccc4);
  ppuVar3 = &PTR_s_garg_gar_alert1_wav_1010ccd0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_pain1_wav_1010ccdc);
  ppuVar3 = &PTR_s_garg_gar_pain1_wav_1010ccdc;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_stomp1_wav_1010cce8);
  ppuVar3 = &PTR_s_garg_gar_attack1_wav_1010ccc4;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_garg_gar_alert1_wav_1010ccd0);
  (*DAT_10121e0c)(PTR_s_garg_gar_stomp1_wav_1010cce8);
  ppuVar3 = &PTR_s_garg_gar_breathe1_wav_1010ccec;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_1010ccf8);
  return;
}

