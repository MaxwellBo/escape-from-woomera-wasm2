
void __fastcall FUN_10011260(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

