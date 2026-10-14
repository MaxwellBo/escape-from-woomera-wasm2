
void __fastcall FUN_10024250(int *param_1)

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
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_sprites_xspark4_spr_10106420);
  uStack_18 = 0;
  uStack_14 = 0;
  *(undefined4 *)(param_1[1] + 0x148) = 5;
  uStack_10 = 0;
  uStack_c = 0;
  *(undefined4 *)(param_1[1] + 0x150) = 0x437f0000;
  uStack_8 = 0;
  uStack_4 = 0;
  *(undefined4 *)(param_1[1] + 0x154) = 0x437f0000;
  *(undefined4 *)(param_1[1] + 0x158) = 0x437f0000;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x437f0000;
  *(undefined4 *)(param_1[1] + 0x144) = 0x3f000000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1d] = (int)CControllerZapBall::AnimateThink;
  param_1[0x1e] = (int)CControllerZapBall::ExplodeTouch;
  iVar1 = *(int *)(param_1[1] + 0x198);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_10024350;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
LAB_10024350:
  FUN_10019420(param_1 + 0xc2,iVar1);
  *(undefined4 *)(param_1[1] + 0x1e4) = *DAT_10122044;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

