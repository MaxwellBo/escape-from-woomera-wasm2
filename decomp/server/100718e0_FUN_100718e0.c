
undefined4 __fastcall FUN_100718e0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x378)) {
    puVar5 = (uint *)(param_1 + 0x37c);
    puVar6 = (undefined4 *)(param_1 + 0x43c);
    do {
      bVar1 = FUN_10019450(puVar5);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 1;
      }
      piVar2 = (int *)FUN_10019460(puVar5);
      iVar3 = (**(code **)(*piVar2 + 0xb8))();
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = FUN_10019460(puVar5);
      iVar3 = *(int *)(iVar3 + 4);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
      *puVar6 = *(undefined4 *)(iVar3 + 8);
      puVar6[1] = *(undefined4 *)(iVar3 + 0xc);
      puVar6[2] = *(undefined4 *)(iVar3 + 0x10);
      puVar6 = puVar6 + 3;
    } while (iVar4 < *(int *)(param_1 + 0x378));
  }
  return 0;
}

