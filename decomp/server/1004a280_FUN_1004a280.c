
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a280(int param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  
  puVar1 = (uint *)(param_1 + 0x308);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    bVar2 = FUN_10019450((uint *)(param_1 + 0x160));
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      if ((*(byte *)(param_1 + 0x15c) & 0x10) != 0) {
        iVar3 = FUN_10019410(puVar1);
        if (iVar3 == 0) {
          iVar3 = param_1;
        }
        *(float *)(iVar3 + 0x334) = *DAT_10122044;
        return;
      }
      iVar3 = FUN_10019410(puVar1);
      if (iVar3 == 0) {
        iVar3 = param_1;
      }
      if (_DAT_100dd5d8 < *DAT_10122044 - *(float *)(iVar3 + 0x334)) {
        iVar3 = FUN_10019410(puVar1);
        if (iVar3 == 0) {
          iVar3 = param_1;
        }
        *(undefined4 *)(iVar3 + 0x338) = 1;
      }
    }
  }
  return;
}

