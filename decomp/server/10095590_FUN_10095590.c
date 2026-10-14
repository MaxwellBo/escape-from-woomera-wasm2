
void __thiscall FUN_10095590(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10019c20(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)param_1 + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CSpeaker_101170b8,
                 (int)param_1,0x10116e38,1);
    return;
  }
  FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)param_1 + 4),
               (byte *)s_CSpeaker_101170b8,(int)param_1,0x10116e38,1);
  return;
}

