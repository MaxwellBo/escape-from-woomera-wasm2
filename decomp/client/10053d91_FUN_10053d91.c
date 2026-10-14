
undefined4 __cdecl FUN_10053d91(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100bd160) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_100bd060)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100bca70 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10053dea;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10053dea:
      *(HANDLE *)((&DAT_100bd060)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1004ddc4();
  *pDVar1 = 9;
  pDVar1 = FUN_1004ddcd();
  *pDVar1 = 0;
  return 0xffffffff;
}

