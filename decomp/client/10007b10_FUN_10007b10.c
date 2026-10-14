
void __fastcall FUN_10007b10(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_1007eed0)(s_models_w_gauss_mdl_100769d8);
  (*DAT_1007eed0)(s_models_v_gauss_mdl_10076a58);
  (*DAT_1007eed0)(s_models_p_gauss_mdl_10076a44);
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_weapons_gauss2_wav_10076864);
  (*DAT_1007eed4)(s_weapons_electro4_wav_10076a2c);
  (*DAT_1007eed4)(s_weapons_electro5_wav_10076a14);
  (*DAT_1007eed4)(s_weapons_electro6_wav_100769fc);
  (*DAT_1007eed4)(s_ambience_pulsemachine_wav_10076834);
  uVar2 = (*DAT_1007eed0)(s_sprites_hotglow_spr_10076878);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  uVar2 = (*DAT_1007eed0)(s_sprites_hotglow_spr_10076878);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  uVar2 = (*DAT_1007eed0)(s_sprites_smoke_spr_1007688c);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  uVar1 = (*DAT_1007f0b8)(1,s_events_gauss_sc_100769ec);
  *(undefined2 *)(param_1 + 0x134) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_gaussspin_sc_10076850);
  *(undefined2 *)(param_1 + 0x136) = uVar1;
  return;
}

