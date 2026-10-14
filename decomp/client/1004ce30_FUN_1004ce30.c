
SIZE_T __cdecl FUN_1004ce30(undefined *param_1)

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
  puStack_c = &DAT_10065970;
  uStack_10 = 0x10051364;
  local_14 = ExceptionList;
  if (DAT_100bd050 == 3) {
    ExceptionList = &local_14;
    FUN_1004ca8b(9);
    local_8 = 0;
    local_20 = (byte *)FUN_1005018f((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1004ce9a();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100bd050 != 2) goto LAB_1004ceee;
    ExceptionList = &local_14;
    FUN_1004ca8b(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10050eea(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1004cf15();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_1004ceee:
  SVar2 = HeapSize(DAT_100bd04c,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

