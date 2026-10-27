
void __fastcall FUN_100552e0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) != 0) {
    (*DAT_10121e10)(*(undefined4 *)(iVar1 + 0x208),
                    *(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
    FUN_10054f30((int)param_1);
    return;
  }
  (*DAT_10121e10)(*(undefined4 *)(iVar1 + 0x208),s_models_w_battery_mdl_1010faa0);
  FUN_10054f30((int)param_1);
  return;
}

