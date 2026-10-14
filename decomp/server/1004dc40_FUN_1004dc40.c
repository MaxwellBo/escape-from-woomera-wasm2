
int __fastcall FUN_1004dc40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x300);
  if ((iVar2 == 0) &&
     ((iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x198), iVar1 == 0 ||
      (iVar2 = 0xc, (*(byte *)(iVar1 + 0x224) & 8) == 0)))) {
    iVar2 = 0xd;
  }
  return iVar2;
}

