
void __fastcall FUN_100799f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_10075210((int)param_1);
  if (param_1[0x65] == 2) {
    iVar1 = param_1[0x61];
    iVar2 = *(int *)(iVar1 + 4);
    iVar2 = FUN_10073de0((void *)param_1[0x60],*(float *)(iVar2 + 8),*(float *)(iVar2 + 0xc));
    *(int *)(iVar1 + 0xbc) = iVar2;
  }
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1[1] + 0x104) = 0xbf800000;
  (**(code **)(*param_1 + 0x130))(param_1[0x37]);
  param_1[0x67] = 1;
  return;
}

