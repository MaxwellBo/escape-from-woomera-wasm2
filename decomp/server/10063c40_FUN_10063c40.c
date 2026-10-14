
void __fastcall FUN_10063c40(int *param_1)

{
  *(int *)param_1[1] = (int)s_weapon_9mmAR_10108bb0 - *(int *)(DAT_10122044 + 0x98);
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_9mmAR_mdl_10111a04);
  param_1[0x39] = 4;
  param_1[0x47] = 0x19;
  FUN_100b3430(param_1);
  return;
}

