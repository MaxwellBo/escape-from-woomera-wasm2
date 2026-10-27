
void __fastcall FUN_1000d630(int param_1)

{
  undefined2 uVar1;
  CBasePlayerItem *this;
  CBasePlayerItem *this_00;
  char *pcVar2;
  char *pcVar3;
  
  (*DAT_1007eed0)(s_models_w_rpg_mdl_100775a4);
  (*DAT_1007eed0)(s_models_v_rpg_mdl_100775e4);
  (*DAT_1007eed0)(s_models_p_rpg_mdl_100775d0);
  (*DAT_1007eed4)(s_items_9mmclip1_wav_10076208);
  pcVar3 = s_laser_spot_100775c4;
  CBasePlayerItem::AttemptToMaterialize(this);
  pcVar2 = s_rpg_rocket_100775b8;
  CBasePlayerItem::AttemptToMaterialize(this_00);
  (*DAT_1007eed4)(s_weapons_rocketfire1_wav_1007690c,pcVar2,pcVar3);
  (*DAT_1007eed4)(s_weapons_glauncher_wav_100767d4);
  uVar1 = (*DAT_1007f0b8)(1,s_events_rpg_sc_10076b44);
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}

