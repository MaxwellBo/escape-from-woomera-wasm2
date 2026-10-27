
void FUN_1005721e(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedExchange(&DAT_100bcdb8,3);
  if (LVar1 == 2) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_100bcda0);
  }
  return;
}

