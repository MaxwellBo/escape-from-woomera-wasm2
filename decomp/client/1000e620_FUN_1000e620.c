
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000e620(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10057821;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) && (ExceptionList = &pvStack_c, iVar2 = (*DAT_1007ef24)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if ((iVar2 == 0) || (iVar1 = _DAT_00000004, *(int *)(iVar2 + 0x7c) == 0)) {
    puVar3 = (undefined4 *)(*DAT_1007efcc)(iVar2,0x30c);
    uStack_4 = 0;
    iVar1 = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_100093c0(puVar3);
      *puVar3 = &PTR_FUN_1005d9d4;
      puVar3[1] = param_1;
      ExceptionList = pvStack_c;
      return;
    }
  }
  _DAT_00000004 = iVar1;
  ExceptionList = pvStack_c;
  return;
}

