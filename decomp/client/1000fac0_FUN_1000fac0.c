
void __fastcall FUN_1000fac0(int param_1)

{
  undefined2 uVar1;
  CBasePlayerItem *this;
  char *pcVar2;
  
  (*DAT_1007eed0)(s_models_v_tripmine_mdl_10077858);
  (*DAT_1007eed0)(s_models_p_tripmine_mdl_10077884);
  pcVar2 = s_monster_tripmine_10077870;
  CBasePlayerItem::AttemptToMaterialize(this);
  uVar1 = (*DAT_1007f0b8)(1,s_events_tripfire_sc_10076b18,pcVar2);
  *(undefined2 *)(param_1 + 0x120) = uVar1;
  return;
}

