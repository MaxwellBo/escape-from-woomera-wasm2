
void FUN_100d9d2e(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedExchange(&DAT_10134d10,3);
  if (LVar1 == 2) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10134cf8);
  }
  return;
}

