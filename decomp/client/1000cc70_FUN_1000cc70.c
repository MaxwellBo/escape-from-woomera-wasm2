
CBasePlayerItem * FUN_1000cc70(int *param_1)

{
  int iVar1;
  CBasePlayerItem *this;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(2,s_ARgrenades_100774f8,10);
  this = (CBasePlayerItem *)(uint)(iVar1 != -1);
  if (this != (CBasePlayerItem *)0x0) {
    CBasePlayerItem::AttemptToMaterialize(this);
  }
  return this;
}

