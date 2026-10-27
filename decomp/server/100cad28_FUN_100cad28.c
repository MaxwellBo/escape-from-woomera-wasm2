
DWORD * FUN_100cad28(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1011e288);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100c8dda(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1011e288,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100cad15((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100cad83;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100cad83:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

