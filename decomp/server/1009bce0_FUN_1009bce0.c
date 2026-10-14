
void __fastcall FUN_1009bce0(int param_1)

{
  if ((*(uint *)(param_1 + 0x15c) & 0x200000) == 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x20000000;
  }
  return;
}

