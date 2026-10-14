
bool __fastcall FUN_1003e340(int param_1)

{
  if (DAT_100b6620 != 8) {
    return true;
  }
  if (*(uint *)(param_1 + 300) == 0) {
    return false;
  }
  return (1 << ((char)*(undefined4 *)(DAT_100a5178 + 0x8b4) - 1U & 0x1f) & *(uint *)(param_1 + 300))
         == 0;
}

