
void FUN_1004d959(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100659e8;
  puStack_10 = &LAB_10051364;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1007be14 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1007be14)();
  }
  local_8 = 0xffffffff;
  FUN_1004d8f8();
  return;
}

