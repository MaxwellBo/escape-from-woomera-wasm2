
void __thiscall FUN_10009e60(void *this,CBaseEntity *param_1)

{
  DWORD DVar1;
  CBasePlayerItem *this_00;
  
  DVar1 = GetTickCount();
  if (*(uint *)((int)this + 300) < DVar1) {
    CBasePlayerAmmo::DefaultTouch(this,param_1);
    CBasePlayerItem::AttemptToMaterialize(this_00);
  }
  return;
}

