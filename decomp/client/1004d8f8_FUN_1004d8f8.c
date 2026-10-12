
void FUN_1004d8f8(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100659d0;
  puStack_10 = &LAB_10051364;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1004d7f1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1004d7f1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10053bd6();
  return;
}

