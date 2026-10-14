
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100045c0(int param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((((*(byte *)(param_1 + 0x15c) & 0x10) != 0) && (param_3 <= _DAT_100dd61c)) &&
     ((float)_DAT_100ddad8 <= param_2)) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 1;
    }
  }
  return 0;
}

