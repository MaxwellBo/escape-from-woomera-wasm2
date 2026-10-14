
undefined4 __fastcall FUN_10017a70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
  }
  uVar1 = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    uVar1 = 0x10;
  }
  return uVar1;
}

