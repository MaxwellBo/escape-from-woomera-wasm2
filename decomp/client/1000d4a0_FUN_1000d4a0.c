
undefined4 __thiscall FUN_1000d4a0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(6,&DAT_10077520,0x24);
  if (iVar1 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)((int)this + 4));
    return 1;
  }
  return 0;
}

