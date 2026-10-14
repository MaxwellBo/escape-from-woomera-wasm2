
bool FUN_10064c50(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x128))();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int **)(param_1 + 0x528) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x528) + 0x130))();
  if (iVar1 == 0) {
    return false;
  }
  return *(int *)(&DAT_10131e40 + *(int *)(*(int *)(param_1 + 0x528) + 0xe4) * 0x2c) <
         *(int *)(&DAT_10131e40 + param_2[0x39] * 0x2c);
}

