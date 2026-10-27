
void __thiscall FUN_100a9220(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar1 != 0) {
    iVar1 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1),param_1);
    if (iVar1 == 0) {
      (*DAT_10121efc)(4,s_motion_manager___s__can_t_find_e_10119d38,
                      *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(*(int *)((int)this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
      return;
    }
    do {
      FUN_100a92d0(this,iVar1,param_1);
      iVar1 = FUN_100af060(iVar1,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1);
    } while (iVar1 != 0);
  }
  return;
}

