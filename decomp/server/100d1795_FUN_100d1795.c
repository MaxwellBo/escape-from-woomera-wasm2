
void FUN_100d1795(void)

{
  void *pvStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100f98a0;
  uStack_10 = 0x100cf73c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10120970 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10120970)();
  }
  local_8 = 0xffffffff;
  FUN_100d171c();
  return;
}

