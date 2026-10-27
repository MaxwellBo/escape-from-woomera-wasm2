
void __fastcall FUN_1004fc00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar3 = s_models_houndeye_mdl_1010f240;
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar3);
  (*DAT_10121e0c)(s_houndeye_he_alert1_wav_1010f41c);
  (*DAT_10121e0c)(s_houndeye_he_alert2_wav_1010f404);
  (*DAT_10121e0c)(s_houndeye_he_alert3_wav_1010f3ec);
  (*DAT_10121e0c)(s_houndeye_he_die1_wav_1010f3d4);
  (*DAT_10121e0c)(s_houndeye_he_die2_wav_1010f3bc);
  (*DAT_10121e0c)(s_houndeye_he_die3_wav_1010f3a4);
  (*DAT_10121e0c)(s_houndeye_he_idle1_wav_1010f38c);
  (*DAT_10121e0c)(s_houndeye_he_idle2_wav_1010f374);
  (*DAT_10121e0c)(s_houndeye_he_idle3_wav_1010f35c);
  (*DAT_10121e0c)(s_houndeye_he_hunt1_wav_1010f344);
  (*DAT_10121e0c)(s_houndeye_he_hunt2_wav_1010f32c);
  (*DAT_10121e0c)(s_houndeye_he_hunt3_wav_1010f314);
  (*DAT_10121e0c)(s_houndeye_he_pain1_wav_1010f210);
  (*DAT_10121e0c)(s_houndeye_he_pain3_wav_1010f228);
  (*DAT_10121e0c)(s_houndeye_he_pain4_wav_1010f2fc);
  (*DAT_10121e0c)(s_houndeye_he_pain5_wav_1010f2e4);
  (*DAT_10121e0c)(s_houndeye_he_attack1_wav_1010f2cc);
  (*DAT_10121e0c)(s_houndeye_he_attack3_wav_1010f2b4);
  (*DAT_10121e0c)(s_houndeye_he_blast1_wav_1010f29c);
  (*DAT_10121e0c)(s_houndeye_he_blast2_wav_1010f284);
  (*DAT_10121e0c)(s_houndeye_he_blast3_wav_1010f26c);
  uVar2 = (*DAT_10121e08)(s_sprites_shockwave_spr_1010f254);
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  return;
}

