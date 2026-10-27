
void __thiscall FUN_100a1f20(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10019c20(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)param_1 + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CEnvCustomize_10119564,
                 (int)param_1,0x101186e8,0x10);
    return;
  }
  FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)param_1 + 4),
               (byte *)s_CEnvCustomize_10119564,(int)param_1,0x101186e8,0x10);
  return;
}

