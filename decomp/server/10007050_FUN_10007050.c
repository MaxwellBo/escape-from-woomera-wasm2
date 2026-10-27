
void __fastcall FUN_10007050(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_oxygen_mdl_10101d9c);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42100000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1e] = (int)CAirtank::TankTouch;
  param_1[0x1d] = (int)CAirtank::TankThink;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x160) = 0x41a00000;
  *(undefined4 *)(param_1[1] + 0x1e0) = 0x42480000;
  param_1[0xc3] = 1;
  return;
}

