
undefined4 __thiscall FUN_100018b0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(5,s_bolts_100761d4,0x32);
  if (iVar1 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)((int)this + 4));
    return 1;
  }
  return 0;
}

