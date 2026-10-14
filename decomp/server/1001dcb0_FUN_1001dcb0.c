
undefined4 __fastcall FUN_1001dcb0(int param_1)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
    return 0x80000000;
  }
  return 0x80000000;
}

