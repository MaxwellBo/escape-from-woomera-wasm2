
void __fastcall FUN_10030ae0(int *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_100b2198)();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x54))();
    return;
  }
  (**(code **)(*param_1 + 0x50))();
  return;
}

