
int FUN_10069bd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_100aec40(0,param_1);
  if (iVar1 != 0) {
    iVar4 = -1;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = (*DAT_10121f70)(0,iVar4);
      if (iVar2 < 1) {
        iVar3 = iVar1;
      }
      iVar1 = FUN_100aec40(iVar1,param_1);
    } while (iVar1 != 0);
    return iVar3;
  }
  return 0;
}

