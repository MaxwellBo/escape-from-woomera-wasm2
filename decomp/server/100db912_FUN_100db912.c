
int __fastcall FUN_100db912(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100db775(param_1,1);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_100dbc64(*(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1));
    FUN_100da2d0(param_1);
  }
  return iVar1;
}

