
void __fastcall FUN_1004cfc0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  (*DAT_10121e08)(s_models_hgrunt_mdl_1010ea24);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_hgrunt_mdl_1010ea24);
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  param_1[0xb4] = 0xf7;
  uVar1 = FUN_10008160(param_1,(&PTR_s_deadstomach_1010e720)[param_1[0xc2]]);
  *(undefined4 *)(param_1[1] + 0x128) = uVar1;
  if (*(int *)(param_1[1] + 0x128) == -1) {
    (*DAT_10121efc)(1,s_Dead_hgrunt_with_bad_pose_1010eba8);
  }
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  iVar3 = *(int *)(param_1[1] + 0x114);
  *(undefined4 *)(param_1[1] + 0x114) = 0;
  if ((iVar3 < 5) || (7 < iVar3)) {
    *(undefined4 *)(param_1[1] + 0x110) = 0;
  }
  else {
    *(undefined4 *)(param_1[1] + 0x110) = 1;
  }
  iVar2 = *(int *)(param_1[1] + 0x168);
  if (iVar2 == 0) {
    iVar2 = 0;
LAB_1004d0a4:
    FUN_100084f0(param_1,2,iVar2);
  }
  else {
    if (iVar2 == 1) {
      iVar2 = 1;
      goto LAB_1004d0a4;
    }
    if (iVar2 == 2) {
      iVar2 = 2;
      goto LAB_1004d0a4;
    }
  }
  switch(iVar3) {
  case 2:
    FUN_100084f0(param_1,2,2);
  case 0:
  case 6:
    iVar3 = 0;
    break;
  case 3:
    FUN_100084f0(param_1,2,2);
  case 1:
    iVar3 = 1;
    break;
  case 4:
  case 7:
    iVar3 = 2;
    break;
  case 5:
    iVar3 = 3;
    break;
  default:
    goto switchD_1004d0b2_default;
  }
  FUN_100084f0(param_1,1,iVar3);
switchD_1004d0b2_default:
  (**(code **)(*param_1 + 0x138))();
  return;
}

