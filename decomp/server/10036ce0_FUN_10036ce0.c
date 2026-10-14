
void __cdecl FUN_10036ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  void *this;
  int local_4;
  
  local_4 = 0;
  ppuVar1 = FUN_10036bf0(param_2,&local_4);
  if (local_4 != 0) {
    iVar2 = (*DAT_10121f70)(0,local_4 + -1);
    FUN_10094b20(this,param_1,4,ppuVar1[iVar2],param_3,0x3f800000,0,100);
  }
  return;
}

