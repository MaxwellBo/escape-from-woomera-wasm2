
int __fastcall FUN_10037de0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 200) == 0) {
    iVar1 = (*DAT_10121f70)(0,2);
    return iVar1 + 0x19;
  }
  if (*(int *)(param_1 + 200) == 7) {
    return 0x23;
  }
  iVar1 = FUN_1001a1c0(param_1);
  return iVar1;
}

