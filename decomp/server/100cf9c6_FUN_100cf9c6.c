
void __cdecl FUN_100cf9c6(uint param_1)

{
  if ((0x1012058f < param_1) && (param_1 < 0x101207f1)) {
    FUN_100cf707(((int)(param_1 + 0xefedfa70) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

