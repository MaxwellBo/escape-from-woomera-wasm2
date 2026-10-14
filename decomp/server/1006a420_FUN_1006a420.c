
void __fastcall FUN_1006a420(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x150) = 0x437f0000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x154) = 0x437f0000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x158) = 0x437f0000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x144) = 0x3f800000;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_sprites_exit1_spr_10112578);
  *(code **)(param_1 + 0x78) = CNihilanthHVR::RemoveTouch;
  return;
}

