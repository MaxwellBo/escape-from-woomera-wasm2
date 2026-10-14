
void __fastcall FUN_10024d20(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_10121e08)(s_models_w_crossbow_mdl_1010659c);
  (*DAT_10121e08)(s_models_v_crossbow_mdl_10106638);
  (*DAT_10121e08)(s_models_p_crossbow_mdl_10106620);
  (*DAT_10121e0c)(s_weapons_xbow_fire1_wav_10106608);
  (*DAT_10121e0c)(s_weapons_xbow_reload1_wav_101065ec);
  FUN_100b0f60(0x101065dc);
  uVar1 = (*DAT_10121ff0)(1,s_events_crossbow1_sc_101065c8);
  *(undefined2 *)(param_1 + 0x124) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_crossbow2_sc_101065b4);
  *(undefined2 *)(param_1 + 0x126) = uVar1;
  return;
}

