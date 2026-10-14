
int FUN_100164d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    if ((9 < param_2) || (4 < param_1)) {
      return 0;
    }
    iVar1 = (&DAT_100a37ac)[param_2 + param_1 * 0xb];
    if ((iVar1 != 0) && (iVar2 = FUN_10015ed0(&DAT_100a0ea8,iVar1), iVar2 != 0)) break;
    param_2 = param_2 + 1;
  }
  return iVar1;
}

