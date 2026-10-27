
void __fastcall FUN_1008bd10(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_10121e08)(s_models_w_rpg_mdl_101154b0);
  (*DAT_10121e08)(s_models_v_rpg_mdl_10115500);
  (*DAT_10121e08)(s_models_p_rpg_mdl_101154ec);
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  FUN_100b0f60(0x10115474);
  FUN_100b0f60(0x10109528);
  (*DAT_10121e0c)(s_weapons_rocketfire1_wav_101154d4);
  (*DAT_10121e0c)(s_weapons_glauncher_wav_1010e9f4);
  uVar1 = (*DAT_10121ff0)(1,s_events_rpg_sc_101154c4);
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}

