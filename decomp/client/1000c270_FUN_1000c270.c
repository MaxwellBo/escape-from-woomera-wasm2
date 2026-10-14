
void __fastcall FUN_1000c270(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_1007eed0)(s_models_v_9mmAR_mdl_100774e4);
  (*DAT_1007eed0)(s_models_w_9mmAR_mdl_1007743c);
  (*DAT_1007eed0)(s_models_p_9mmAR_mdl_100774d0);
  uVar2 = (*DAT_1007eed0)(s_models_shell_mdl_10076750);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  (*DAT_1007eed0)(s_models_grenade_mdl_100774bc);
  (*DAT_1007eed0)(s_models_w_9mmARclip_mdl_100774a4);
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_items_clipinsert1_wav_1007748c);
  (*DAT_1007eed4)(s_items_cliprelease1_wav_10077474);
  (*DAT_1007eed4)(s_weapons_hks1_wav_100767ac);
  (*DAT_1007eed4)(s_weapons_hks2_wav_100767c0);
  (*DAT_1007eed4)(s_weapons_hks3_wav_10077460);
  (*DAT_1007eed4)(s_weapons_glauncher_wav_100767d4);
  (*DAT_1007eed4)(s_weapons_glauncher2_wav_100767ec);
  (*DAT_1007eed4)(s_weapons_357_cock1_wav_10076374);
  uVar1 = (*DAT_1007f0b8)(1,s_events_mp5_sc_10076b88);
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_mp52_sc_10076b78);
  *(undefined2 *)(param_1 + 0x12a) = uVar1;
  return;
}

