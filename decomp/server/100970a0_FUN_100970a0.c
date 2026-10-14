
int __fastcall FUN_100970a0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x300);
  if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0x338), iVar3 == 0)) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(param_1 + 0x338) = 10;
      piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x160));
      iVar3 = (**(code **)(*piVar2 + 0x4c))();
      if ((1 < iVar3) && (iVar3 < 5)) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        return 5;
      }
      *(undefined4 *)(param_1 + 0x338) = 0;
    }
    iVar3 = 0xd;
  }
  return iVar3;
}

