
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100351f0(int *param_1)

{
  FUN_100b06a0((undefined4 *)(param_1[1] + 8));
  *(float *)(param_1[1] + 0x1f8) = *(float *)(param_1[1] + 0x1f8) - (float)_DAT_100dfb80;
  if (_DAT_100dd5f8 < *(float *)(param_1[1] + 0x1f8)) {
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    return;
  }
  FUN_100b0ef0((int)param_1);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
  return;
}

