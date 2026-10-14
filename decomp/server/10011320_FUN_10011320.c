
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011320(void *param_1)

{
  uint *puVar1;
  
  FUN_10098fc0(*(int *)((int)param_1 + 4));
  FUN_10011020((int)param_1);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 4) + 0x1a4);
    *puVar1 = *puVar1 | 4;
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 0;
  }
  if (*(float *)(*(int *)((int)param_1 + 4) + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  FUN_100113a0(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0x1f8));
  return;
}

