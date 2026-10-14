
void __fastcall FUN_1008b0d0(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x148) = 3;
  *(undefined4 *)(param_1[1] + 0x15c) = 0xe;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x437f0000;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_sprites_laserdot_spr_10115480);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  return;
}

