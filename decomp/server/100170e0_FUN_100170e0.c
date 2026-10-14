
undefined4 __fastcall FUN_100170e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    if (iVar1 != 0) {
      return 1;
    }
    if ((((*(int *)(param_1 + 0x15c) != 0) ||
         ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0)) &&
        ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0)) &&
       (*(int *)(param_1 + 0x15c) == 0)) {
      return 2;
    }
  }
  return 0;
}

