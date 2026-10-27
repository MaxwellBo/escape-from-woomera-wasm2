
uint __cdecl FUN_100552f7(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_100bcb04 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_1007bae8[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_100bcb14,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_1007bcf4) {
          if ((int)param_3 < (int)DAT_1007bcf4) goto LAB_10055389;
          iVar2 = MultiByteToWideChar(DAT_100bcb14,9,(LPCSTR)param_2,DAT_1007bcf4,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_1007bcf4;
          }
        }
        if ((DAT_1007bcf4 <= param_3) && (param_2[1] != 0)) {
          return DAT_1007bcf4;
        }
      }
LAB_10055389:
      pDVar3 = FUN_1004ddc4();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

