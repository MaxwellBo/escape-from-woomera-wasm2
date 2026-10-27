
int __cdecl FUN_10055841(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100bcd5c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100bcd5c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100bcd5c != (FARPROC)0x0) {
        DAT_100bcd60 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100bcd64 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10055890;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10055890:
    if (DAT_100bcd60 != (FARPROC)0x0) {
      iVar1 = (*DAT_100bcd60)();
      if ((iVar1 != 0) && (DAT_100bcd64 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100bcd64)(iVar1);
      }
    }
    iVar1 = (*DAT_100bcd5c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

