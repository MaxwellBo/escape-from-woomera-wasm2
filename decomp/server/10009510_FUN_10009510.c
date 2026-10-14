
void __fastcall FUN_10009510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar3 = s_models_apache_mdl_10102bb8;
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar3);
  (*DAT_10121e0c)(s_apache_ap_rotor1_wav_10102ca8);
  (*DAT_10121e0c)(s_apache_ap_rotor2_wav_10102c90);
  (*DAT_10121e0c)(s_apache_ap_rotor3_wav_10102c78);
  (*DAT_10121e0c)(s_apache_ap_whine1_wav_10102c60);
  (*DAT_10121e0c)(s_weapons_mortarhit_wav_10102c48);
  uVar2 = (*DAT_10121e08)(s_sprites_white_spr_10102c34);
  *(undefined4 *)(param_1 + 0x368) = uVar2;
  (*DAT_10121e0c)(s_turret_tu_fire1_wav_10102c20);
  (*DAT_10121e08)(s_sprites_lgtning_spr_10102c0c);
  uVar2 = (*DAT_10121e08)(s_sprites_fexplo_spr_10102bf8);
  *(undefined4 *)(param_1 + 0x36c) = uVar2;
  uVar2 = (*DAT_10121e08)(s_models_metalplategibs_green_mdl_10102bd8);
  *(undefined4 *)(param_1 + 0x370) = uVar2;
  FUN_100b0f60(0x10102bcc);
  return;
}

