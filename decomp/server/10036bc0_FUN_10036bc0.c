
int __fastcall FUN_10036bc0(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    return (-(uint)((*(uint *)(*(int *)(param_1 + 4) + 0x118) & 0x80) != 0) & 0xfffffffe) + 2;
  }
  return 0;
}

