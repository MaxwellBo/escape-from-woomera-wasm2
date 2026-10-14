
void __cdecl FUN_100c8cf1(undefined *param_1)

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
  puStack_c = &DAT_100f95e8;
  uStack_10 = 0x100cf73c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10136208 == 3) {
    ExceptionList = &local_14;
    FUN_100cf6a6(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100cdec5((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100cdef0(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100c8d5b();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10136208 != 2) goto LAB_100c8dbd;
    ExceptionList = &local_14;
    FUN_100cf6a6(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100cf042(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_100cf099(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_100c8db3();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_100c8dbd:
  HeapFree(DAT_10136204,0,param_1);
  ExceptionList = local_14;
  return;
}

