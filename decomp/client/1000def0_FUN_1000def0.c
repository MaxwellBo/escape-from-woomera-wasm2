
void __fastcall FUN_1000def0(int param_1)

{
  int iVar1;
  CBasePlayerItem *this;
  
  iVar1 = (*DAT_1007f038)(0,2);
  if (iVar1 == 0) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)(param_1 + 4));
  }
  else {
    if (iVar1 == 1) {
      CBasePlayerItem::AttemptToMaterialize(this);
      return;
    }
    if (iVar1 == 2) {
      CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)(*(int *)(param_1 + 4) + 0x208));
      return;
    }
  }
  return;
}

