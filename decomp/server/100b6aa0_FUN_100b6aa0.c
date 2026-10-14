
void __fastcall FUN_100b6aa0(int *param_1)

{
  int iVar1;
  
  FUN_10007fc0((int)param_1,0.0);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  iVar1 = param_1[0x37];
  if (iVar1 == 0x11) {
    if (param_1[0x35] != 0) {
      FUN_100b6750(param_1,0x12);
      FUN_100b6bb0(param_1);
    }
  }
  else if (iVar1 == 0x12) {
    if (*(float *)(param_1[1] + 0x1e4) < *DAT_10122044) {
      FUN_100b6750(param_1,0x13);
      FUN_100b6b80(param_1);
      return;
    }
  }
  else if ((iVar1 == 0x13) && (param_1[0x35] != 0)) {
    FUN_100b6750(param_1,1);
    return;
  }
  return;
}

