
void __fastcall FUN_1003d490(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xaa0);
  while (iVar1 != 0) {
    FUN_1003d4b0(param_1);
    iVar1 = *(int *)(param_1 + 0xaa0);
  }
  return;
}

