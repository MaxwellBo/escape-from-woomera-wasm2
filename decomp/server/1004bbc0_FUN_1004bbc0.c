
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004bbc0(int *param_1)

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
    pcVar2 = s_models_hgrunt_mdl_1010ea24;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)((int)DAT_10122044[0x26] + *(int *)(iVar1 + 0xb8));
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
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126aa0;
  }
  param_1[0x70] = 0x3e4ccccd;
  param_1[0x76] = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x425c0000;
  param_1[0xd0] = (int)(*DAT_10122044 + _DAT_100dd618);
  param_1[0xd1] = (int)*DAT_10122044;
  param_1[0xbb] = 0;
  param_1[0xdd] = -1;
  param_1[0xae] = 0x748;
  param_1[0xbc] = 0;
  param_1[0xce] = 0;
  param_1[0xd8] = 1;
  param_1[0xbd] = 0x425c0000;
  if (*(int *)(param_1[1] + 0x168) == 0) {
    *(undefined4 *)(param_1[1] + 0x168) = 3;
  }
  if ((*(byte *)(param_1[1] + 0x168) & 8) == 0) {
    param_1[0xd9] = 0x24;
  }
  else {
    FUN_100084f0(param_1,2,1);
    param_1[0xd9] = 8;
  }
  param_1[0xad] = param_1[0xd9];
  iVar1 = (*DAT_10121f70)(0,99);
  if (iVar1 < 0x50) {
    *(undefined4 *)(param_1[1] + 0x110) = 0;
  }
  else {
    *(undefined4 *)(param_1[1] + 0x110) = 1;
  }
  if ((*(uint *)(param_1[1] + 0x168) & 8) == 0) {
    if ((*(uint *)(param_1[1] + 0x168) & 4) != 0) {
      FUN_100084f0(param_1,1,3);
      *(undefined4 *)(param_1[1] + 0x110) = 1;
    }
  }
  else {
    FUN_100084f0(param_1,1,2);
  }
  _DAT_10131064 = 0;
  (**(code **)(*param_1 + 0x134))();
  return;
}

