
int __fastcall FUN_10096910(void *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined3 extraout_var;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)FUN_10019410((uint *)((int)param_1 + 0x160));
  iVar3 = FUN_1005dca0(param_1,piVar2);
  bVar1 = FUN_10019450((uint *)((int)param_1 + 0x308));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pvVar4 = (void *)FUN_10019410((uint *)((int)param_1 + 0x308));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = param_1;
    }
    iVar5 = FUN_10019410((uint *)((int)pvVar4 + 0x160));
    iVar6 = FUN_10019410((uint *)((int)param_1 + 0x160));
    if (iVar6 == iVar5) {
      if (iVar3 != 0) {
        FUN_10096460((int)param_1);
        return iVar3;
      }
      FUN_100964a0((int)param_1);
    }
  }
  return iVar3;
}

