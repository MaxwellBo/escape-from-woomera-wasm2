
undefined4 __fastcall FUN_10096e20(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  undefined3 extraout_var_00;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_10019410((uint *)(param_1 + 0x308));
    if (iVar2 == 0) {
      iVar2 = param_1;
    }
    iVar3 = FUN_10019410((uint *)(iVar2 + 0x160));
    iVar6 = 0;
    puVar5 = (uint *)(iVar2 + 0x310);
    do {
      iVar4 = iVar2;
      if (iVar6 < 4) {
        iVar4 = FUN_10019410(puVar5);
      }
      if (iVar4 != 0) {
        bVar1 = FUN_10019450((uint *)(iVar4 + 0x160));
        if ((CONCAT31(extraout_var_00,bVar1) != 0) &&
           (iVar4 = FUN_10019410((uint *)(iVar4 + 0x160)), iVar4 != iVar3)) {
          return 1;
        }
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 5);
  }
  return 0;
}

