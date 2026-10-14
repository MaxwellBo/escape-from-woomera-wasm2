
undefined4 __fastcall FUN_100571a0(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_100bcdb8 != 2) {
    if (DAT_100bcdb8 == 0) {
      LVar1 = InterlockedExchange(&DAT_100bcdb8,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_100bcda0);
        FUN_10049c8a(FUN_1005721e);
        DAT_100bcdb8 = 2;
        goto LAB_10057212;
      }
      if (LVar1 == 2) {
        DAT_100bcdb8 = 2;
      }
    }
    while (DAT_100bcdb8 == 1) {
      Sleep(1);
    }
    if (DAT_100bcdb8 != 2) {
      return param_1;
    }
  }
LAB_10057212:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100bcda0);
  return param_1;
}

