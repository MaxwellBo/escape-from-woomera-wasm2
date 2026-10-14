
undefined4 __thiscall FUN_100087a0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(0x14,s_uranium_10076448,100);
  if (iVar1 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)((int)this + 4));
    return 1;
  }
  return 0;
}

