
void __fastcall FUN_100824b0(int *param_1)

{
  undefined4 uVar1;
  
  (*DAT_10121e08)(s_models_player_mdl_10105870);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_player_mdl_10105870);
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x114) = 1;
  param_1[0xb4] = 0xf7;
  uVar1 = FUN_10008160(param_1,(&PTR_s_deadback_10114744)[param_1[0xc2]]);
  *(undefined4 *)(param_1[1] + 0x128) = uVar1;
  if (*(int *)(param_1[1] + 0x128) == -1) {
    (*DAT_10121efc)(1,s_Dead_hevsuit_with_bad_pose_10115118);
    *(undefined4 *)(param_1[1] + 0x128) = 0;
    *(undefined4 *)(param_1[1] + 0x118) = 1;
  }
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  (**(code **)(*param_1 + 0x138))();
  return;
}

