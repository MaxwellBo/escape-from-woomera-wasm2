
void FUN_100bcd30(uint param_1)

{
  uint uVar1;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_100dc5f0;
  pvStack_10 = ExceptionList;
  uVar1 = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  local_8 = 0;
  uVar1 = uVar1 + 2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(uVar1);
  FUN_100bcdb6();
  return;
}

