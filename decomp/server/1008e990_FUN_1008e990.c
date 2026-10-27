
void __fastcall FUN_1008e990(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1[1] + 0xb8) == 0) {
    pcVar4 = s_models_scientist_mdl_10105858;
  }
  else {
    pcVar4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0xb8));
  }
  (*DAT_10121e08)(pcVar4);
  iVar3 = param_1[1];
  if (*(int *)(iVar3 + 0xb8) == 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x208);
    pcVar4 = s_models_scientist_mdl_10105858;
  }
  else {
    uVar2 = *(undefined4 *)(iVar3 + 0x208);
    pcVar4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar3 + 0xb8));
  }
  (*DAT_10121e10)(uVar2,pcVar4);
  (**(code **)(*param_1 + 0x2c))();
  FUN_10008390((int)param_1);
  uStack_18 = 0x41600000;
  uStack_14 = 0x41600000;
  uStack_10 = 0x42100000;
  uStack_c = 0xc1600000;
  uStack_8 = 0xc1600000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42480000;
  param_1[0xb4] = 0xf7;
  param_1[0x70] = -0x40cccccd;
  param_1[0xae] = 0x480;
  uVar1 = *(uint *)(param_1[1] + 0x1a0);
  if ((uVar1 & 0x400) == 0) {
    *(uint *)(param_1[1] + 0x1a0) = uVar1 | 0x100;
  }
  if (*(int *)(param_1[1] + 0x114) == -1) {
    uVar2 = (*DAT_10121f70)(0,3);
    *(undefined4 *)(param_1[1] + 0x114) = uVar2;
  }
  if (*(int *)(param_1[1] + 0x114) == 2) {
    *(undefined4 *)(param_1[1] + 0x110) = 1;
  }
  iVar3 = FUN_10008160(param_1,(byte *)s_sitlookleft_10115c84);
  param_1[0xe4] = iVar3;
  iVar3 = (*DAT_10121f70)(0,4);
  *(int *)(param_1[1] + 0x128) = iVar3 + param_1[0xe4];
  FUN_10008190((int)param_1);
  param_1[0x1d] = (int)CSittingScientist::SittingThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  (*DAT_10121e70)(*(undefined4 *)(param_1[1] + 0x208));
  return;
}

