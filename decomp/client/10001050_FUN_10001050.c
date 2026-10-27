
void __fastcall FUN_10001050(int param_1)

{
  undefined2 uVar1;
  CBasePlayerItem *this;
  char *pcVar2;
  
  (*DAT_1007eed0)(s_models_w_crossbow_mdl_10076120);
  (*DAT_1007eed0)(s_models_v_crossbow_mdl_100761bc);
  (*DAT_1007eed0)(s_models_p_crossbow_mdl_100761a4);
  (*DAT_1007eed4)(s_weapons_xbow_fire1_wav_1007618c);
  (*DAT_1007eed4)(s_weapons_xbow_reload1_wav_10076170);
  pcVar2 = s_crossbow_bolt_10076160;
  CBasePlayerItem::AttemptToMaterialize(this);
  uVar1 = (*DAT_1007f0b8)(1,s_events_crossbow1_sc_1007614c,pcVar2);
  *(undefined2 *)(param_1 + 0x124) = uVar1;
  uVar1 = (*DAT_1007f0b8)(1,s_events_crossbow2_sc_10076138);
  *(undefined2 *)(param_1 + 0x126) = uVar1;
  return;
}

