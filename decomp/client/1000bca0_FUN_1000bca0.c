
void __fastcall FUN_1000bca0(int param_1)

{
  undefined2 uVar1;
  CBasePlayerItem *this;
  
  (*DAT_1007eed0)(s_models_v_hgun_mdl_10077418);
  (*DAT_1007eed0)(s_models_w_hgun_mdl_100773e8);
  (*DAT_1007eed0)(s_models_p_hgun_mdl_10077404);
  uVar1 = (*DAT_1007f0b8)(1,s_events_firehornet_sc_10076b2c);
  *(undefined2 *)(param_1 + 300) = uVar1;
  CBasePlayerItem::AttemptToMaterialize(this);
  return;
}

