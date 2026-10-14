
void __fastcall FUN_1002d4d0(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_10121de8 == 1) {
    uVar1 = (*DAT_10121e08)(s_models_germanygibs_mdl_10108288);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0xc3) {
    uVar1 = (*DAT_10121e08)(s_models_agibs_mdl_10105fe0);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    return;
  }
  uVar1 = (*DAT_10121e08)(s_models_hgibs_mdl_10105fb4);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return;
}

