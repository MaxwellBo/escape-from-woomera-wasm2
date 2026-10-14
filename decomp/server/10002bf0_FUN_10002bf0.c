
int __fastcall FUN_10002bf0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x308); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

