
void __fastcall FUN_1003dc80(int param_1)

{
  if (*(int **)(param_1 + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa4) + 0x210))();
  }
  if (*(int **)(param_1 + 0xaa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa8) + 0x210))();
  }
  if (*(int **)(param_1 + 0xaac) != (int *)0x0) {
    FUN_10036510(*(int **)(param_1 + 0xaac));
    return;
  }
  return;
}

