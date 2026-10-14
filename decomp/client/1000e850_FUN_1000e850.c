
void __fastcall FUN_1000e850(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_1007eed0)(s_models_v_shotgun_mdl_10077784);
  (*DAT_1007eed0)(s_models_w_shotgun_mdl_10077718);
  (*DAT_1007eed0)(s_models_p_shotgun_mdl_1007776c);
  uVar2 = (*DAT_1007eed0)(s_models_shotgunshell_mdl_1007677c);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_weapons_dbarrel1_wav_10076764);
  (*DAT_1007eed4)(s_weapons_sbarrel1_wav_10076794);
  (*DAT_1007eed4)(s_weapons_reload1_wav_10077758);
  (*DAT_1007eed4)(s_weapons_reload3_wav_10077744);
  (*DAT_1007eed4)(s_weapons_357_cock1_wav_10076374);
  (*DAT_1007eed4)(s_weapons_scock1_wav_10077730);
  uVar1 = (*DAT_1007f0b8)(1,s_events_shotgun1_sc_10076bac);
  *(undefined2 *)(param_1 + 0x12e) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_shotgun2_sc_10076b98);
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}

