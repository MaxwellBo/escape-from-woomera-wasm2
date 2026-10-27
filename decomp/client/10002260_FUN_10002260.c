
void __fastcall FUN_10002260(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_1007eed0)(s_models_w_egon_mdl_10076338);
  (*DAT_1007eed0)(s_models_v_egon_mdl_1007642c);
  (*DAT_1007eed0)(s_models_p_egon_mdl_10076418);
  (*DAT_1007eed0)(s_models_w_9mmclip_mdl_10076400);
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_weapons_egon_off1_wav_100763e8);
  (*DAT_1007eed4)(s_weapons_egon_run3_wav_100763d0);
  (*DAT_1007eed4)(s_weapons_egon_windup2_wav_100763b4);
  (*DAT_1007eed0)(s_sprites_xbeam1_spr_100763a0);
  (*DAT_1007eed0)(s_sprites_XSpark1_spr_1007638c);
  (*DAT_1007eed4)(s_weapons_357_cock1_wav_10076374);
  uVar1 = (*DAT_1007f0b8)(1,s_events_egon_fire_sc_10076360);
  *(undefined2 *)(param_1 + 0x144) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_egon_stop_sc_1007634c);
  *(undefined2 *)(param_1 + 0x130) = uVar1;
  return;
}

