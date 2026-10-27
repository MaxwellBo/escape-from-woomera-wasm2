
undefined4 __thiscall FUN_10058ad0(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (uint *)(param_1 + 0xbc);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar3 = FUN_10019460(puVar1);
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x208);
    iVar3 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
    iVar4 = (*DAT_10121f20)(uVar5);
    if (iVar4 <= iVar3) {
      return 0;
    }
  }
  uVar5 = FUN_10019410(puVar1);
  return uVar5;
}

