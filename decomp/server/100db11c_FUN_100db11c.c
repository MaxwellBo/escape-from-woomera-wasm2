
void __fastcall FUN_100db11c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = FUN_100db243(*(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1));
  if (piVar1 == (int *)0x0) {
    uVar2 = *(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) | 2;
  }
  else {
    uVar2 = 0;
  }
  FUN_100db07b((void *)(*(int *)(*param_1 + 4) + (int)param_1),uVar2);
  return;
}

