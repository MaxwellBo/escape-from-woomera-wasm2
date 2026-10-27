
void __fastcall FUN_10012050(int param_1)

{
  int iVar1;
  
  iVar1 = 0x100;
  do {
    *(int *)(param_1 + 0x10) = param_1;
    *(int *)(param_1 + 0x14) = param_1;
    param_1 = param_1 + 0x18;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

