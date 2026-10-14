
undefined ** __thiscall FUN_1000dcb0(void *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined **ppuVar2;
  
  switch(param_2) {
  case 1:
    ppuVar2 = FUN_1009ba00(param_1,param_2);
    if (ppuVar2 == &PTR_DAT_101067e8) {
      return &PTR_DAT_10102fa8;
    }
    break;
  case 0xf:
    ppuVar2 = FUN_1009ba00(param_1,param_2);
    if (ppuVar2 == &PTR_DAT_101067e8) {
      return &PTR_DAT_10102f70;
    }
    break;
  case 0x10:
    return &PTR_DAT_10102f08;
  case 0x1d:
    bVar1 = FUN_10019450((uint *)((int)param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return &PTR_DAT_10102f38;
    }
  default:
    ppuVar2 = FUN_1009ba00(param_1,param_2);
  }
  return ppuVar2;
}

