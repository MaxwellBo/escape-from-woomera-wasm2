
undefined4 __cdecl
FUN_1001d630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_10026030(param_4,param_3);
  uVar1 = FUN_10026090();
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (uVar1 != 0) {
    FUN_1002c6b0((void *)(param_1 + 0x604),(byte *)s_dmg_concuss_100787a4,0xff,0xa0,0);
    return 1;
  }
  FUN_1002c7d0((void *)(param_1 + 0x604),(byte *)s_dmg_concuss_100787a4);
  return 1;
}

