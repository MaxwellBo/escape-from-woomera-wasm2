
void __thiscall FUN_10066b60(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1005ca70(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)param_1 + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CNihilanthHVR_101123c4,
                 (int)param_1,0x101120e0,5);
    return;
  }
  FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)param_1 + 4),
               (byte *)s_CNihilanthHVR_101123c4,(int)param_1,0x101120e0,5);
  return;
}

