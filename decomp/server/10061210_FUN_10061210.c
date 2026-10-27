
undefined4 __thiscall FUN_10061210(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0xbf] != 0) {
    if ((param_2 & 4) != 0) {
      return 1;
    }
    piVar1 = *(int **)(param_1[0xbf] + 4);
    (*DAT_10121efc)(1,s_CANTPLAY__Already_playing__s___s_101115f4,
                    *(int *)(DAT_10122044 + 0x98) + *piVar1,
                    piVar1[0x73] + *(int *)(DAT_10122044 + 0x98));
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xb8))();
  if ((iVar2 != 0) && (iVar2 = param_1[0x76], iVar2 != 5)) {
    if ((param_2 & 2) != 0) {
      return 1;
    }
    if ((((iVar2 != 0) && (iVar2 != 1)) && (param_1[0x77] != 1)) &&
       ((iVar2 != 3 || ((param_2 & 1) == 0)))) {
      (*DAT_10121efc)(1,s_CANTPLAY__non_interruptable_stat_101115d0);
      return 0;
    }
    return 1;
  }
  (*DAT_10121efc)(1,s_CANTPLAY__Dead_Barnacled__101115b4);
  return 0;
}

