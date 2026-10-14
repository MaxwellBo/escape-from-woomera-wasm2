
int __fastcall FUN_100db9d4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar2 + 0x30) < 0) {
    FUN_100db550((LPCRITICAL_SECTION)(iVar2 + 0x34));
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1) + 4))();
  if (iVar2 == -1) {
    FUN_100db07b((void *)(*(int *)(*param_1 + 4) + (int)param_1),
                 *(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) | 6);
  }
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_100db55b((LPCRITICAL_SECTION)(iVar1 + 0x34));
  }
  return iVar2;
}

