
void __fastcall FUN_10013b80(int param_1)

{
  if (*(int *)(param_1 + 0x1cc) - 1U < 0x1c) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42b40000;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42b40000;
  return;
}

