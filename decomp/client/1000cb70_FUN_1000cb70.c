
CBasePlayerItem * FUN_1000cb70(int *param_1)

{
  int iVar1;
  CBasePlayerItem *this;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(200,&DAT_100773d8,0xfa);
  this = (CBasePlayerItem *)(uint)(iVar1 != -1);
  if (this != (CBasePlayerItem *)0x0) {
    CBasePlayerItem::AttemptToMaterialize(this);
  }
  return this;
}

