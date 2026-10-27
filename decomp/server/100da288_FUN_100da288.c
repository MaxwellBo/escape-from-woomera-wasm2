
uint __fastcall FUN_100da288(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_100db775(param_1,1);
  if (iVar2 != 0) {
    uVar3 = FUN_100dbbf4(*(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1));
    if (uVar3 == 0xffffffff) {
      puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
      *puVar1 = *puVar1 | 1;
    }
    else {
      param_1[2] = param_1[2] + 1;
    }
    FUN_100da2d0(param_1);
    return uVar3;
  }
  return 0xffffffff;
}

