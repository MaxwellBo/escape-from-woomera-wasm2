
void __fastcall FUN_1008a5b0(int *param_1)

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
    pcVar2 = s_models_roach_mdl_10115424;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(DAT_10122044[0x26] + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x40000000;
  uStack_c = 0xbf800000;
  uStack_8 = 0xbf800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  param_1[0xb4] = 0xc3;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
  param_1[0x70] = 0x3f000000;
  param_1[0x76] = 0;
  (**(code **)(*param_1 + 0x134))();
  (**(code **)(*param_1 + 0x1a8))(1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x174) = 0;
  *(undefined4 *)(iVar1 + 0x178) = 0;
  *(undefined4 *)(iVar1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  param_1[0xc4] = 0;
  param_1[0xc2] = -0x40800000;
  param_1[0xc5] = 0;
  param_1[0xc3] = *DAT_10122044;
  return;
}

