
undefined4 FUN_100caca3(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100cf611();
  DAT_1011e288 = TlsAlloc();
  if (DAT_1011e288 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100c8dda(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1011e288,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100cad15((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

