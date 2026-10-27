
void __fastcall FUN_1008e7a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*DAT_10121e08)(s_models_scientist_mdl_10105858);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_scientist_mdl_10105858);
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  param_1[0xb4] = 0xf7;
  if (*(int *)(param_1[1] + 0x114) == -1) {
    uVar2 = (*DAT_10121f70)(0,3);
    *(undefined4 *)(param_1[1] + 0x114) = uVar2;
  }
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0x114) == 2) {
    *(undefined4 *)(iVar1 + 0x110) = 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x110) = 0;
  }
  uVar2 = FUN_10008160(param_1,(&PTR_s_lying_on_back_10115918)[param_1[0xc2]]);
  *(undefined4 *)(param_1[1] + 0x128) = uVar2;
  if (*(int *)(param_1[1] + 0x128) == -1) {
    (*DAT_10121efc)(1,s_Dead_scientist_with_bad_pose_10115c50);
  }
  (**(code **)(*param_1 + 0x138))();
  return;
}

