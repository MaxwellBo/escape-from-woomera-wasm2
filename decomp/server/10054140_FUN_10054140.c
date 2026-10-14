
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10054140(CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_10054be0((int)param_1);
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x20) != 0)) {
      (**(code **)(*(int *)param_1 + 0x184))(0x13);
      return;
    }
    if ((*(byte *)(iVar2 + 0xc) & 1) != 0) {
      *(uint *)(param_1 + 0x2a0) = *(uint *)(param_1 + 0x2a0) | 1;
    }
  }
  if ((((*(int *)(param_1 + 0x1d8) == 2) &&
       (uVar1 = *(uint *)(param_1 + 0x15c), (uVar1 & 0x100000) == 0)) &&
      ((*(float *)(*(int *)(param_1 + 4) + 0x160) < _DAT_100ddacc || (*(int *)(param_1 + 0x340) < 0)
       ))) && ((uVar1 & 0x800) == 0)) {
    *(undefined4 *)(param_1 + 0x2d4) = 0xc;
    if ((uVar1 & 0x300) != 0) {
      (**(code **)(*(int *)param_1 + 0x184))(0x12);
      return;
    }
    if (((uVar1 & 0x10) != 0) && ((uVar1 & 0x80000) != 0)) {
      (**(code **)(*(int *)param_1 + 0x184))(0x12);
      return;
    }
  }
  FUN_10006c50(param_1);
  return;
}

