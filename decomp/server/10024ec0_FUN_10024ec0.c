
void __fastcall FUN_10024ec0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x48] != 0) {
    iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar1 != 0) {
      FUN_10024ef0(param_1);
      return;
    }
  }
  FUN_10025130(param_1);
  return;
}

