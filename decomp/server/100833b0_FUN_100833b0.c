
void __fastcall FUN_100833b0(int *param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1[1] + 0x1cc) == 0) {
    puVar1 = (uint *)(param_1[1] + 0x1a0);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    (**(code **)(*param_1 + 8))(0x40000000);
  }
  return;
}

