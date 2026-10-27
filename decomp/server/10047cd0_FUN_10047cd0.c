
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10047cd0(int *param_1)

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
    pcVar2 = s_models_hassassin_mdl_1010dc1c;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42900000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  param_1[0xb4] = 0xf7;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a94;
  }
  uStack_18 = 0;
  param_1[0x70] = -0x40cccccd;
  param_1[0x76] = 0;
  param_1[0xae] = 0x2340;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f800000;
  uStack_14 = 0x41c00000;
  param_1[0xbb] = 0;
  uStack_10 = 0x42400000;
  param_1[0xcd] = 0x14;
  param_1[0xbc] = 0x41c00000;
  param_1[0xbd] = 0x42400000;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x41a00000;
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  (**(code **)(*param_1 + 0x134))();
  return;
}

