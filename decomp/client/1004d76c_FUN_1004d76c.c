
undefined4 FUN_1004d76c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1004c9f6();
  DAT_1007be10 = TlsAlloc();
  if (DAT_1007be10 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10053a99(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1007be10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1004d7de((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

