
void __thiscall FUN_100098f0(void *this,CBaseEntity *param_1)

{
  bool bVar1;
  CBasePlayerItem *this_00;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  CBasePlayerItem *this_03;
  uint *puVar2;
  
  puVar2 = (uint *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_1007f7f8 + 0x98));
  bVar1 = FUN_10047630(puVar2,&DAT_10076e10);
  if (bVar1) {
    FUN_100441d0(this);
    CBasePlayerItem::AttemptToMaterialize(this_00);
    return;
  }
  bVar1 = FUN_10047630(puVar2,s_Fashid_10076dac);
  if (bVar1) {
    CBasePlayerItem::AttemptToMaterialize(this_01);
    return;
  }
  bVar1 = FUN_10047630(puVar2,s_Nasir_10076d00);
  if (bVar1) {
    CBasePlayerItem::AttemptToMaterialize(this_02);
    return;
  }
  bVar1 = FUN_10047630(puVar2,s_Mouhtaz_10076c84);
  if (bVar1) {
    CBasePlayerItem::AttemptToMaterialize(this_03);
    return;
  }
  CBasePlayerAmmo::DefaultTouch(this,param_1);
  return;
}

