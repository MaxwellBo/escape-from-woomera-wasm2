
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10079eb0(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[0x1d] = (int)CGunTarget::Start;
    (**(code **)(*param_1 + 8))(0x3e99999a);
  }
  return;
}

