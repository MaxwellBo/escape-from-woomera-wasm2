
int __fastcall FUN_10034880(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x364);
  if (iVar1 < 0) {
    iVar1 = FUN_10034690(param_1);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

