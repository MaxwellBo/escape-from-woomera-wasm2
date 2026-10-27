
/* WARNING: Removing unreachable block (ram,0x1009725e) */
/* WARNING: Removing unreachable block (ram,0x10097272) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10097110(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_squeak_mdl_10117484);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x41000000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1e] = (int)CSqueakGrenade::SuperBounceTouch;
  param_1[0x1d] = (int)CSqueakGrenade::HuntThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[199] = (int)(*DAT_10122044 + (float)_DAT_100e08d8);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126af4;
  }
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f000000;
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126afc;
  fVar1 = *DAT_10122044;
  fVar2 = (float)_DAT_100de468;
  param_1[0x70] = 0;
  param_1[0xc3] = (int)(fVar1 + fVar2);
  if (*(int *)(param_1[1] + 0x198) != 0) {
    FUN_10019420(param_1 + 0xcc,*(int *)(*(int *)(param_1[1] + 0x198) + 0x7c));
  }
  _DAT_10131060 = *DAT_10122044;
  *(undefined4 *)(param_1[1] + 0x128) = 3;
  FUN_10008190((int)param_1);
  return;
}

