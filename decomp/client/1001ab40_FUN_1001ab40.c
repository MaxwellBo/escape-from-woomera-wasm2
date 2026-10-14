
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001ab40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  *(uint *)((int)this + 0x30) = uVar1;
  *(float *)((int)this + 0x2c) = (float)(int)uVar1 * (float)_DAT_1005ac78;
  return 1;
}

