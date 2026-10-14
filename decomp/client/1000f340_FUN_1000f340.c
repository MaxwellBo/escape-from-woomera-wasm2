
undefined4 __thiscall FUN_1000f340(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(0xc,s_buckshot_1007779c,0x7d);
  if (iVar1 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)((int)this + 4));
    return 1;
  }
  return 0;
}

