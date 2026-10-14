
undefined4 __fastcall FUN_100a6690(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 0x1d0);
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_100aec40(0,s_player_10101c54);
    if (piVar1 == (int *)0x0) {
      (*DAT_10121efc)(4,s_trigger_onsight_can_t_find_playe_10119ab0);
      return 0;
    }
  }
  else {
    piVar1 = (int *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar2));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 0x1d4);
  if (iVar2 != 0) {
    iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar2));
    if (iVar2 == 0) {
      iVar2 = FUN_100aec40(0,*(int *)(DAT_10122044 + 0x98) +
                             *(int *)(*(int *)((int)param_1 + 4) + 0x1d4));
      if (iVar2 == 0) {
        return 0;
      }
      while (iVar3 = FUN_100a67e0(param_1,piVar1,iVar2), iVar3 == 0) {
        iVar2 = FUN_100aec40(iVar2,*(int *)(DAT_10122044 + 0x98) +
                                   *(int *)(*(int *)((int)param_1 + 4) + 0x1d4));
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    else {
      while (iVar3 = FUN_100a67e0(param_1,piVar1,iVar2), iVar3 == 0) {
        iVar2 = FUN_100af030(iVar2,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                           *(int *)(*(int *)((int)param_1 + 4) + 0x1d4)));
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  uVar4 = FUN_100a67e0(param_1,piVar1,(int)param_1);
  return uVar4;
}

