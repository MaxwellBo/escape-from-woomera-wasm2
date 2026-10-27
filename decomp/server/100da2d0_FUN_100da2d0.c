
void __fastcall FUN_100da2d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_100db55b((LPCRITICAL_SECTION)(iVar1 + 0x34));
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_100db55b((LPCRITICAL_SECTION)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
  }
  return;
}

