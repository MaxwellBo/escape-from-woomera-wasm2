
undefined4 __fastcall FUN_1004f7b0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_10019410((uint *)(param_1 + 0x308));
    if (iVar2 == 0) {
      iVar2 = param_1;
    }
    iVar4 = 0;
    puVar5 = (uint *)(iVar2 + 0x310);
    do {
      iVar3 = iVar2;
      if (iVar4 < 4) {
        iVar3 = FUN_10019410(puVar5);
      }
      if (((iVar3 != 0) && (iVar3 != param_1)) && (*(int *)(iVar3 + 0x29c) != -1)) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < 5);
  }
  return 1;
}

