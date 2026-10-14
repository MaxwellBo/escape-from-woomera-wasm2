
void __fastcall FUN_10071090(int *param_1)

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
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = s_models_osprey_mdl_10113614;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x43c80000;
  uStack_14 = 0x43c80000;
  uStack_10 = 0x42000000;
  uStack_c = 0xc3c80000;
  uStack_8 = 0xc3c80000;
  uStack_4 = 0xc2c80000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  param_1[0xdc] = 0x43480000;
  param_1[0xdd] = 0x43480000;
  *(undefined4 *)(param_1[1] + 0x160) = 0x43c80000;
  *(undefined4 *)(param_1[1] + 0x1f8) = 0x42a00000;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  FUN_10008190((int)param_1);
  iVar1 = (*DAT_10121f70)(0,0xff);
  *(float *)(param_1[1] + 0x130) = (float)iVar1;
  FUN_10008390((int)param_1);
  param_1[0x1d] = (int)COsprey::FindAllThink;
  param_1[0x1f] = (int)COsprey::CommandUse;
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x40) == 0) {
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  iVar1 = param_1[1];
  param_1[0xcc] = *(int *)(iVar1 + 8);
  param_1[0xcd] = *(int *)(iVar1 + 0xc);
  param_1[0xce] = *(int *)(iVar1 + 0x10);
  param_1[0xd2] = *(int *)(iVar1 + 0x50);
  param_1[0xd3] = *(int *)(iVar1 + 0x54);
  param_1[0xd4] = *(int *)(iVar1 + 0x58);
  param_1[0xc6] = *(int *)(iVar1 + 0x20);
  param_1[199] = *(int *)(iVar1 + 0x24);
  param_1[200] = *(int *)(iVar1 + 0x28);
  return;
}

