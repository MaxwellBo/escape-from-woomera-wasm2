
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003f510(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar5 = s_models_garg_mdl_1010d098;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar5 = (char *)((int)DAT_10122044[0x26] + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar4,pcVar5);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  param_1[0xb4] = 0xc3;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a84;
  }
  param_1[0x70] = -0x41b33333;
  param_1[0x76] = 0;
  (**(code **)(*param_1 + 0x134))();
  piVar3 = FUN_1002ca80(0x1010d03c,(undefined4 *)(param_1[1] + 8),0);
  param_1[0xc2] = (int)piVar3;
  *(undefined4 *)(piVar3[1] + 0x148) = 3;
  *(undefined4 *)(piVar3[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(piVar3[1] + 0x154) = 0x437f0000;
  *(undefined4 *)(piVar3[1] + 0x158) = 0x437f0000;
  *(undefined4 *)(piVar3[1] + 0x14c) = 0;
  *(undefined4 *)(piVar3[1] + 0x15c) = 0xe;
  iVar1 = param_1[0xc2];
  iVar2 = *(int *)(param_1[1] + 0x208);
  if (iVar2 != 0) {
    uVar4 = (*DAT_10121f24)(iVar2);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x110) = uVar4;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
    *(int *)(*(int *)(iVar1 + 4) + 0x194) = iVar2;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 0xc;
  }
  FUN_1003e710((int)param_1);
  param_1[200] = (int)(*DAT_10122044 + _DAT_100dd5d8);
  param_1[0xc9] = (int)(*DAT_10122044 + _DAT_100de4ac);
  return;
}

