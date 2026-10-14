
bool __fastcall FUN_10004f30(int param_1)

{
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return false;
  }
  return (bool)('\x01' - (((*(uint *)(*(int *)(param_1 + 0x1e4) + 8) | 0xc0000000) &
                          *(uint *)(param_1 + 0x15c)) != 0));
}

