
uint __fastcall FUN_10002a80(int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
    return uVar1 & 2;
  }
  return 2;
}

