
void * __cdecl FUN_100ca0f6(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100f9618;
  uStack_10 = 0x100cf73c;
  local_14 = ExceptionList;
  if (DAT_10136208 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10136200) {
      ExceptionList = &local_14;
      FUN_100cf6a6(9);
      local_8 = 0;
      piVar1 = FUN_100ce219(param_1);
      local_8 = 0xffffffff;
      FUN_100ca15d();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return piVar1;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10136208 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_101204cc) {
        ExceptionList = &local_14;
        FUN_100cf6a6(9);
        local_8 = 1;
        piVar1 = FUN_100cf0de(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100ca1bc();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return piVar1;
        }
      }
      goto LAB_100ca1d5;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100ca1d5:
  piVar1 = (int *)HeapAlloc(DAT_10136204,0,dwBytes);
  ExceptionList = local_14;
  return piVar1;
}

