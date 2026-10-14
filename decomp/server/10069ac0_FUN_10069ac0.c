
void __fastcall FUN_10069ac0(int *param_1)

{
  int unaff_retaddr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x108) = 8;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_sprites_muzzleflash3_spr_10112544);
  uStack_18 = 0;
  uStack_14 = 0;
  *(undefined4 *)(param_1[1] + 0x150) = 0x437f0000;
  uStack_10 = 0;
  uStack_c = 0;
  *(undefined4 *)(param_1[1] + 0x154) = 0x43600000;
  uStack_8 = 0;
  uStack_4 = 0;
  *(undefined4 *)(param_1[1] + 0x158) = 0x43400000;
  *(undefined4 *)(param_1[1] + 0x144) = 0x40000000;
  param_1[0xc9] = 1;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x437f0000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  param_1[0x1d] = (int)CNihilanthHVR::HoverThink;
  param_1[0x1e] = (int)CNihilanthHVR::BounceTouch;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  FUN_10019420(param_1 + 0x5a,unaff_retaddr);
  return;
}

