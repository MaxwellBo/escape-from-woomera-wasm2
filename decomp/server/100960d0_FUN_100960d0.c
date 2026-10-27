
void __fastcall FUN_100960d0(int param_1)

{
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000000) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0x4000000;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) != 0) {
    FUN_10095ff0(param_1);
    return;
  }
  return;
}

