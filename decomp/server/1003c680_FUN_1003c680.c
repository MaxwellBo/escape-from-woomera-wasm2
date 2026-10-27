
void __fastcall FUN_1003c680(int *param_1)

{
  uint *puVar1;
  
  if (param_1[0x30] == 1) {
    param_1[0x1d] = (int)FUN_1003c6e0;
    (**(code **)(*param_1 + 8))(0);
    return;
  }
  if (param_1[0x33] == 3) {
    puVar1 = (uint *)(*(int *)(param_1[0x37] + 4) + 0x1a0);
    *puVar1 = *puVar1 | 0x10000;
  }
  return;
}

