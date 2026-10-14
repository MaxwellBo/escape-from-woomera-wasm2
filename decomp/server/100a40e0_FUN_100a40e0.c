
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a40e0(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  if (_DAT_100dd5f8 < *(float *)(param_1[1] + 0x144)) {
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  return;
}

