
void __fastcall FUN_10021b30(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_100a5150)();
  if (((iVar1 == 1) && ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x14) == 5)))) &&
     ((*(int *)(param_1 + 0x1c) != 1 || (*(int *)(param_1 + 0x18) == 3)))) {
    FUN_10020de0(param_1);
    FUN_100212b0(param_1);
    FUN_10021b70(param_1);
  }
  return;
}

