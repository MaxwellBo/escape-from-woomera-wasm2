
void __thiscall FUN_1008d330(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10099cf0(this,param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)this + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CScientist_10115a70,
                 (int)this,0x10115608,3);
    return;
  }
  FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),
               (byte *)s_CScientist_10115a70,(int)this,0x10115608,3);
  return;
}

