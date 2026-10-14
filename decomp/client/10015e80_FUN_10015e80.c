
void __fastcall FUN_10015e80(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_10015f40(param_1);
    }
    param_1 = param_1 + 0x148;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

