
void __cdecl FUN_1004daec(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1004caec(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

