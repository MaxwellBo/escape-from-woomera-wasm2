
undefined ** __thiscall FUN_10004d00(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined **ppuVar2;
  
  switch(param_1) {
  case 0xe:
    return &PTR_DAT_10101650;
  default:
    ppuVar2 = FUN_10096f50(this,param_1);
    return ppuVar2;
  case 0x12:
    return &PTR_DAT_101015a0;
  case 0x18:
    return &PTR_DAT_10101510;
  case 0x1c:
    return &PTR_DAT_101014b8;
  case 0x29:
    break;
  case 0x2b:
    return &PTR_DAT_101014e0;
  case 0x2c:
    return &PTR_DAT_10101680;
  }
  bVar1 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return &PTR_DAT_10101488;
  }
  return &PTR_DAT_10101450;
}

