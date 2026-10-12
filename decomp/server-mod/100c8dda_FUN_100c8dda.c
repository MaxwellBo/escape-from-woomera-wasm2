
int * __cdecl FUN_100c8dda(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100f9600;
  puStack_10 = &LAB_100cf73c;
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
      if (DAT_10136208 == 3) {
        if (puVar2 <= DAT_10136200) {
          FUN_100cf6a6(9);
          local_8 = 0;
          local_24 = FUN_100ce219(puVar2);
          local_8 = 0xffffffff;
          FUN_100c8e73();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100c8ec7;
LAB_100c8eb6:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_100c8ec2:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10136208 != 2) || (DAT_101204cc < puVar3)) goto LAB_100c8ec2;
        FUN_100cf6a6(9);
        local_8 = 1;
        local_24 = FUN_100cf0de((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100c8efc();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100c8eb6;
      }
LAB_100c8ec7:
      local_24 = HeapAlloc(DAT_10136204,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10134a3c == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100cf83e(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}

