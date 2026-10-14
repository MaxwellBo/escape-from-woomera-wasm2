
void __fastcall FUN_10071250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  FUN_100b0f60(0x10101a08);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar3 = s_models_osprey_mdl_10113614;
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar3);
  (*DAT_10121e08)(s_models_HVR_mdl_10102cdc);
  (*DAT_10121e0c)(s_apache_ap_rotor4_wav_10113680);
  (*DAT_10121e0c)(s_weapons_mortarhit_wav_10102c48);
  uVar2 = (*DAT_10121e08)(s_sprites_rope_spr_1010eb94);
  *(undefined4 *)(param_1 + 0x580) = uVar2;
  uVar2 = (*DAT_10121e08)(s_sprites_fexplo_spr_10102bf8);
  *(undefined4 *)(param_1 + 0x588) = uVar2;
  uVar2 = (*DAT_10121e08)(s_models_osprey_tailgibs_mdl_10113664);
  *(undefined4 *)(param_1 + 0x58c) = uVar2;
  uVar2 = (*DAT_10121e08)(s_models_osprey_bodygibs_mdl_10113648);
  *(undefined4 *)(param_1 + 0x590) = uVar2;
  uVar2 = (*DAT_10121e08)(s_models_osprey_enginegibs_mdl_10113628);
  *(undefined4 *)(param_1 + 0x594) = uVar2;
  return;
}

