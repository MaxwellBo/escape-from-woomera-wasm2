
undefined ** __thiscall FUN_10054210(void *param_1,int param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == 0x18) || (param_2 == 0x19)) {
    return &PTR_DAT_1010f8d8;
  }
  if ((param_2 == 0x29) && ((*(uint *)((int)param_1 + 0x15c) & 0x800) != 0)) {
    ppuVar1 = FUN_10096f50(param_1,0x16);
    return ppuVar1;
  }
  ppuVar1 = FUN_10096f50(param_1,param_2);
  return ppuVar1;
}

