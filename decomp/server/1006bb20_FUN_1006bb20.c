
undefined4 FUN_1006bb20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x108) != 5) {
    return 1;
  }
  if ((*(int *)(iVar1 + 0x1c0) != 0) && (*(int *)(iVar1 + 0x1c4) != -0x13)) {
    return 4;
  }
  return 2;
}

