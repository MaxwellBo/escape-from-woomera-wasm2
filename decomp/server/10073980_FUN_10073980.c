
int __fastcall FUN_10073980(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 200);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0), (uVar1 & 0x8000) == 0)) ||
     ((uVar1 & 4) == 0)) {
    iVar2 = *(int *)(param_1 + 0xc4);
  }
  return iVar2;
}

