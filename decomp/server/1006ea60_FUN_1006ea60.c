
void __thiscall FUN_1006ea60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*param_1 == 100) {
    FUN_100c9014((byte *)s_Queue_is_full__101130ec);
    return;
  }
  iVar1 = param_1[0xca];
  param_1[0xca] = iVar1 + 1;
  if (iVar1 + 1 == 100) {
    param_1[0xca] = 0;
  }
  param_1[param_1[0xca] * 2 + 1] = param_2;
  param_1[param_1[0xca] * 2 + 2] = param_3;
  *param_1 = *param_1 + 1;
  return;
}

