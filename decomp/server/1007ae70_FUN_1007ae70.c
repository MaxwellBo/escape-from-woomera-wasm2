
void __fastcall FUN_1007ae70(int *param_1)

{
  if ((int *)param_1[0x34] == (int *)0x0) {
    if (param_1[0x35] == 0) {
      (*DAT_10121efc)(4,s_scripted_trainsequence__StopSequ_101144a0);
      return;
    }
  }
  else {
    FUN_100765f0((int *)param_1[0x34]);
    param_1[0x34] = 0;
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
      FUN_100b0ef0((int)param_1);
    }
  }
  FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x30]),param_1,param_1,3,0);
  return;
}

