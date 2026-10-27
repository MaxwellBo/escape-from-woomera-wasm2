
void __fastcall FUN_10053f40(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_islave_mdl_1010f9b8;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e08)(s_sprites_lgtning_spr_10102c0c);
  (*DAT_10121e0c)(s_debris_zap1_wav_1010f9ec);
  (*DAT_10121e0c)(s_debris_zap4_wav_101064c8);
  (*DAT_10121e0c)(s_weapons_electro4_wav_101064b0);
  (*DAT_10121e0c)(s_hassault_hw_shoot1_wav_10101aac);
  (*DAT_10121e0c)(s_zombie_zo_pain2_wav_1010f9d8);
  (*DAT_10121e0c)(s_headcrab_hc_headbite_wav_1010dd38);
  (*DAT_10121e0c)(s_weapons_cbar_miss1_wav_101066c4);
  ppuVar3 = &PTR_s_zombie_claw_strike1_wav_1010f898;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_claw_miss1_wav_1010f8a4);
  ppuVar3 = &PTR_s_zombie_claw_miss1_wav_1010f8a4;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_aslave_slv_pain1_wav_1010f8ac);
  ppuVar3 = &PTR_s_aslave_slv_pain1_wav_1010f8ac;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_aslave_slv_die1_wav_1010f8b4);
  ppuVar3 = &PTR_s_aslave_slv_die1_wav_1010f8b4;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_1010f8bc);
  FUN_100b0f60(0x1010f9cc);
  return;
}

