
void __fastcall FUN_100dba38(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  void *this;
  void *extraout_ECX_00;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_100db550((LPCRITICAL_SECTION)(iVar1 + 0x34));
  }
  uVar2 = FUN_100dbc64(*(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1));
  this = extraout_ECX;
  while (uVar2 != 0xffffffff) {
    uVar2 = FUN_100c862b(this,uVar2);
    if (uVar2 == 0) goto LAB_100dba96;
    uVar2 = FUN_100dbba8(*(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1));
    this = extraout_ECX_00;
  }
  FUN_100db07b((void *)(*(int *)(*param_1 + 4) + (int)param_1),
               *(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) | 1);
LAB_100dba96:
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_100db55b((LPCRITICAL_SECTION)(iVar1 + 0x34));
  }
  return;
}

