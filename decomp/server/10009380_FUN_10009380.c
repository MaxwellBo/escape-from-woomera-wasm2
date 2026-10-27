
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10009380(int *param_1)

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
    pcVar2 = s_models_apache_mdl_10102bb8;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0xc2800000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a5c;
  }
  param_1[0x70] = -0x40cb020c;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  FUN_10008190((int)param_1);
  iVar1 = (*DAT_10121f70)(0,0xff);
  *(float *)(param_1[1] + 0x130) = (float)iVar1;
  FUN_10008390((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x44) != 0) {
    param_1[0x1f] = (int)CApache::StartupUse;
    param_1[0xc2] = 10;
    return;
  }
  param_1[0x1d] = (int)CApache::HuntThink;
  param_1[0x1e] = (int)CApache::FlyTouch;
  (**(code **)(*param_1 + 8))(0x3f800000);
  param_1[0xc2] = 10;
  return;
}

