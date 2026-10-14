
undefined4 __fastcall FUN_10026d10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x100) != 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))();
    }
    return CONCAT31((uint3)(-(uint)(*(int *)(param_1 + 400) != 0) >> 8) & 1,8);
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x3c))();
  return 0;
}

