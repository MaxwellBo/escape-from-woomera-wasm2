
int * __cdecl FUN_10053a99(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10065dc8;
  uStack_10 = 0x10051364;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_100bd050 == 3) {
        if (puVar2 <= DAT_100bd048) {
          FUN_1004ca8b(9);
          local_8 = 0;
          local_24 = FUN_100504e3(puVar2);
          local_8 = 0xffffffff;
          FUN_10053b32();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10053b86;
LAB_10053b75:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10053b81:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_100bd050 != 2) || (DAT_1007e3ec < puVar3)) goto LAB_10053b81;
        FUN_1004ca8b(9);
        local_8 = 1;
        local_24 = FUN_10050f86((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10053bbb();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10053b75;
      }
LAB_10053b86:
      local_24 = HeapAlloc(DAT_100bd04c,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100bcae8 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1005143c(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}

