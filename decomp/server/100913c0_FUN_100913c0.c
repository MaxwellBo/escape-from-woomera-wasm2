
void __fastcall FUN_100913c0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_10121e08)(s_models_v_shotgun_mdl_101162a8);
  (*DAT_10121e08)(s_models_w_shotgun_mdl_101161fc);
  (*DAT_10121e08)(s_models_p_shotgun_mdl_10116290);
  uVar2 = (*DAT_10121e08)(s_models_shotgunshell_mdl_1010ea38);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  (*DAT_10121e0c)(s_weapons_dbarrel1_wav_10116278);
  (*DAT_10121e0c)(s_weapons_sbarrel1_wav_1010e99c);
  (*DAT_10121e0c)(s_weapons_reload1_wav_10116264);
  (*DAT_10121e0c)(s_weapons_reload3_wav_10116250);
  (*DAT_10121e0c)(s_weapons_357_cock1_wav_101085d8);
  (*DAT_10121e0c)(s_weapons_scock1_wav_1011623c);
  uVar1 = (*DAT_10121ff0)(1,s_events_shotgun1_sc_10116228);
  *(undefined2 *)(param_1 + 0x12e) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_shotgun2_sc_10116214);
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}

