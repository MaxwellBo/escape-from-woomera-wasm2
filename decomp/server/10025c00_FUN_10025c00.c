
void __fastcall FUN_10025c00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10025c60(param_1);
  if (iVar1 == 0) {
    param_1[0x1d] = (int)CCrowbar::SwingAgain;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
  }
  return;
}

