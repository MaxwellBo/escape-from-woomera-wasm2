
void __thiscall FUN_10032a40(void *this,int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar2 == 0) {
    FUN_10019420((void *)((int)this + 0xc4),(int)this);
  }
  else {
    iVar2 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar2),param_1);
    FUN_10019420((uint *)((int)this + 0xc4),iVar2);
    bVar1 = FUN_10019450((uint *)((int)this + 0xc4));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      (*DAT_10121efc)(1,s_env_elight___s__can_t_find_targe_101084d4,
                      *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(*(int *)((int)this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
      return;
    }
  }
  FUN_10032680(this,param_1,param_2,param_3);
  return;
}

