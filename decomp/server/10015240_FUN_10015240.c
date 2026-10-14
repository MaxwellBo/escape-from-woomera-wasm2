
void __fastcall FUN_10015240(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

