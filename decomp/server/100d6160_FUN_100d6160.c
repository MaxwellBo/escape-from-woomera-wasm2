
int __cdecl FUN_100d6160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10134bfc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10134bfc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10134bfc != (FARPROC)0x0) {
        DAT_10134c00 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10134c04 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100d61af;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100d61af:
    if (DAT_10134c00 != (FARPROC)0x0) {
      iVar1 = (*DAT_10134c00)();
      if ((iVar1 != 0) && (DAT_10134c04 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10134c04)(iVar1);
      }
    }
    iVar1 = (*DAT_10134bfc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

