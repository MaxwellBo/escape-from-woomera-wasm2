
void __fastcall FUN_1003d4b0(int param_1)

{
  if (*(int **)(param_1 + 0xaa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xaa0) + 0x204))();
    FUN_1003ce70(DAT_100a5178,*(int *)(*(int *)(param_1 + 0xaa0) + 0xc0));
  }
  FUN_1003dcc0(param_1);
  return;
}

