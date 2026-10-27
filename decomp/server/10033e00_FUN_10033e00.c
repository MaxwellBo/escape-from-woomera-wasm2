
void __fastcall FUN_10033e00(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_10121e08)(s_models_w_egon_mdl_1010859c);
  (*DAT_10121e08)(s_models_v_egon_mdl_10108690);
  (*DAT_10121e08)(s_models_p_egon_mdl_1010867c);
  (*DAT_10121e08)(s_models_w_9mmclip_mdl_10108664);
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  (*DAT_10121e0c)(s_weapons_egon_off1_wav_1010864c);
  (*DAT_10121e0c)(s_weapons_egon_run3_wav_10108634);
  (*DAT_10121e0c)(s_weapons_egon_windup2_wav_10108618);
  (*DAT_10121e08)(s_sprites_xbeam1_spr_10108604);
  (*DAT_10121e08)(s_sprites_XSpark1_spr_101085f0);
  (*DAT_10121e0c)(s_weapons_357_cock1_wav_101085d8);
  uVar1 = (*DAT_10121ff0)(1,s_events_egon_fire_sc_101085c4);
  *(undefined2 *)(param_1 + 0x144) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_egon_stop_sc_101085b0);
  *(undefined2 *)(param_1 + 0x130) = uVar1;
  return;
}

