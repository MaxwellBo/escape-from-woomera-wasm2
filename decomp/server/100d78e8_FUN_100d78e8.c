
int __cdecl FUN_100d78e8(uint param_1,int param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101351c0) &&
     ((*(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100d42a8(param_1);
    iVar1 = FUN_100d7941(param_1,param_2);
    FUN_100d4307(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100d3f8f();
  *pDVar2 = 9;
  return -1;
}

