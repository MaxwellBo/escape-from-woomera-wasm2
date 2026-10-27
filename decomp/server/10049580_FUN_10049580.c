
undefined ** __thiscall FUN_10049580(void *param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined **ppuVar2;
  
  if (param_2 == 0x18) {
    return &PTR_DAT_1010dce8;
  }
  if ((param_2 == 0x29) &&
     (bVar1 = FUN_10019450((uint *)((int)param_1 + 0x160)), CONCAT31(extraout_var,bVar1) != 0)) {
    return &PTR_DAT_1010dce8;
  }
  ppuVar2 = FUN_10049340(param_1,param_2);
  return ppuVar2;
}

