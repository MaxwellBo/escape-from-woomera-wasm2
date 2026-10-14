
undefined4 __thiscall FUN_10019c20(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x14))();
  iVar1 = FUN_100b1880(param_1,(byte *)s_ENTVARS_101050c8,*(int **)((int)this + 4));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (*(int **)((int)this + 4))[0x73];
  if (iVar1 != 0) {
    uVar2 = FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + iVar1,&DAT_101050f0,(int)this,
                         0x10104df0,0x12);
    return uVar2;
  }
  uVar2 = FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),
                       &DAT_101050f0,(int)this,0x10104df0,0x12);
  return uVar2;
}

