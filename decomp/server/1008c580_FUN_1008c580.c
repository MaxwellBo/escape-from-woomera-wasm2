
void __fastcall FUN_1008c580(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_satchel_mdl_10115530);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x40800000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0xc0800000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1e] = (int)CSatchelCharge::SatchelSlide;
  param_1[0x1f] = (int)CGrenade::DetonateUse;
  param_1[0x1d] = (int)CSatchelCharge::SatchelThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f4ccccd;
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126b50;
  *(undefined4 *)(param_1[1] + 0x128) = 1;
  return;
}

