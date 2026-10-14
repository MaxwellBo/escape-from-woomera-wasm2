
void __fastcall FUN_1004d1c0(int *param_1)

{
  *(int *)param_1[1] = (int)s_weapon_9mmhandgun_1010337c - *(int *)(DAT_10122044 + 0x98);
  (**(code **)(*param_1 + 0x2c))();
  param_1[0x39] = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_9mmhandgun_mdl_1010ebc4);
  param_1[0x47] = 0x11;
  FUN_100b3430(param_1);
  return;
}

