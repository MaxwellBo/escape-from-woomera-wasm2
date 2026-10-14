
void __fastcall FUN_10011230(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

