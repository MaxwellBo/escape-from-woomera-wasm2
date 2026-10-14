
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1009b210(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  if (((((param_1[0x76] != 5) && (param_1[0x77] != 5)) && (*(int *)(param_1[1] + 0x170) == 0)) &&
      ((_DAT_10131064 < *DAT_10122044 && ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0)))) &&
     ((iVar2 = (**(code **)(*param_1 + 0xb8))(), iVar2 != 0 &&
      ((iVar2 = (*DAT_10121e4c)(*(undefined4 *)(param_1[1] + 0x208)), iVar2 != 0 &&
       (iVar2 = (*DAT_10121f20)(iVar2), iVar2 != 0)))))) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = *param_1;
      uVar3 = FUN_10019410((uint *)(param_1 + 0x58));
      iVar2 = (**(code **)(iVar2 + 0x110))(uVar3);
      if (iVar2 != 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

