
SIZE_T __cdecl FUN_100cb82c(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100f9700;
  uStack_10 = 0x100cf73c;
  local_14 = ExceptionList;
  if (DAT_10136208 == 3) {
    ExceptionList = &local_14;
    FUN_100cf6a6(9);
    local_8 = 0;
    local_20 = (byte *)FUN_100cdec5((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100cb896();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10136208 != 2) goto LAB_100cb8ea;
    ExceptionList = &local_14;
    FUN_100cf6a6(9);
    local_8 = 1;
    local_2c = (byte *)FUN_100cf042(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100cb911();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_100cb8ea:
  SVar2 = HeapSize(DAT_10136204,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

