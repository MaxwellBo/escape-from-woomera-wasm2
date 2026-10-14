
void __fastcall FUN_10018950(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0x3f800000;
  }
  return;
}

