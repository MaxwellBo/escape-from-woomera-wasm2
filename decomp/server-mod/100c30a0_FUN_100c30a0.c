
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100c30a0(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  fVar1 = (float10)(*DAT_10121eec)(s_showtriggers_10103c24);
  if (fVar1 == (float10)_DAT_100dd5f8) {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  }
  return;
}

