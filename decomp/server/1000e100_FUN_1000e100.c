
void __fastcall FUN_1000e100(int *param_1)

{
  undefined4 uVar1;
  
  (*DAT_10121e08)(s_models_barney_mdl_101033d0);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_barney_mdl_101033d0);
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  param_1[0xb4] = 0xf7;
  uVar1 = FUN_10008160(param_1,(&PTR_s_lying_on_back_10102fcc)[param_1[0xc2]]);
  *(undefined4 *)(param_1[1] + 0x128) = uVar1;
  if (*(int *)(param_1[1] + 0x128) == -1) {
    (*DAT_10121efc)(1,s_Dead_barney_with_bad_pose_101033b4);
  }
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  (**(code **)(*param_1 + 0x138))();
  return;
}

