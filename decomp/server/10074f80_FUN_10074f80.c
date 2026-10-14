
void __thiscall FUN_10074f80(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10073fb0(this,param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)this + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CFuncPlatRot_10113e68,
                 (int)this,0x10113808,2);
    return;
  }
  FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),
               (byte *)s_CFuncPlatRot_10113e68,(int)this,0x10113808,2);
  return;
}

