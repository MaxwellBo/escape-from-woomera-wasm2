
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10014510(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = s_models_bullsquid_mdl_10104234;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(DAT_10122044[0x26] + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
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
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a74;
  }
  param_1[0x70] = 0x3e4ccccd;
  param_1[0x76] = 0;
  param_1[0xc2] = 1;
  param_1[0xc4] = *DAT_10122044;
  (**(code **)(*param_1 + 0x134))();
  return;
}

