
int __fastcall FUN_10034690(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != param_1 + 0xbc; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

