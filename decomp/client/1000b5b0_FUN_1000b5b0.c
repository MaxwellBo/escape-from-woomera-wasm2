
void __fastcall FUN_1000b5b0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_1007eed0)(s_models_v_9mmhandgun_mdl_100773c0);
  (*DAT_1007eed0)(s_models_w_9mmhandgun_mdl_10077340);
  (*DAT_1007eed0)(s_models_p_9mmhandgun_mdl_100773a8);
  uVar2 = (*DAT_1007eed0)(s_models_shell_mdl_10076750);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  (*DAT_1007eed4)(s_items_9mmclip2_wav_10077394);
  (*DAT_1007eed4)(s_weapons_pl_gun1_wav_10077380);
  (*DAT_1007eed4)(s_weapons_pl_gun2_wav_1007736c);
  (*DAT_1007eed4)(s_weapons_pl_gun3_wav_1007673c);
  uVar1 = (*DAT_1007f0b8)(1,s_events_glock1_sc_10076bd4);
  *(undefined2 *)(param_1 + 0x124) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_glock2_sc_10076bc0);
  *(undefined2 *)(param_1 + 0x126) = uVar1;
  return;
}

