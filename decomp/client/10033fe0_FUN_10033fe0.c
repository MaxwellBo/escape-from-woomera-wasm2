
int __fastcall FUN_10033fe0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (0 < iVar1) {
    return *(int *)(*(int *)(param_1 + 0xdc) + -4 + iVar1 * 4) +
           *(int *)(*(int *)(param_1 + 0xd4) + -4 + iVar1 * 4) + *(int *)(param_1 + 0xcc);
  }
  return 0;
}

