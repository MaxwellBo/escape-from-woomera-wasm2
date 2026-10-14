
byte __fastcall FUN_10045d90(int param_1)

{
  byte bVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    bVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
    return bVar1 & 2 | 8;
  }
  return 10;
}

