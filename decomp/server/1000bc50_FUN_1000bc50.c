
void __fastcall FUN_1000bc50(int *param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_HVR_mdl_10102cdc);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1d] = (int)CApacheHVR::IgniteThink;
  param_1[0x1e] = (int)CGrenade::ExplodeTouch;
  FUN_100af210((float *)(param_1[1] + 0x50));
  iVar1 = DAT_10122044;
  param_1[0xc4] = *(int *)(DAT_10122044 + 0x28);
  param_1[0xc5] = *(int *)(iVar1 + 0x2c);
  param_1[0xc6] = *(int *)(iVar1 + 0x30);
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x1e0) = 0x43160000;
  return;
}

