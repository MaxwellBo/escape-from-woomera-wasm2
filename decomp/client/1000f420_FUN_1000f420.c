
void __fastcall FUN_1000f420(int param_1)

{
  undefined2 uVar1;
  CBasePlayerItem *this;
  char *pcVar2;
  
  (*DAT_1007eed0)(s_models_w_sqknest_mdl_100777c8);
  (*DAT_1007eed0)(s_models_v_squeak_mdl_10077834);
  (*DAT_1007eed0)(s_models_p_squeak_mdl_10077820);
  (*DAT_1007eed4)(s_squeek_sqk_hunt2_wav_10077808);
  (*DAT_1007eed4)(s_squeek_sqk_hunt3_wav_100777f0);
  pcVar2 = s_monster_snark_100777e0;
  CBasePlayerItem::AttemptToMaterialize(this);
  uVar1 = (*DAT_1007f0b8)(1,s_events_snarkfire_sc_10076b04,pcVar2);
  *(undefined2 *)(param_1 + 0x124) = uVar1;
  return;
}

