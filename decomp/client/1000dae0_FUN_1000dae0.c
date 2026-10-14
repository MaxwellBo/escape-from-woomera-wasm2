
undefined4 __thiscall FUN_1000dae0(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_1000a1d0();
  iVar2 = (**(code **)(*param_1 + 0x90))(bVar1 + '\x01',s_rockets_100775f8,5);
  if (iVar2 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)(*(int *)((int)this + 4) + 0x208));
    return 1;
  }
  return 0;
}

