
void __fastcall FUN_100941f0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  return;
}

