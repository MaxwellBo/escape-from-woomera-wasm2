
void __fastcall FUN_10057e00(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_sprites_null_spr_10108000);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
    FUN_10057ee0((int)param_1);
  }
  return;
}

