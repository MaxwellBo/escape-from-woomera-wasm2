
void __cdecl FUN_1004ad7e(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10065838;
  uStack_10 = 0x10051364;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_100bd050 == 3) {
    ExceptionList = &local_14;
    FUN_1004ca8b(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1005018f((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100501ba(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1004ade8();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100bd050 != 2) goto LAB_1004ae4a;
    ExceptionList = &local_14;
    FUN_1004ca8b(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10050eea(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10050f41(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1004ae40();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1004ae4a:
  HeapFree(DAT_100bd04c,0,param_1);
  ExceptionList = local_14;
  return;
}

