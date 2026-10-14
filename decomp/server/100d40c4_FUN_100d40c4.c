
undefined4 __cdecl FUN_100d40c4(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101351c0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_101350c0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_101349cc == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100d411d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_100d411d:
      *(HANDLE *)((&DAT_101350c0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_100d3f8f();
  *pDVar1 = 9;
  pDVar1 = FUN_100d3f98();
  *pDVar1 = 0;
  return 0xffffffff;
}

