
void __fastcall FUN_10063ca0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_10121e08)(s_models_v_9mmAR_mdl_10111ae8);
  (*DAT_10121e08)(s_models_w_9mmAR_mdl_10111a04);
  (*DAT_10121e08)(s_models_p_9mmAR_mdl_10111ad4);
  uVar2 = (*DAT_10121e08)(s_models_shell_mdl_1010dc34);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  (*DAT_10121e08)(s_models_grenade_mdl_10108710);
  (*DAT_10121e08)(s_models_w_9mmARclip_mdl_10111abc);
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  (*DAT_10121e0c)(s_items_clipinsert1_wav_10111aa4);
  (*DAT_10121e0c)(s_items_cliprelease1_wav_10111a8c);
  (*DAT_10121e0c)(s_weapons_hks1_wav_10111a78);
  (*DAT_10121e0c)(s_weapons_hks2_wav_10111a64);
  (*DAT_10121e0c)(s_weapons_hks3_wav_10111a50);
  (*DAT_10121e0c)(s_weapons_glauncher_wav_1010e9f4);
  (*DAT_10121e0c)(s_weapons_glauncher2_wav_10111a38);
  (*DAT_10121e0c)(s_weapons_357_cock1_wav_101085d8);
  uVar1 = (*DAT_10121ff0)(1,s_events_mp5_sc_10111a28);
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_mp52_sc_10111a18);
  *(undefined2 *)(param_1 + 0x12a) = uVar1;
  return;
}

