
void __fastcall FUN_10001e90(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_1007eed0)(s_models_v_crowbar_mdl_10076318);
  (*DAT_1007eed0)(s_models_w_crowbar_mdl_10076238);
  (*DAT_1007eed0)(s_models_p_crowbar_mdl_10076300);
  (*DAT_1007eed4)(s_weapons_cbar_hit1_wav_100762e8);
  (*DAT_1007eed4)(s_weapons_cbar_hit2_wav_100762d0);
  (*DAT_1007eed4)(s_weapons_cbar_hitbod1_wav_100762b4);
  (*DAT_1007eed4)(s_weapons_cbar_hitbod2_wav_10076298);
  (*DAT_1007eed4)(s_weapons_cbar_hitbod3_wav_1007627c);
  (*DAT_1007eed4)(s_weapons_cbar_miss1_wav_10076264);
  uVar1 = (*DAT_1007f0b8)(1,s_events_crowbar_sc_10076250);
  *(undefined2 *)(param_1 + 0x15c) = uVar1;
  return;
}

