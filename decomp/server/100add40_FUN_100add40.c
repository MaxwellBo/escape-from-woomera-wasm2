
int __fastcall FUN_100add40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x300);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x330) == 0) && (*(int *)(param_1 + 0x338) == 0)) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}

