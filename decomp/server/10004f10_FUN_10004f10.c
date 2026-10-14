
uint __fastcall FUN_10004f10(int param_1)

{
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 0x1e4) + 8) & *(uint *)(param_1 + 0x15c);
}

