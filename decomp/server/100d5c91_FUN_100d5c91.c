
int FUN_100d5c91(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_100d171c();
    return iVar3;
  }
  if ((DAT_10134bf4 != (FARPROC)0x0) &&
     (bVar2 = FUN_100d5d2d(DAT_10134bf4), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10134bf4)(param_1);
    return iVar3;
  }
  return 0;
}

