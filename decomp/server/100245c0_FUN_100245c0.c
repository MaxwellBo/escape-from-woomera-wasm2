
void __fastcall FUN_100245c0(int *param_1)

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
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_crossbow_bolt_mdl_101064f4);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  param_1[0x1e] = (int)CCrossbowBolt::BoltTouch;
  param_1[0x1d] = (int)CCrossbowBolt::BubbleThink;
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  return;
}

