
bool FUN_10091fb0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x528) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x528) + 0x130))();
  return iVar1 != 0;
}

