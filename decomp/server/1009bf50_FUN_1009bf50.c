
bool __fastcall FUN_1009bf50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x76] == 6) {
    iVar1 = FUN_10090010(param_1[0xbf]);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = (**(code **)(*param_1 + 0xb8))();
  return iVar1 != 0;
}

