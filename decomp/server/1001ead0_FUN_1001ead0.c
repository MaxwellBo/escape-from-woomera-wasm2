
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001ead0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  *(float *)(*(int *)(param_1 + 4) + 0x160) =
       *(float *)(*(int *)(param_1 + 4) + 0x1b0) * _DAT_100dd614;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1b0) = 0x40a00000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  return;
}

