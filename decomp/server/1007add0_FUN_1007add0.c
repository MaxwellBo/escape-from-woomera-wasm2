
void __fastcall FUN_1007add0(int *param_1)

{
  if (param_1[0x34] == 0) {
    if (param_1[0x35] == 0) {
      (*DAT_10121efc)(4,s_scripted_trainsequence__ArrivalN_10114464);
    }
  }
  else if (*(int *)(param_1[0x34] + 0x168) == *(int *)(param_1[0x36] + 4)) {
    FUN_1007ae70(param_1);
    FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),param_1,
                 param_1,3,0);
    return;
  }
  return;
}

