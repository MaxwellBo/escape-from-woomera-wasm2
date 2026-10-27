
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1009d7d0(float param_1)

{
  undefined4 uVar1;
  
  if (param_1 < _DAT_100f26a8) {
    return 0;
  }
  if (param_1 < _DAT_100f26a4) {
    return 1;
  }
  uVar1 = 2;
  if (_DAT_100ed280 <= param_1) {
    uVar1 = 3;
  }
  return uVar1;
}

