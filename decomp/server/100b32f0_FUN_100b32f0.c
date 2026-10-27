
void __thiscall FUN_100b32f0(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b3250(this,param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)this + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CBasePlayerWeapon_1011ba38,
                 (int)this,0x1011b540,7);
    return;
  }
  FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),
               (byte *)s_CBasePlayerWeapon_1011ba38,(int)this,0x1011b540,7);
  return;
}

