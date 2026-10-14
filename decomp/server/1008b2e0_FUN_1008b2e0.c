
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008b2e0(int *param_1)

{
  int iVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_rpgrocket_mdl_10115498);
  fStack_18 = 0.0;
  fStack_14 = 0.0;
  fStack_10 = 0.0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&fStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  *(int *)param_1[1] = (int)s_rpg_rocket_10109528 - *(int *)(DAT_10122044 + 0x98);
  param_1[0x1d] = (int)CRpgRocket::IgniteThink;
  param_1[0x1e] = (int)CGrenade::ExplodeTouch;
  *(float *)(param_1[1] + 0x50) = *(float *)(param_1[1] + 0x50) - _DAT_100de4f8;
  FUN_100af200(param_1[1] + 0x50);
  *(float *)(param_1[1] + 0x50) = -(*(float *)(param_1[1] + 0x50) + _DAT_100de4f8);
  iVar1 = param_1[1];
  fStack_18 = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd640;
  fStack_14 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd640;
  fStack_10 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd640;
  *(float *)(iVar1 + 0x20) = fStack_18;
  *(float *)(iVar1 + 0x24) = fStack_14;
  *(float *)(iVar1 + 0x28) = fStack_10;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  (**(code **)(*param_1 + 8))(0x3ecccccd);
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126b38;
  return;
}

