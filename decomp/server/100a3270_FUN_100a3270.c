
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a3270(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) != DAT_10121dd8) || (*(float *)(iVar1 + 0x54) != DAT_10121ddc)) ||
     (*(float *)(iVar1 + 0x58) != DAT_10121de0)) {
    FUN_10098fc0(iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  fVar2 = (float10)(*DAT_10121eec)(s_showtriggers_10103c24);
  if (fVar2 == (float10)_DAT_100dd5f8) {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  }
  return;
}

