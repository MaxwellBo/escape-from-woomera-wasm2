
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000da40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (iVar2 = (*DAT_1007ef24)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = _DAT_00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_1007efcc)(iVar2,0xb8), iVar1 = param_1,
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_FUN_1005d8a8;
    puVar3[1] = param_1;
    return;
  }
  _DAT_00000004 = iVar1;
  return;
}

