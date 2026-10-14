
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005f700(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x284)) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x284);
  }
  param_4 = *(float *)(*(int *)(param_1 + 4) + 0x138) * *(float *)(param_1 + 0xcc) * param_4;
  if ((float)_DAT_100de1e0 < param_4) {
    do {
      fVar1 = param_4;
      if ((float)_DAT_100df828 < param_4) {
        fVar1 = (float)_DAT_100df828;
      }
      FUN_100ae940(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                   (undefined4 *)(*(int *)(param_1 + 0x270) * 0x10 + 0x1ec + param_1),fVar1,0);
      param_4 = param_4 - fVar1;
    } while ((float)_DAT_100de1e0 < param_4);
  }
  return;
}

