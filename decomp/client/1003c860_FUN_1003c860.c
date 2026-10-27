
void __fastcall FUN_1003c860(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int **)(param_1 + 0x884) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x884) + 0x28))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x884) + 0x24))(0);
      FUN_1003dcc0(param_1);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x884) + 0x24))(1);
    FUN_1003dcc0(param_1);
  }
  return;
}

