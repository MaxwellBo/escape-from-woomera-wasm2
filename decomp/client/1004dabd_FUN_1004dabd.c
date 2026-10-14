
void __cdecl FUN_1004dabd(uint param_1)

{
  if ((0x1007be17 < param_1) && (param_1 < 0x1007c079)) {
    FUN_1004caec(((int)(param_1 + 0xeff841e8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

