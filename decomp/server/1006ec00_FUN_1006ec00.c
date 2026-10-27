
void __fastcall FUN_1006ec00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1 + -1;
  while ((iVar3 != 0 &&
         (iVar4 = (iVar3 + -1) / 2, (float)param_1[iVar3 * 2 + 2] < (float)param_1[iVar4 * 2 + 2])))
  {
    iVar1 = param_1[iVar3 * 2 + 1];
    iVar2 = param_1[iVar3 * 2 + 2];
    param_1[iVar3 * 2 + 1] = param_1[iVar4 * 2 + 1];
    param_1[iVar3 * 2 + 2] = param_1[iVar4 * 2 + 2];
    param_1[iVar4 * 2 + 1] = iVar1;
    param_1[iVar4 * 2 + 2] = iVar2;
    iVar3 = iVar4;
  }
  return;
}

