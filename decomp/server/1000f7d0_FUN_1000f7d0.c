
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f7d0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_big_mom_mdl_10103888;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_gonarch_gon_childdie1_wav_10103458;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_sack1_wav_10103464);
  ppuVar3 = &PTR_s_gonarch_gon_sack1_wav_10103464;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_die1_wav_10103470);
  (*DAT_10121e0c)(PTR_s_gonarch_gon_die1_wav_10103470);
  ppuVar3 = &PTR_s_gonarch_gon_attack1_wav_10103474;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_claw_strike1_wav_10103480);
  ppuVar3 = &PTR_s_zombie_claw_strike1_wav_10103480;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_birth1_wav_1010348c);
  ppuVar3 = &PTR_s_gonarch_gon_birth1_wav_1010348c;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_alert1_wav_10103498);
  ppuVar3 = &PTR_s_gonarch_gon_alert1_wav_10103498;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_pain2_wav_101034a4);
  ppuVar3 = &PTR_s_gonarch_gon_pain2_wav_101034a4;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_gonarch_gon_step1_wav_101034b0);
  ppuVar3 = &PTR_s_gonarch_gon_step1_wav_101034b0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_101034bc);
  FUN_100b0f60(0x10103874);
  (*DAT_10121e08)(s_sprites_mommaspit_spr_10103920);
  DAT_10121cc4 = (*DAT_10121e08)(s_sprites_mommaspout_spr_10103908);
  _DAT_10121cc8 = (*DAT_10121e08)(s_sprites_mommablob_spr_101038f0);
  (*DAT_10121e0c)(s_bullchicken_bc_acid1_wav_101038d4);
  (*DAT_10121e0c)(s_bullchicken_bc_spithit1_wav_101038b8);
  (*DAT_10121e0c)(s_bullchicken_bc_spithit2_wav_1010389c);
  return;
}

