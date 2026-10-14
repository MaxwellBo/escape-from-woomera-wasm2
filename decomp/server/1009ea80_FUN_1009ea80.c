
void __fastcall FUN_1009ea80(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_maw_mdl_10118498);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42960000;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x50) = 0x42b40000;
  return;
}

