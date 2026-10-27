
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011600(int param_1)

{
  uint *puVar1;
  float10 fVar2;
  
  FUN_10011020(param_1);
  fVar2 = (float10)(*DAT_10121eec)(s_showtriggers_10103c24);
  if (fVar2 == (float10)_DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
  *puVar1 = *puVar1 | 0x800000;
  return;
}

