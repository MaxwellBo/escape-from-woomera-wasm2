
undefined4 __fastcall FUN_10068ea0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (uint *)(param_1 + 0x388);
  do {
    bVar1 = FUN_10019450(puVar2);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      puVar2 = (uint *)(param_1 + 0x388 + iVar3 * 8);
      iVar3 = FUN_10019410(puVar2);
      FUN_1006a750(iVar3);
      FUN_10019420(puVar2,0);
      *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + -1;
      return 1;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 0x14);
  return 0;
}

