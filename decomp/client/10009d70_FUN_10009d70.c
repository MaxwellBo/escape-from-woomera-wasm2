
void __thiscall FUN_10009d70(CBasePlayerAmmo *param_1,CBaseEntity *param_2)

{
  bool bVar1;
  char cVar2;
  CBasePlayerItem *this;
  CBasePlayerItem *this_00;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  
  bVar1 = FUN_10047630((uint *)(*(int *)(*(int *)(param_2 + 4) + 0x1cc) +
                               *(int *)(DAT_1007f7f8 + 0x98)),s_Gholan_1007711c);
  if (bVar1) {
    cVar2 = FUN_10044860();
    if (cVar2 != '\0') {
      FUN_100441d0((int *)param_1);
      CBasePlayerItem::AttemptToMaterialize(this);
      CBasePlayerItem::AttemptToMaterialize(this_00);
      CBasePlayerItem::AttemptToMaterialize(this_01);
      CBasePlayerItem::AttemptToMaterialize(this_02);
      FUN_100443e0(10.0);
      return;
    }
  }
  CBasePlayerAmmo::DefaultTouch(param_1,param_2);
  return;
}

