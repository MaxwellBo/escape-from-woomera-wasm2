
void __fastcall FUN_1004aaf0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_1004a210(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (DAT_10122050 == 0) {
    iVar1 = (*DAT_10121f70)(0,1);
    if (iVar1 == 0) {
      return;
    }
    if (DAT_10122050 == 0) {
      iVar1 = (*DAT_10121f70)(0,2);
      if (iVar1 == 0) {
        FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_CHECK_1010e97c);
        DAT_10122050 = 1;
        FUN_1004a250(param_1);
        return;
      }
      if (iVar1 == 1) {
        FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_QUEST_1010e988);
        DAT_10122050 = 2;
        FUN_1004a250(param_1);
        return;
      }
      if (iVar1 == 2) {
        FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_IDLE_1010e994);
        FUN_1004a250(param_1);
        return;
      }
      goto LAB_1004ac4a;
    }
  }
  if (DAT_10122050 == 1) {
    pcVar2 = s_HG_CLEAR_1010e964;
LAB_1004ac2e:
    FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)pcVar2);
  }
  else if (DAT_10122050 == 2) {
    pcVar2 = s_HG_ANSWER_1010e970;
    goto LAB_1004ac2e;
  }
  DAT_10122050 = 0;
LAB_1004ac4a:
  FUN_1004a250(param_1);
  return;
}

