
void __fastcall FUN_1002bed0(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  FUN_10019680(param_1);
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_1002cce0(*(int *)(param_1 + 0xb8));
    FUN_100638f0(*(int *)(param_1 + 0xb8),DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_1002cce0(*(int *)(param_1 + 0xbc));
    FUN_100638f0(*(int *)(param_1 + 0xbc),DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  return;
}

