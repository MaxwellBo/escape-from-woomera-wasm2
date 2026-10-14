
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10079b50(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x17c) != 0) && (*(int *)(param_1 + 0x180) != 0)) {
    if (*(int *)(param_1 + 0x198) == 0) {
      iVar3 = FUN_10073950(*(int *)(param_1 + 0x17c));
      iVar4 = *(int *)(param_1 + 0x180);
    }
    else {
      iVar3 = FUN_10073950(*(int *)(param_1 + 0x180));
      iVar4 = *(int *)(param_1 + 0x17c);
    }
    iVar4 = FUN_10073950(iVar4);
    if ((((iVar3 != 0) &&
         (*(uint *)(*(int *)(iVar3 + 4) + 0x1a0) =
               *(uint *)(*(int *)(iVar3 + 4) + 0x1a0) & 0xfffffffe, *(int *)(param_1 + 0x194) == 2))
        && (piVar2 = *(int **)(param_1 + 0x184), piVar2 != (int *)0x0)) &&
       (*(float *)(piVar2[1] + 0x1f8) == _DAT_100dd5f8)) {
      (**(code **)(*piVar2 + 0xe4))(param_1,param_1,1,0);
    }
    if (iVar4 != 0) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a0);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}

