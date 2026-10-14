
void __fastcall FUN_1003ca30(int param_1)

{
  undefined *puVar1;
  
  if ((DAT_100a4fe4 == 0) && (*(int **)(param_1 + 0xaac) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xaac) + 0x24))(0);
    puVar1 = FUN_10012170();
    FUN_100133b0((int)puVar1);
    FUN_1003dcc0(param_1);
  }
  return;
}

