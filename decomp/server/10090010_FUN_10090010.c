
undefined4 __fastcall FUN_10090010(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = FUN_10019410((uint *)(param_1 + 0x168));
    if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x170) == 0)) {
      return 1;
    }
  }
  return 0;
}

