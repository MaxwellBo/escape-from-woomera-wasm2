
void __fastcall FUN_10033e50(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0xc4)) {
    do {
      iVar1 = FUN_10033de0(param_1,iVar2);
      FUN_10033d70(param_1,iVar2,iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0xc4));
  }
  return;
}

