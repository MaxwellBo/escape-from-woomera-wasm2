
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100768e0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x1f8) == _DAT_100dd5f8) {
    param_1[0x32] = 0x42c80000;
  }
  else {
    param_1[0x32] = *(int *)(iVar1 + 0x1f8);
  }
  *(undefined4 *)(iVar1 + 0x1f8) = 0;
  iVar1 = param_1[1];
  *(int *)(iVar1 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
  iVar1 = param_1[1];
  param_1[0x43] = *(int *)(iVar1 + 0x5c);
  param_1[0x44] = *(int *)(iVar1 + 0x60);
  param_1[0x45] = *(int *)(iVar1 + 100);
  *(int *)(iVar1 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  lVar2 = __ftol();
  *(int *)(param_1[1] + 0x184) = (int)lVar2;
  param_1[0x33] = 0x3f800000;
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    iVar1 = *(int *)(param_1[1] + 0x1cc);
    if (iVar1 == 0) {
      (*DAT_10121efc)(1,s_func_tracktrain_with_no_target_10113f60);
    }
    else {
      (*DAT_10121efc)(1,s_func_tracktrain__s_has_no_target_10113f3c,
                      *(int *)(DAT_10122044 + 0x98) + iVar1);
    }
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = param_1[1];
  FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = param_1[1];
  param_1[0x35] = *(int *)(iVar1 + 0xdc);
  param_1[0x36] = *(int *)(iVar1 + 0xe0);
  param_1[0x37] = *(int *)(iVar1 + 0xe4);
  param_1[0x38] = *(int *)(iVar1 + 0xe8);
  param_1[0x39] = *(int *)(iVar1 + 0xec);
  param_1[0x3a] = *(int *)(iVar1 + 0xf0);
  param_1[0x3a] = (int)((float)param_1[0x3a] + _DAT_100ee01c);
  FUN_10077160(param_1,0x3dcccccd,0);
  param_1[0x1d] = (int)CFuncTrackTrain::Find;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

