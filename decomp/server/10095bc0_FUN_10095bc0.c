
void __fastcall FUN_10095bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 8))(0x3e99999a);
  iVar1 = param_1[0x2f];
  iVar2 = -1;
  while (iVar3 = iVar1, iVar3 != -1) {
    if ((*DAT_10122044 < (float)param_1[iVar3 * 8 + 0x37]) ||
       (param_1[iVar3 * 8 + 0x37] == -0x40800000)) {
      iVar1 = param_1[(iVar3 + 7) * 8];
      iVar2 = iVar3;
    }
    else {
      iVar1 = param_1[(iVar3 + 7) * 8];
      FUN_10095c90(iVar3,iVar2);
    }
  }
  if (param_1[0x31] != 0) {
    iVar1 = FUN_10095ea0(param_1,2);
    iVar1 = iVar1 - param_1[0x30];
    iVar2 = FUN_10095ea0(param_1,1);
    iVar3 = FUN_10095ea0(param_1,2);
    (*DAT_10121efc)(2,s_Soundlist___d____d___d__10117194,iVar3,iVar2,iVar1);
    iVar1 = FUN_10095ea0(param_1,2);
    param_1[0x30] = iVar1;
  }
  return;
}

