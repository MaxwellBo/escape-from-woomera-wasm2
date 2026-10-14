
void __fastcall FUN_10002c20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x308);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x30c);
    FUN_10002aa0(iVar2);
    iVar2 = iVar1;
  }
  return;
}

