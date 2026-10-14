
/* WARNING: Removing unreachable block (ram,0x10061d60) */

bool __fastcall FUN_10061cb0(int *param_1)

{
  uint *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar4;
  
  if ((param_1[0x57] & 0x40000aU) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x144))();
    this = (uint *)(param_1 + 0x58);
    iVar3 = FUN_10019410(this);
    if (((iVar2 != iVar3) && (iVar2 != 0)) && (param_1[0x79] != 0)) {
      if ((*(uint *)(param_1[0x79] + 8) & 0x10000) != 0) {
        piVar4 = param_1 + 0xaa;
        iVar3 = FUN_10019410(this);
        FUN_1005e010(param_1,iVar3,piVar4);
        param_1[0x57] = param_1[0x57] | 0x10000;
        FUN_10019420(this,iVar2);
        iVar3 = FUN_10019460(this);
        iVar3 = *(int *)(iVar3 + 4);
        param_1[0xaa] = *(int *)(iVar3 + 8);
        param_1[0xab] = *(int *)(iVar3 + 0xc);
        param_1[0xac] = *(int *)(iVar3 + 0x10);
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x198);
      if (((iVar2 != 0) && (piVar4 = *(int **)(iVar2 + 0x7c), piVar4 != (int *)0x0)) &&
         ((iVar2 = (**(code **)(*piVar4 + 0x74))(), iVar2 != 0 &&
          (((*(byte *)(*(int *)(iVar2 + 4) + 0x1a4) & 0x20) != 0 &&
           (iVar3 = (**(code **)(*param_1 + 0x130))(iVar2), iVar3 != 0)))))) {
        FUN_1005e010(param_1,iVar2,param_1 + 0xaa);
      }
    }
  }
  bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
  if ((((CONCAT31(extraout_var,bVar1) == 0) && (iVar2 = FUN_1005e090((int)param_1), iVar2 != 0)) &&
      (param_1[0x79] != 0)) && ((*(uint *)(param_1[0x79] + 8) & 0x10000) != 0)) {
    param_1[0x57] = param_1[0x57] | 0x10000;
  }
  bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
  return CONCAT31(extraout_var_00,bVar1) != 0;
}

