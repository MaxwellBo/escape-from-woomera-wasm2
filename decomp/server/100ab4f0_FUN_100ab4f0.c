
void __fastcall FUN_100ab4f0(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  param_1[0x39] = 0xd;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_v_tripmine_mdl_10119f7c);
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  *(undefined4 *)(param_1[1] + 0x114) = 3;
  *(undefined4 *)(param_1[1] + 0x128) = 8;
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  FUN_100b3430(param_1);
  param_1[0x47] = 1;
  iStack_4 = (**(code **)(*DAT_10121db8 + 0x1c))();
  if (iStack_4 == 0) {
    uStack_18 = 0x41800000;
    uStack_14 = 0x41800000;
    uStack_10 = 0x41e00000;
    uStack_c = 0xc1800000;
    uStack_8 = 0xc1800000;
    FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  }
  return;
}

