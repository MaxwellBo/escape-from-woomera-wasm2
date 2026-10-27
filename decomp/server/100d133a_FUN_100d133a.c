
undefined4 __cdecl
FUN_100d133a(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100f9850;
  uStack_10 = 0x100cf73c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100cad28();
  FUN_100cad28();
  pDVar1 = FUN_100cad28();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100cad28();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_100c9c6d(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100d1407();
  ExceptionList = local_14;
  return uVar2;
}

