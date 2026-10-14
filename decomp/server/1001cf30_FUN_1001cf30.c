
void FUN_1001cf30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_10121ce0 == 0) {
    FUN_1001cef0(param_1);
    DAT_10121ce0 = 1;
  }
  iVar1 = (*DAT_10122010)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*DAT_10122020)(param_1,DAT_10105130);
    (*DAT_10122020)(param_1,DAT_10105154);
    (*DAT_10122020)(param_1,DAT_10105178);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*DAT_10122020)(param_1,DAT_10105130);
    (*DAT_10122020)(param_1,DAT_10105154);
    (*DAT_10122020)(param_1,DAT_10105178);
    return;
  }
  if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*DAT_1012201c)(param_1,DAT_10105130);
    (*DAT_1012201c)(param_1,DAT_10105154);
    (*DAT_1012201c)(param_1,DAT_10105178);
  }
  return;
}

