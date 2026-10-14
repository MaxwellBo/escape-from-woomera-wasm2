
uint __fastcall FUN_1005d250(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_1005cb70(param_1);
  if (iVar1 == 0) {
    uVar3 = 0x40;
  }
  if ((*(int *)(param_1 + 0x1d8) == 6) && (*(int **)(param_1 + 0x2fc) != (int *)0x0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d4))();
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}

