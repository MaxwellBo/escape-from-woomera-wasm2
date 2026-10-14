
void __fastcall FUN_1008bca0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  param_1[0x39] = 8;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_rpg_mdl_101154b0);
  param_1[0x49] = 1;
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar1 != 0) {
    param_1[0x47] = 2;
    FUN_100b3430(param_1);
    return;
  }
  param_1[0x47] = 1;
  FUN_100b3430(param_1);
  return;
}

