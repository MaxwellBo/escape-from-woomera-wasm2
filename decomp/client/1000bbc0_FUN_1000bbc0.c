
undefined4 __thiscall FUN_1000bbc0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(0x11,&DAT_100773d8,0xfa);
  if (iVar1 != -1) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)((int)this + 4));
    return 1;
  }
  return 0;
}

