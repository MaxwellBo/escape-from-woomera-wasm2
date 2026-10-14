
undefined ** __thiscall FUN_10022b20(void *this,undefined4 param_1)

{
  undefined **ppuVar1;
  
  switch(param_1) {
  case 0xc:
    return &PTR_DAT_101060b8;
  default:
    ppuVar1 = FUN_10026300(this,param_1);
    return ppuVar1;
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x19:
    return &PTR_DAT_10106128;
  case 0x18:
    return &PTR_DAT_101060f0;
  case 0x29:
    return &PTR_DAT_10106160;
  }
}

