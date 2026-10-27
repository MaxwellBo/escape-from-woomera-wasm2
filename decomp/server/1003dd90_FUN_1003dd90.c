
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1003dd90(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  (*DAT_10121ea4)(s_exec_game_cfg_1010cbd4);
  (*DAT_10121ea8)();
  if (*(float *)(DAT_10122044 + 0x14) == _DAT_100dd5f8) {
    DAT_10121dbc = 0;
    puVar1 = operator_new(4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_10091f50(puVar1);
      return puVar1;
    }
  }
  else if (_DAT_1010962c <= _DAT_100dd5f8) {
    lVar2 = __ftol();
    DAT_10121dbc = 0;
    if ((int)lVar2 == 1) {
      puVar1 = operator_new(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_10064850(puVar1);
        return puVar1;
      }
    }
    else {
      puVar1 = operator_new(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_10064850(puVar1);
        return puVar1;
      }
    }
  }
  else {
    DAT_10121dbc = 1;
    puVar1 = operator_new(0x218);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1009c250(puVar1);
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

