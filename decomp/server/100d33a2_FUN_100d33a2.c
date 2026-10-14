
uint __cdecl FUN_100d33a2(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_10134a60 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_1011e028[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_10134a70,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_1011e234) {
          if ((int)param_3 < (int)DAT_1011e234) goto LAB_100d3434;
          iVar2 = MultiByteToWideChar(DAT_10134a70,9,(LPCSTR)param_2,DAT_1011e234,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_1011e234;
          }
        }
        if ((DAT_1011e234 <= param_3) && (param_2[1] != 0)) {
          return DAT_1011e234;
        }
      }
LAB_100d3434:
      pDVar3 = FUN_100d3f8f();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

