
DWORD * FUN_1004d7f1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1007be10);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10053a99(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1007be10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1004d7de((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1004d84c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1004d84c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

