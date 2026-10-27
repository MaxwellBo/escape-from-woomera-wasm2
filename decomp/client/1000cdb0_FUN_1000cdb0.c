
void __fastcall FUN_1000cdb0(int param_1)

{
  undefined2 uVar1;
  
  (*DAT_1007eed0)(s_models_v_357_mdl_10077588);
  (*DAT_1007eed0)(s_models_w_357_mdl_10077524);
  (*DAT_1007eed0)(s_models_p_357_mdl_10077574);
  (*DAT_1007eed0)(s_models_w_357ammobox_mdl_1007755c);
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_weapons_357_reload1_wav_10077544);
  (*DAT_1007eed4)(s_weapons_357_cock1_wav_10076374);
  (*DAT_1007eed4)(s_weapons_357_shot1_wav_10076804);
  (*DAT_1007eed4)(s_weapons_357_shot2_wav_1007681c);
  uVar1 = (*DAT_1007f0b8)(1,s_events_python_sc_10076b64);
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  return;
}

