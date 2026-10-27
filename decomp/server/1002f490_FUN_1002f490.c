
void __fastcall FUN_1002f490(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e0) = 0;
  }
  return;
}

