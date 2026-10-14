
int __fastcall FUN_10006c30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((-1 < iVar1) && (iVar1 < (*(int **)(param_1 + 0x1e4))[1])) {
    return **(int **)(param_1 + 0x1e4) + iVar1 * 8;
  }
  return 0;
}

