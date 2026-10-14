
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1008e410(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar4;
  undefined4 uVar5;
  undefined3 extraout_var_01;
  
  iVar3 = param_1[0x76];
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      piVar4 = (int *)FUN_10019410((uint *)(param_1 + 0x58));
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 0xb8))();
        if ((iVar3 == 0) || (_DAT_100dd5d4 < *DAT_10122044 - (float)param_1[0xe3])) {
          param_1[0x77] = 3;
          FUN_10019420(param_1 + 0x58,0);
          return param_1[0x77];
        }
        bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
        if (CONCAT31(extraout_var,bVar2) != 0) {
          param_1[0x77] = 3;
          return 3;
        }
        if ((*(byte *)(param_1 + 0x57) & 0x10) != 0) {
          fVar1 = *DAT_10122044;
          param_1[0x77] = 2;
          param_1[0xe3] = (int)fVar1;
          return 2;
        }
      }
      goto LAB_1008e574;
    }
    if (iVar3 != 3) {
      iVar3 = FUN_10062180(param_1);
      return iVar3;
    }
  }
  if ((param_1[0x57] & 0x10000U) == 0) {
    if ((param_1[0x57] & 0x300U) == 0) goto LAB_1008e574;
    bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
    if (CONCAT31(extraout_var_01,bVar2) == 0) goto LAB_1008e574;
    piVar4 = (int *)FUN_10019460((uint *)(param_1 + 0x5a));
    iVar3 = (**(code **)(*piVar4 + 0xcc))();
    if (iVar3 == 0) goto LAB_1008e574;
  }
  else {
    bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
    if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_1008e574;
    piVar4 = (int *)FUN_10019460((uint *)(param_1 + 0x5a));
    iVar3 = (**(code **)(*piVar4 + 0xcc))();
    if (iVar3 == 0) goto LAB_1008e574;
    iVar3 = *param_1;
    uVar5 = FUN_10019410((uint *)(param_1 + 0x58));
    iVar3 = (**(code **)(iVar3 + 0x130))(uVar5);
    if ((iVar3 != -1) || ((param_1[0x57] & 0x300U) == 0)) {
      param_1[0x77] = 3;
      return 3;
    }
  }
  (**(code **)(*param_1 + 0x228))(1);
LAB_1008e574:
  iVar3 = FUN_10062180(param_1);
  return iVar3;
}

