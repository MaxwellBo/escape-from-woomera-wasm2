
void __cdecl FUN_1004da9a(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1004ca8b(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

