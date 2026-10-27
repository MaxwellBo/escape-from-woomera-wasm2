
void * __cdecl FUN_1004aee6(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10065850;
  uStack_10 = 0x10051364;
  local_14 = ExceptionList;
  if (DAT_100bd050 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_100bd048) {
      ExceptionList = &local_14;
      FUN_1004ca8b(9);
      local_8 = 0;
      piVar1 = FUN_100504e3(param_1);
      local_8 = 0xffffffff;
      FUN_1004af4d();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return piVar1;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100bd050 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1007e3ec) {
        ExceptionList = &local_14;
        FUN_1004ca8b(9);
        local_8 = 1;
        piVar1 = FUN_10050f86(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1004afac();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return piVar1;
        }
      }
      goto LAB_1004afc5;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1004afc5:
  piVar1 = (int *)HeapAlloc(DAT_100bd04c,0,dwBytes);
  ExceptionList = local_14;
  return piVar1;
}

