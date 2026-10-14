
undefined4 __fastcall FUN_1002b7d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x8000) != 0) {
    uVar1 = 0x80000000;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
    return uVar1;
  }
  return uVar1;
}

