
undefined4 __fastcall FUN_100d9cb0(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_10134d10 != 2) {
    if (DAT_10134d10 == 0) {
      LVar1 = InterlockedExchange(&DAT_10134d10,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10134cf8);
        FUN_100c89be(FUN_100d9d2e);
        DAT_10134d10 = 2;
        goto LAB_100d9d22;
      }
      if (LVar1 == 2) {
        DAT_10134d10 = 2;
      }
    }
    while (DAT_10134d10 == 1) {
      Sleep(1);
    }
    if (DAT_10134d10 != 2) {
      return param_1;
    }
  }
LAB_100d9d22:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10134cf8);
  return param_1;
}

