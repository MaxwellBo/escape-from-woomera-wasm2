
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cd90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_10121cdc == 0) {
    FUN_1001cd20(param_1);
    DAT_10121cdc = 1;
  }
  iVar1 = (*DAT_10122010)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*DAT_10122020)(param_1,DAT_10105130);
    (*DAT_10122020)(param_1,DAT_10105154);
    (*DAT_10122020)(param_1,DAT_10105178);
  }
  if ((*(float *)(param_3 + 0xfc) != _DAT_100dd5f8) &&
     (*(float *)(param_3 + 0x100) != _DAT_100dd5f8)) {
    (*DAT_10122020)(param_1,DAT_10105130);
    (*DAT_10122020)(param_1,DAT_10105154);
    (*DAT_10122020)(param_1,DAT_10105178);
    (*DAT_10122020)(param_1,DAT_1010519c);
    (*DAT_10122020)(param_1,DAT_101051c0);
    (*DAT_10122020)(param_1,DAT_101051e4);
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

