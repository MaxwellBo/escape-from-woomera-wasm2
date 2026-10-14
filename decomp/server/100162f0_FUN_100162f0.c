
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_100162f0(int param_1)

{
  uint uVar1;
  
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == _DAT_100dd5f8) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
  }
  return (*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x10) << 4 | uVar1;
}

