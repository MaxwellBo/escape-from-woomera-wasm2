
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10046170(int param_1)

{
  if (*(int *)(param_1 + 0x308) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x128) = *(int *)(*(int *)(param_1 + 4) + 0x128) + 1;
    FUN_10008190(param_1);
    if (*(float *)(param_1 + 200) == (float)_DAT_100de1e8) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 0;
      FUN_10008190(param_1);
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
  FUN_10007fc0(param_1,0.1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  (*DAT_10121efc)(1,s_sequence___d__frame___0f_1010d694,
                  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128),
                  (double)*(float *)(*(int *)(param_1 + 4) + 0x130));
  return 0;
}

