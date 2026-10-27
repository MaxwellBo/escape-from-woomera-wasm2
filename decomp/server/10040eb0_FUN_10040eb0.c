
void __fastcall FUN_10040eb0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_10121e08)(s_models_w_gauss_mdl_1010d0e8);
  (*DAT_10121e08)(s_models_v_gauss_mdl_1010d1a8);
  (*DAT_10121e08)(s_models_p_gauss_mdl_1010d194);
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  (*DAT_10121e0c)(s_weapons_gauss2_wav_1010d180);
  (*DAT_10121e0c)(s_weapons_electro4_wav_101064b0);
  (*DAT_10121e0c)(s_weapons_electro5_wav_1010d168);
  (*DAT_10121e0c)(s_weapons_electro6_wav_1010d150);
  (*DAT_10121e0c)(s_ambience_pulsemachine_wav_1010d134);
  uVar2 = (*DAT_10121e08)(s_sprites_hotglow_spr_1010d120);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  uVar2 = (*DAT_10121e08)(s_sprites_hotglow_spr_1010d120);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  uVar2 = (*DAT_10121e08)(s_sprites_smoke_spr_10102d00);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  uVar1 = (*DAT_10121ff0)(1,s_events_gauss_sc_1010d110);
  *(undefined2 *)(param_1 + 0x134) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_gaussspin_sc_1010d0fc);
  *(undefined2 *)(param_1 + 0x136) = uVar1;
  return;
}

