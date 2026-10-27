
undefined ** __thiscall FUN_1008e090(void *param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  
  switch(param_2) {
  case 1:
    ppuVar1 = FUN_1009ba00(param_1,param_2);
    if (ppuVar1 == &PTR_DAT_101067e8) {
      return &PTR_DAT_101157c0;
    }
    break;
  default:
    ppuVar1 = FUN_1009ba00(param_1,param_2);
    break;
  case 0xf:
    ppuVar1 = FUN_1009ba00(param_1,param_2);
    if (ppuVar1 == &PTR_DAT_101067e8) {
      return &PTR_DAT_10115748;
    }
    break;
  case 0x10:
    return &PTR_DAT_10115648;
  case 0x2b:
    return &PTR_DAT_101156c0;
  case 0x30:
    return &PTR_DAT_10115848;
  case 0x31:
    return &PTR_DAT_101158c8;
  case 0x32:
    return &PTR_DAT_10115788;
  case 0x33:
    return &PTR_DAT_10115898;
  case 0x34:
    return &PTR_DAT_10115670;
  case 0x35:
    return &PTR_DAT_101156a0;
  }
  return ppuVar1;
}

