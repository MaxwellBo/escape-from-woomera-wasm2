
int FUN_100539e5(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1004d8f8();
    return iVar3;
  }
  if ((DAT_100bcc30 != (FARPROC)0x0) &&
     (bVar2 = FUN_10053a81(DAT_100bcc30), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_100bcc30)(param_1);
    return iVar3;
  }
  return 0;
}

