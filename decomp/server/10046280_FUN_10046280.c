
uint __fastcall FUN_10046280(int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
    return uVar1 & 2 | 0x80000008;
  }
  return 0x8000000a;
}

