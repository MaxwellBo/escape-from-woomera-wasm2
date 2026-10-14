
void __fastcall FUN_1000c100(int *param_1)

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
    pcVar2 = s_models_barnacle_mdl_10102de4;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0xc2000000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  param_1[0xb4] = 0xf7;
  *(undefined4 *)(param_1[1] + 0x118) = 0x10;
  *(undefined4 *)(param_1[1] + 0x160) = 0x41c80000;
  param_1[0x70] = 0x3f000000;
  param_1[0x76] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[199] = -0x3d380000;
  FUN_10008390((int)param_1);
  (**(code **)(*param_1 + 0x1a8))(1);
  param_1[0x1d] = (int)CBarnacle::BarnacleThink;
  (**(code **)(*param_1 + 8))(0x3f000000);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  return;
}

