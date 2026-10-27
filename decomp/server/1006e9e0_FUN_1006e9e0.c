
undefined4 __fastcall FUN_1006e9e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 400) < 1) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 400) + -1;
  *(int *)(param_1 + 400) = iVar1;
  return *(undefined4 *)(param_1 + iVar1 * 4);
}

