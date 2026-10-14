
void __fastcall FUN_100b4920(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 1;
  FUN_100afdc0(param_1[1],&DAT_10121dd8,&DAT_10121dd8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_weaponbox_mdl_1011ba78);
  return;
}

