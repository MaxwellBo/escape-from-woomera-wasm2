
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100042f0(int *param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0xb8) == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x208);
    pcVar3 = s_models_agrunt_mdl_10101a84;
  }
  else {
    uVar4 = *(undefined4 *)(iVar2 + 0x208);
    pcVar3 = (char *)((int)DAT_10122044[0x26] + *(int *)(iVar2 + 0xb8));
  }
  (*DAT_10121e10)(uVar4,pcVar3);
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
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a54;
  }
  uStack_18 = 0x41c00000;
  uStack_14 = 0x42800000;
  uStack_10 = 0x42400000;
  param_1[0xbb] = 0x41c00000;
  param_1[0xbc] = 0x42800000;
  param_1[0x70] = 0x3e4ccccd;
  param_1[0x76] = 0;
  param_1[0xae] = 8;
  param_1[0xbd] = 0x42400000;
  iVar2 = (*DAT_10121f70)(0,10);
  fVar1 = (float)iVar2 + *DAT_10122044 + _DAT_100dd63c;
  param_1[0xd4] = (int)fVar1;
  param_1[0xd3] = (int)fVar1;
  (**(code **)(*param_1 + 0x134))();
  return;
}

