
undefined4 FUN_100d12a9(undefined4 *param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *pvStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  puStack_c = &DAT_100f9888;
  uStack_10 = 0x100cf73c;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100cad28();
  if (pDVar1[0x18] != 0) {
    uStack_8 = 1;
    pDVar1 = FUN_100cad28();
    (*(code *)pDVar1[0x18])();
  }
  uStack_8 = 0xffffffff;
  uVar2 = FUN_100d5d45();
  return uVar2;
}

