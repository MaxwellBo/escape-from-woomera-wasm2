
void FUN_100d171c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100f9888;
  uStack_10 = 0x100cf73c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100cad28();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100cad28();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100d5d45();
  return;
}

