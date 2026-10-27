
int __fastcall FUN_100965f0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_10019410((uint *)(param_1 + 0x308));
    if (iVar2 == 0) {
      iVar2 = param_1;
    }
    iVar4 = 0;
    iVar5 = 0;
    puVar6 = (uint *)(iVar2 + 0x310);
    do {
      iVar3 = iVar2;
      if (iVar5 < 4) {
        iVar3 = FUN_10019410(puVar6);
      }
      if (iVar3 != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar5 < 5);
    return iVar4;
  }
  return 0;
}

