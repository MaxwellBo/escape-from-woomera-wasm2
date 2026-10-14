
void __fastcall FUN_10007730(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(*(int *)(param_1 + 4) + 0x1c8)));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 0) {
      if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
        iVar2 = *(int *)(DAT_10122044 + 0x98);
        (*DAT_10121efc)(1,s_DEBUG__info_group__s_changes_the_10102018,
                        *(int *)(*(int *)(param_1 + 4) + 0x1cc) + iVar2,iVar2 + *(int *)piVar1[1],
                        ((int *)piVar1[1])[0x73] + iVar2);
      }
      (**(code **)(*piVar1 + 0x11c))(param_1);
      return;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar2 != 0) {
    (*DAT_10121efc)(1,s_info_group___s___alias___s__was_n_10101fdc,
                    *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(DAT_10122044 + 0x98) + iVar2);
  }
  return;
}

