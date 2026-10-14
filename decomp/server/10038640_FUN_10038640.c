
void __thiscall FUN_10038640(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10019c20(this,param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)this + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CFuncTank_101093e0,
                 (int)this,0x10108e78,0x1f);
    return;
  }
  FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),
               (byte *)s_CFuncTank_101093e0,(int)this,0x10108e78,0x1f);
  return;
}

