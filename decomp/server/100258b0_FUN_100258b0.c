
void __fastcall FUN_100258b0(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_10121e08)(s_models_v_crowbar_mdl_10106778);
  (*DAT_10121e08)(s_models_w_crowbar_mdl_10106698);
  (*DAT_10121e08)(s_models_p_crowbar_mdl_10106760);
  (*DAT_10121e0c)(s_weapons_cbar_hit1_wav_10106748);
  (*DAT_10121e0c)(s_weapons_cbar_hit2_wav_10106730);
  (*DAT_10121e0c)(s_weapons_cbar_hitbod1_wav_10106714);
  (*DAT_10121e0c)(s_weapons_cbar_hitbod2_wav_101066f8);
  (*DAT_10121e0c)(s_weapons_cbar_hitbod3_wav_101066dc);
  (*DAT_10121e0c)(s_weapons_cbar_miss1_wav_101066c4);
  uVar1 = (*DAT_10121ff0)(1,s_events_crowbar_sc_101066b0);
  *(undefined2 *)(param_1 + 0x15c) = uVar1;
  return;
}

