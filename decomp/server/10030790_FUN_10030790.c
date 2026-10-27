
byte __fastcall FUN_10030790(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    return 0;
  }
  return -(*(int *)(*(int *)(param_1 + 4) + 0x184) != 0) & 2;
}

