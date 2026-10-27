
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10044470(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  *(float *)(*(int *)(param_1 + 4) + 0x160) =
       *(float *)(*(int *)(param_1 + 4) + 0x1b0) * _DAT_100dd614;
  if (_DAT_100dd5f8 < param_4) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x100;
  }
  if (_DAT_100ddacc <= param_4) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x200;
  }
  return 1;
}

