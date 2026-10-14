
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1004a320(int param_1,float param_2,int *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x160));
  piVar2 = param_3;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x160));
    piVar2 = (int *)(**(code **)(*piVar2 + 0x74))();
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  if (((((float)param_3 <= _DAT_100ddb10) && ((float)_DAT_100df298 <= param_2)) &&
      (iVar3 = (**(code **)(*piVar2 + 0x4c))(), iVar3 != 0xd)) &&
     (iVar3 = (**(code **)(*piVar2 + 0x4c))(), iVar3 != 0xc)) {
    return 1;
  }
  return 0;
}

