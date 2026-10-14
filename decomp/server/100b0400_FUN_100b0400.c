
void __cdecl FUN_100b0400(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b0180(param_2);
  if (iVar1 != 0) {
    if (param_2 == 0xf7) {
      iVar1 = (*DAT_10121f70)();
      FUN_100b0450(param_1,iVar1 + 0xd);
      return;
    }
    iVar1 = (*DAT_10121f70)(0,5);
    FUN_100b0450(param_1,iVar1 + 0x13);
  }
  return;
}

